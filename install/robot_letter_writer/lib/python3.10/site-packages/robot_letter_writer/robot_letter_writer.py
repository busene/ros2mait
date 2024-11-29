#!/usr/bin/env Python3

# test_Move.py -> This python script creates an instance of the RBT() class in ros2srrc_execution and executes the Move ROS 2 Action.

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
            'letter_command',
            self.letter_callback,
            10)
        self.subscription  # prevent unused variable warning

    def letter_callback(self, msg):
        if msg.data == 'a':
            self.execute_movement(move_to_a())
        elif msg.data == 'b':
            self.execute_movement(move_to_b())
        elif msg.data == 'c':
            self.execute_movement(move_to_c())
        elif msg.data == '0':
            self.execute_movement(move_to_zero())

    def execute_movement(self, action):
        RES = self.client.Move_EXECUTE(action)
        self.node.get_logger().info(f"Moved to position. Result: {RES['Message']}")

def main(args=None):
    rclpy.init(args=args)
    letter_writer_node = RobotLetterWriterNode()
    rclpy.spin(robot_letter_writer_node)
    letter_writer_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()

