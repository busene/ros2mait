#!/usr/bin/env python3

# ===== IMPORT REQUIRED COMPONENTS ===== #
# System functions and classes:
import sys, os
# Required to include ROS2 and its components:
import rclpy
from ament_index_python.packages import get_package_share_directory

# IMPORT ROS2 Custom Messages:
from ros2srrc_data.msg import Action
from ros2srrc_data.msg import Joint
from ros2srrc_data.msg import Joints
from ros2srrc_data.msg import Xyz
from ros2srrc_data.msg import Xyzypr
from ros2srrc_data.msg import Ypr

# IMPORT Python classes:
PATH = os.path.join(get_package_share_directory("ros2srrc_execution"), 'python')
PATH_robot = PATH + "/robot"
# ROBOT CLASS:
sys.path.append(PATH_robot)
from robot import RBT

from std_msgs.msg import String 
from rclpy.node import Node

from .letter_movements import move_to_zero, move_to_a, move_to_b, move_to_c  # Import all letter movements

# ===================================================================== #
# ===================================================================== #

class RobotLetterWriterNode(Node):
    def __init__(self):
        super().__init__('robot_letter_writer_node')
        self.subscription = self.create_subscription(
            String,
            'typed_text',
            self.typed_text_callback,
            10)
        self.subscription  # prevent unused variable warning

        self.client = RBT()  # Initialize the robot client

    def typed_text_callback(self, msg):
        char = msg.data
        if char == 'a':
            self.execute_movement(move_to_a())
        elif char == 'b':
            self.execute_movement(move_to_b())
        elif char == 'c':
            self.execute_movement(move_to_c())
        elif char == '0':
            self.execute_movement(move_to_zero())
        elif char == 'BackSpace':
            self.get_logger().info("BackSpace pressed, ignoring.")
        elif char == ' ':
            self.get_logger().info("Space pressed, ignoring.")
        else:
            self.get_logger().info(f"Unknown character: {char}")

    def execute_movement(self, action):
        RES = self.client.Move_EXECUTE(action)
        self.get_logger().info(f"Moved to position. Result: {RES['Message']}")

def main(args=None):
    rclpy.init(args=args)
    letter_writer_node = RobotLetterWriterNode()
    rclpy.spin(letter_writer_node)
    letter_writer_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
