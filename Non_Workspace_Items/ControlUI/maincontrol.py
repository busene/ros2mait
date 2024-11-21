import tkinter as tk
from tkinter import ttk
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import threading

class ROSPublisher(Node):
    def __init__(self):
        super().__init__('controlui_publisher')
        self.publisher_ = self.create_publisher(String, 'arm_control', 10)

    def publish_command(self, command):
        msg = String()
        msg.data = command
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publishing: "{msg.data}"')

class RobotArmController:
    def __init__(self, master, ros_publisher):
        self.master = master
        self.ros_publisher = ros_publisher
        master.title("6DOF Robot Arm Controller")
        master.geometry("400x300")

        self.create_widgets()

    def create_widgets(self):
        main_frame = ttk.Frame(self.master, padding="10")
        main_frame.grid(row=0, column=0, sticky=(tk.W, tk.E, tk.N, tk.S))

        joystick_frame = ttk.Frame(main_frame, padding="5")
        joystick_frame.grid(row=0, column=0, rowspan=3, padx=(0, 10))

        self.create_button(joystick_frame, "↑", 0, 1, lambda: self.move("forward"))
        self.create_button(joystick_frame, "↓", 2, 1, lambda: self.move("backward"))
        self.create_button(joystick_frame, "←", 1, 0, lambda: self.move("left"))
        self.create_button(joystick_frame, "→", 1, 2, lambda: self.move("right"))

        self.create_button(main_frame, "Up", 0, 1, lambda: self.move("up"))
        self.create_button(main_frame, "Down", 2, 1, lambda: self.move("down"))

    def create_button(self, parent, text, row, col, command):
        button = ttk.Button(parent, text=text, command=command, width=5)
        button.grid(row=row, column=col, padx=2, pady=2)
        return button

    def move(self, direction):
        print(f"Moving {direction}")
        self.ros_publisher.publish_command(direction)

def main(args=None):
    rclpy.init(args=args)
    ros_publisher = ROSPublisher()

    root = tk.Tk()
    app = RobotArmController(root, ros_publisher)

    def ros_spin():
        while rclpy.ok():
            rclpy.spin_once(ros_publisher, timeout_sec=0.1)

    ros_thread = threading.Thread(target=ros_spin, daemon=True)
    ros_thread.start()

    root.mainloop()

    rclpy.shutdown()

if __name__ == "__main__":
    main()
credits