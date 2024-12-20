import sys
import os
import tkinter as tk
import customtkinter as ctk
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from tkinter import messagebox
import threading
import subprocess

import configparser

# Add the directory to the Python path if necessary
sys.path.append('/home/ubuntu/ros2ws/src/robot_letter_writer/robot_letter_writer')


# Initialize ROS 2 context
rclpy.init()

class ROSPublisher(Node):
    def __init__(self):
        super().__init__('gui_publisher')
        self.publisher_typed_text = self.create_publisher(String, 'typed_text', 10)
        self.publisher_arm_control = self.create_publisher(String, 'arm_control', 10)
        # self.publisher_robot_state = self.create_publisher(String, 'robot_state', 10)

    def publish_typed_text(self, text):
        msg = String()
        msg.data = text
        current_time = self.get_clock().now()
        self.publisher_typed_text.publish(msg)
        seconds = current_time.nanoseconds / 1e9        # Make sure time is given in seconds
        self.get_logger().info(f'Publishing: "{msg.data}" at {seconds:.6f} seconds')

    def publish_arm_control(self, command):
        msg = String()
        msg.data = command
        self.publisher_arm_control.publish(msg)
        self.get_logger().info(f'Publishing: "{msg.data}"')

class App(ctk.CTk):
    def __init__(self):
        super().__init__()

        self.title("ROS 2 Letter and Arm Publisher")
        self.geometry("900x800")
        self.configure(fg_color="#2C3E50")
        ctk.set_appearance_mode("dark") # theme
        ctk.set_default_color_theme("blue") # theme


        # Initialize config parser
        self.config = configparser.ConfigParser()
        self.config_file_path = '/home/ubuntu/ros2ws/config.ini'

        # Check if the file exists
        if not os.path.exists(self.config_file_path):
            print(f"File not found: {self.config_file_path}")
            messagebox.showerror("Error", f"File not found: {self.config_file_path}")
            return

        # Read the configuration file
        self.config.read(self.config_file_path)

        # Ensure the 'RobotSettings' section exists
        if not self.config.has_section('RobotSettings'):
            self.config.add_section('RobotSettings')
            self.config.set('RobotSettings', 'FILTER', '5')
            self.config.set('RobotSettings', 'COORD_DIV', '7000')
            self.config.set('RobotSettings', 'SPEED', '1.0')
            try:
                with open(self.config_file_path, 'w') as configfile:
                    self.config.write(configfile)
            except PermissionError:
                print(f"Permission denied to write to file: {self.config_file_path}")
                messagebox.showerror("Error", f"Permission denied to write to file: {self.config_file_path}")
                return

        # Create a parent frame to hold both letter_frame and config_frame
        self.main_frame = ctk.CTkFrame(self, fg_color="transparent")
        self.main_frame.pack(side="left", padx=10, pady=10)

        # Frame for Letter Publisher
        self.letter_frame = ctk.CTkFrame(self.main_frame, fg_color="transparent")
        self.letter_frame.pack(side="top", fill="x", padx=10, pady=10)

        # Frame for configuration
        self.config_frame = ctk.CTkFrame(self.main_frame, fg_color="transparent")
        self.config_frame.pack(side="bottom", fill="x", padx=10, pady=10)

        # Configuration entries
        self.filter_label = ctk.CTkLabel(self.config_frame, text="FILTER:")
        self.filter_label.grid(row=0, column=0, padx=(0, 10), pady=(10, 10))
        self.filter_entry = ctk.CTkEntry(self.config_frame, width=100, height=30)
        self.filter_entry.insert(0, self.config.get('RobotSettings', 'FILTER', fallback='5'))
        self.filter_entry.grid(row=0, column=1, padx=(10, 10), pady=(10, 10))

        self.coord_div_label = ctk.CTkLabel(self.config_frame, text="COORD_DIV:")
        self.coord_div_label.grid(row=1, column=0, padx=(0, 10), pady=(10, 10))
        self.coord_div_entry = ctk.CTkEntry(self.config_frame, width=100, height=30)
        self.coord_div_entry.insert(0, self.config.get('RobotSettings', 'COORD_DIV', fallback='7000'))
        self.coord_div_entry.grid(row=1, column=1, padx=(10, 10), pady=(10, 10))

        self.speed_label = ctk.CTkLabel(self.config_frame, text="SPEED:")
        self.speed_label.grid(row=2, column=0, padx=(0, 10), pady=(10, 10))
        self.speed_entry = ctk.CTkEntry(self.config_frame, width=100, height=30)
        self.speed_entry.insert(0, self.config.get('RobotSettings', 'SPEED', fallback='1.0'))
        self.speed_entry.grid(row=2, column=1, padx=(10, 10), pady=(10, 10))

        self.save_button = ctk.CTkButton(self.config_frame, text="Save Configuration", command=self.save_config)
        self.save_button.grid(row=3, column=0, columnspan=2, padx=(10, 10), pady=(10, 10))

        # frame for typing text
        self.input_field = ctk.CTkEntry(self.letter_frame, width=300, height=40, 
                                        placeholder_text="Type here...",
                                        font=("Arial", 14))
        self.input_field.pack(pady=20)


        # Input field for typing text
        self.output_label = ctk.CTkLabel(self.letter_frame, text="Output will appear here", 
                                         font=("Arial", 16), text_color="#ECF0F1",
                                         wraplength=400)
        self.output_label.pack(pady=20)

        # Buttons for modes and send and clear
        self.button_frame = ctk.CTkFrame(self.letter_frame, fg_color="transparent")
        self.button_frame.pack(pady=10)

        self.realtime_button = ctk.CTkButton(self.button_frame, text="Real-time Mode", 
                                             command=self.toggle_realtime_mode,
                                             fg_color="#27AE60", hover_color="#2ECC71")
        self.realtime_button.pack(side="left", padx=10)

        self.manual_button = ctk.CTkButton(self.button_frame, text="Manual Mode", 
                                           command=self.toggle_manual_mode,
                                           fg_color="#E74C3C", hover_color="#C0392B")
        self.manual_button.pack(side="left", padx=10)

        self.send_button = ctk.CTkButton(self.letter_frame, text="Send", command=self.send_text,
                                         fg_color="#3498DB", hover_color="#2980B9")
        self.send_button.pack(pady=10)
        self.send_button.pack_forget()

        self.clear_button = ctk.CTkButton(self.letter_frame, text="Clear", command=self.clear_text,
                                          fg_color="#95A5A6", hover_color="#7F8C8D")
        self.clear_button.pack(pady=10)

        # Frame for Arm Controller
        self.arm_frame = ctk.CTkFrame(self, fg_color="transparent")
        self.arm_frame.pack(side="right", padx=10, pady=10)

        # Step size entry, variable field, starts with 0.01
        self.step_size_label = ctk.CTkLabel(self.arm_frame, text="Step Size:")
        self.step_size_label.grid(row=0, column=0, padx=(0, 10), pady=(10, 10))
        self.step_size = tk.StringVar(value="0.01")
        self.step_size_entry = ctk.CTkEntry(self.arm_frame, textvariable=self.step_size, width=100, height=30)
        self.step_size_entry.grid(row=0, column=1, padx=(10, 10), pady=(10, 10))

        # Create joystick-like control buttons
        self.joystick_frame = ctk.CTkFrame(self.arm_frame, fg_color="transparent")
        self.joystick_frame.grid(row=1, column=0, columnspan=2, padx=(10, 10), pady=(10, 10))
        self.create_button(self.joystick_frame, "↑", 0, 1, lambda: self.move("forward"))
        self.create_button(self.joystick_frame, "↓", 2, 1, lambda: self.move("backward"))
        self.create_button(self.joystick_frame, "←", 1, 0, lambda: self.move("left"))
        self.create_button(self.joystick_frame, "→", 1, 2, lambda: self.move("right"))

        # Create up and down buttons
        self.up_button = ctk.CTkButton(self.arm_frame, text="Up", command=lambda: self.move("up"), 
                                       fg_color="#27AE60", hover_color="#2ECC71")
        self.up_button.grid(row=2, column=0, columnspan=2, padx=(10, 10), pady=(10, 10))

        self.down_button = ctk.CTkButton(self.arm_frame, text="Down", command=lambda: self.move("down"), 
                                         fg_color="#E74C3C", hover_color="#C0392B")
        self.down_button.grid(row=3, column=0, columnspan=2, padx=(10, 10), pady=(10, 10))

        # Create reset button
        self.reset_button = ctk.CTkButton(self.arm_frame, text="Reset", command=self.reset, 
                                          fg_color="#95A5A6", hover_color="#7F8C8D")
        self.reset_button.grid(row=4, column=0, columnspan=2, padx=(10, 10), pady=(10, 10))

        # Create joint control buttons
        self.joint_frame = ctk.CTkFrame(self.arm_frame, fg_color="transparent")
        self.joint_frame.grid(row=5, column=0, columnspan=2, padx=(10, 10), pady=(10, 10))
        for i in range(6):
            self.joint_label = ctk.CTkLabel(self.joint_frame, text=f"Joint {i+1}")
            self.joint_label.grid(row=i, column=0, padx=(0, 10), pady=(10, 10))
            self.create_button(self.joint_frame, "+", i, 1, lambda j=i+1: self.move_joint(j, "positive"))
            self.create_button(self.joint_frame, "-", i, 2, lambda j=i+1: self.move_joint(j, "negative"))

        # Create place buttons
        self.place_frame = ctk.CTkFrame(self.arm_frame, fg_color="transparent")
        self.place_frame.grid(row=6, column=0, columnspan=2, padx=(10, 10), pady=(10, 10))
        self.place1_button = ctk.CTkButton(self.place_frame, text="Place 1", command=self.place1, 
                                           fg_color="#27AE60", hover_color="#2ECC71")
        self.place1_button.grid(row=0, column=0, padx=(10, 10), pady=(10, 10))
        self.place2_button = ctk.CTkButton(self.place_frame, text="Place 2", command=self.place2, 
                                           fg_color="#E74C3C", hover_color="#C0392B")
        self.place2_button.grid(row=0, column=1, padx=(10, 10), pady=(10, 10))

        # Button to run robot_state node
        run_ros_button = ctk.CTkButton(
            self.button_frame,
            text="Get current coordinates",
            command=self.run_ros_node,
            fg_color="#3498DB",
            hover_color="#2980B9" 
        )
        run_ros_button.pack(side="left", padx=10)




        # Initialize ROS 2 node
        self.ros_publisher = ROSPublisher()
        self.ros_thread = threading.Thread(target=self.ros_spin, daemon=True)
        self.ros_thread.start()

        # Real-time mode activated on start-up
        self.realtime_mode = True
        self.toggle_realtime_mode()

    # running robot_state node
    def run_ros_node(self):
         """Runs a ROS 2 node using subprocess."""
         try:
             subprocess.Popen(['ros2', 'run', 'robot_state', 'robot_state'])
         except Exception as e:
             messagebox.showerror("Error", f"Failed to start ROS 2 Node: {str(e)}")


    def save_config(self):
        # Ensure the 'RobotSettings' section exists
        if not self.config.has_section('RobotSettings'):
            self.config.add_section('RobotSettings')

        self.config['RobotSettings']['FILTER'] = self.filter_entry.get()
        self.config['RobotSettings']['COORD_DIV'] = self.coord_div_entry.get()
        self.config['RobotSettings']['SPEED'] = self.speed_entry.get()

        with open(self.config_file_path, 'w') as configfile:
            self.config.write(configfile)
        messagebox.showinfo("Success", "Configuration saved successfully")

    def get_config_value(self, section, key, default=None):
        try:
            return self.config.get(section, key)
        except (configparser.NoSectionError, configparser.NoOptionError):
            return default


