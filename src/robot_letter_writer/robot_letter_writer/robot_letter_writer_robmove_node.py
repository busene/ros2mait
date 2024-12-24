# This node subscribes to the typed_text topic and reads the characters that are being typed, and translates that to motion (using the letter_movements code)

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

# Import the refactored letter movements module
from .letter_movements_robmove import get_letter_movements

# ===================================================================== #
# ===================================================================== #

    # Created the subscriber node that subscribes to the typed_text topic
class RobotLetterWriterNode(Node):
    def __init__(self):
        super().__init__('robot_letter_writer_node')
        self.subscription = self.create_subscription(
            String,
            'typed_text',
            self.typed_text_callback,
            10)
        self.subscription  # prevent unused variable warning

        self.client = RBT()  # Initialize the robot client used from the IFRA package

    def typed_text_callback(self, msg): # receiving which character was pressed and execute needed function from the movements program
        char = msg.data
        actions = get_letter_movements(char)

        if actions:
            for action in actions:
                self.execute_movement(action)       # receives the proper movement from letter_movements_robmove.py
        elif char == '0':
            movements = RobotMovement()
            self.execute_movement(movements.move_to_zero()[0]) 
        elif char == 'BackSpace':
            self.get_logger().info("BackSpace pressed, ignoring.")  # ignore special characters for now
        elif char == ' ':
            self.get_logger().info("Space pressed, ignoring.")
        else:
            self.get_logger().info(f"Unknown character: {char}")

    def execute_movement(self, action):
        MovType, Speed, InputPose = action
        RES = self.client.RobMove_EXECUTE(MovType, Speed, InputPose)
        self.get_logger().info(f"Moved to position. Result: {RES['Message']}")

def main(args=None):
    rclpy.init(args=args)
    letter_writer_node = RobotLetterWriterNode()
    rclpy.spin(letter_writer_node)
    letter_writer_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
