# This program is the UI that can send messages to the arm_control topic in the ROS2 network. 
# 
# Importing necessary libraries
import tkinter as tk  # For creating the GUI
from tkinter import ttk  # For themed tkinter widgets
import rclpy  # ROS2 Python client library
from rclpy.node import Node  # ROS2 Node class
from std_msgs.msg import String  # ROS2 String message type
import threading  # For running ROS2 operations in a separate thread

# ROS2 Publisher Node
class ROSPublisher(Node):
    def __init__(self):
        super().__init__('controlui_publisher')
        # Create a publisher for the 'arm_control' topic
        self.publisher_ = self.create_publisher(String, 'arm_control', 10)

    def publish_command(self, command):
        # Create and publish a String message
        msg = String()
        msg.data = command
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: "{msg.data}"')

# Main GUI class for the Robot Arm Controller
class RobotArmController:
    def __init__(self, master, ros_publisher):
        self.master = master
        self.ros_publisher = ros_publisher
        master.title("6DOF Robot Arm Controller")
        master.geometry("500x400")

        # Variable to store step size
        self.step_size = tk.StringVar(value="0.01")
        self.create_widgets()

    def create_widgets(self):
        # Create the main frame
        main_frame = ttk.Frame(self.master, padding="10")
        main_frame.grid(row=0, column=0, sticky=(tk.W, tk.E, tk.N, tk.S))

        # Step size entry
        ttk.Label(main_frame, text="Step Size:").grid(row=0, column=0, sticky=tk.W)
        step_entry = ttk.Entry(main_frame, textvariable=self.step_size, width=10)
        step_entry.grid(row=0, column=1, sticky=tk.W)

        # Create joystick-like control buttons
        joystick_frame = ttk.Frame(main_frame, padding="5")
        joystick_frame.grid(row=1, column=0, rowspan=3, padx=(0, 10))

        self.create_button(joystick_frame, "↑", 0, 1, lambda: self.move("forward"))
        self.create_button(joystick_frame, "↓", 2, 1, lambda: self.move("backward"))
        self.create_button(joystick_frame, "←", 1, 0, lambda: self.move("left"))
        self.create_button(joystick_frame, "→", 1, 2, lambda: self.move("right"))

        # Create up and down buttons
        self.create_button(main_frame, "Up", 1, 1, lambda: self.move("up"))
        self.create_button(main_frame, "Down", 3, 1, lambda: self.move("down"))

        # Create reset button
        self.create_button(main_frame, "Reset", 4, 1, self.reset)

        # Create joint control buttons
        joint_frame = ttk.Frame(main_frame, padding="5")
        joint_frame.grid(row=5, column=0, columnspan=2, pady=(10, 0))

        for i in range(6):
            ttk.Label(joint_frame, text=f"Joint {i+1}").grid(row=i, column=0, padx=(0, 5))
            self.create_button(joint_frame, "+", i, 1, lambda j=i+1: self.move_joint(j, "positive"))
            self.create_button(joint_frame, "-", i, 2, lambda j=i+1: self.move_joint(j, "negative"))

    def create_button(self, parent, text, row, col, command):
        # Helper method to create and place a button
        button = ttk.Button(parent, text=text, command=command, width=5)
        button.grid(row=row, column=col, padx=2, pady=2)
        return button

    def move(self, direction):
        # Method to handle movement commands
        step = self.step_size.get()
        command = f"{direction}_{step}"
        print(f"Moving {direction} with step {step}")
        self.ros_publisher.publish_command(command)

    def reset(self):
        # Method to handle reset command
        print("Resetting")
        self.ros_publisher.publish_command("reset")

    def move_joint(self, joint_number, direction):
        # Method to handle joint movement commands
        command = f"joint{joint_number}_{direction}"
        print(f"Moving joint {joint_number} {direction}")
        self.ros_publisher.publish_command(command)

def main(args=None):
    # Initialize ROS2
    rclpy.init(args=args)
    ros_publisher = ROSPublisher()

    # Create the main Tkinter window
    root = tk.Tk()
    app = RobotArmController(root, ros_publisher)

    # Function to keep ROS2 node spinning in a separate thread
    def ros_spin():
        while rclpy.ok():
            rclpy.spin_once(ros_publisher, timeout_sec=0.1)

    # Start ROS2 spinning in a separate thread
    ros_thread = threading.Thread(target=ros_spin, daemon=True)
    ros_thread.start()

    # Start the Tkinter event loop
    root.mainloop()

    # Shutdown ROS2 when the GUI is closed
    rclpy.shutdown()

if __name__ == "__main__":
    main()