#+++++++++++++++++++++++++++++++++++++++

    def ros_spin(self):
        try:
            rclpy.spin(self.ros_publisher)
        except Exception as e:
            print(f"Error spinning ROS node: {e}")

    # Toggling real-time or manual mode
    def toggle_realtime_mode(self):
        self.realtime_mode = True
        self.input_field.bind("<Key>", self.on_key_press)
        self.send_button.pack_forget()
        self.realtime_button.configure(fg_color="#27AE60")
        self.manual_button.configure(fg_color="#E74C3C")

    def toggle_manual_mode(self):
        self.realtime_mode = False
        self.input_field.unbind("<Key>")
        self.send_button.pack(pady=10)
        self.manual_button.configure(fg_color="#27AE60")
        self.realtime_button.configure(fg_color="#E74C3C")

    # Methods to handle typed text in real-time or manual mode
    def on_key_press(self, event):
        if self.realtime_mode:
            if len(event.char) == 1 and event.char.isprintable():
                self.process_and_publish(event.char)
            elif event.keysym == 'BackSpace':
                self.process_and_publish('BackSpace')
            elif event.keysym == 'space':
                self.process_and_publish(' ')
        self.update_output()

    def send_text(self):
        current_text = self.input_field.get()
        for char in current_text:
            self.process_and_publish(char)
        self.update_output()

    # Process and publish the typed text, and clear input field
    def process_and_publish(self, char):
        self.ros_publisher.publish_typed_text(char)

    def update_output(self):
        current_text = self.input_field.get()
        self.output_label.configure(text=f"Current text: {current_text}")

    def clear_text(self):
        self.input_field.delete(0, 'end')
        self.output_label.configure(text="Output will appear here")

    # Helper method to create and place button
    def create_button(self, parent, text, row, col, command):
        button = ctk.CTkButton(parent, text=text, command=command, width=50, height=30)
        button.grid(row=row, column=col, padx=5, pady=5)
        return button

    # Method to handle arm movement commands
    def move(self, direction):
        step = self.step_size.get()
        command = f"{direction}_{step}"
        print(f"Moving {direction} with step {step}")
        self.ros_publisher.publish_arm_control(command)

    # Reset
    def reset(self):
        print("Resetting")
        self.ros_publisher.publish_arm_control("reset")

    # Joint movements
    def move_joint(self, joint_number, direction):
        command = f"joint{joint_number}_{direction}"
        print(f"Moving joint {joint_number} {direction}")
        self.ros_publisher.publish_arm_control(command)

    # Place 1 and Place 2 commands
    def place1(self):
        self.ros_publisher.publish_arm_control("Place 1")
        print("Place 1 command sent")

    def place2(self):
        self.ros_publisher.publish_arm_control("Place 2")
        print("Place 2 command sent")

    # Closing
    def on_closing(self):
        rclpy.shutdown()
        self.quit()

if __name__ == "__main__":
    app = App()
    app.protocol("WM_DELETE_WINDOW", app.on_closing)
    app.mainloop()