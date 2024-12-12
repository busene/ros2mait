import tkinter as tk
import customtkinter as ctk
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import threading       # used

class ROSPublisher(Node):
    def __init__(self):
        super().__init__('gui_publisher')
        self.publisher_typed_text = self.create_publisher(String, 'typed_text', 10)     # publisher for the typed text, seperated from arm control
        self.publisher_arm_control = self.create_publisher(String, 'arm_control', 10)   # publisher for the arm control, seperated from the typed text

# Method to publish a message to the ros topics
    def publish_typed_text(self, text):
        msg = String()
        msg.data = text
        current_time = self.get_clock().now()
        self.publisher_typed_text.publish(msg)
        self.get_logger().info(f'Publishing: "{msg.data}" at {current_time.nanoseconds / 1e9:.6f} seconds')

    def publish_arm_control(self, command):
        msg = String()
        msg.data = command
        self.publisher_arm_control.publish(msg)
        self.get_logger().info(f'Publishing: "{msg.data}"')

class App(ctk.CTk):
    def __init__(self):
        super().__init__()

        self.title("ROS 2 Letter and Arm Publisher")
        self.geometry("800x600")
        self.configure(fg_color="#2C3E50")

        ctk.set_appearance_mode("dark")
        ctk.set_default_color_theme("blue")

        # Frame for Letter Publisher
        self.letter_frame = ctk.CTkFrame(self, fg_color="transparent")
        self.letter_frame.pack(side="left", padx=10, pady=10)

        self.input_field = ctk.CTkEntry(self.letter_frame, width=300, height=40, 
                                        placeholder_text="Type here...",
                                        font=("Arial", 14))
        self.input_field.pack(pady=20)

        self.output_label = ctk.CTkLabel(self.letter_frame, text="Output will appear here", 
                                         font=("Arial", 16), text_color="#ECF0F1",
                                         wraplength=400)
        self.output_label.pack(pady=20)

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

        # Step size entry
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

        # Initialize ROS 2
        rclpy.init()
        self.ros_publisher = ROSPublisher()
        self.ros_thread = threading.Thread(target=self.ros_spin, daemon=True)
        self.ros_thread.start()

        self.realtime_mode = True
        self.toggle_realtime_mode()

    def ros_spin(self):
        rclpy.spin(self.ros_publisher)

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

    def process_and_publish(self, char):
        self.ros_publisher.publish_typed_text(char)

    def update_output(self):
        current_text = self.input_field.get()
        self.output_label.configure(text=f"Current text: {current_text}")

    def clear_text(self):
        self.input_field.delete(0, 'end')
        self.output_label.configure(text="Output will appear here")

    def create_button(self, parent, text, row, col, command):
        button = ctk.CTkButton(parent, text=text, command=command, width=50, height=30)
        button.grid(row=row, column=col, padx=5, pady=5)
        return button

    def move(self, direction):
        step = self.step_size.get()
        command = f"{direction}_{step}"
        print(f"Moving {direction} with step {step}")
        self.ros_publisher.publish_arm_control(command)

    def reset(self):
        print("Resetting")
        self.ros_publisher.publish_arm_control("reset")

    def move_joint(self, joint_number, direction):
        command = f"joint{joint_number}_{direction}"
        print(f"Moving joint {joint_number} {direction}")
        self.ros_publisher.publish_arm_control(command)

    def on_closing(self):
        rclpy.shutdown()
        self.quit()

if __name__ == "__main__":
    app = App()
    app.protocol("WM_DELETE_WINDOW", app.on_closing)
    app.mainloop()
