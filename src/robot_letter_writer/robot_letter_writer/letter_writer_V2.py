#!/usr/bin/env python3

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

from std_msgs.msg import String #heb ik toegevoegd

# ===================================================================== #
# ===================================================================== #

#vanaf hier.... tot.....

class RobotMover:
    def __init__(self):
        self.node = rclpy.create_node('robot_mover')
        self.client = RBT()
        self.subscription = self.node.create_subscription(
            String,
            'letter_command',
            self.letter_callback,
            10)

    def letter_callback(self, msg):
        if msg.data == 'A':
            self.move_to_zero()

    def move_to_zero(self):
        ACTION = Action()
        ACTION.action = "MoveJ"
        ACTION.speed = 1.0

        INPUT = Joints()
        INPUT.joint1 = 0.0
        INPUT.joint2 = 0.0
        INPUT.joint3 = 0.0
        INPUT.joint4 = 0.0
        INPUT.joint5 = 0.0
        INPUT.joint6 = 0.0
        ACTION.movej = INPUT

        RES = self.client.Move_EXECUTE(ACTION)
        self.node.get_logger().info(f"Moved to zero position. Result: {RES['Message']}")

def main(args=None):
    rclpy.init(args=args)

    robot_mover = RobotMover()

    try:
        rclpy.spin(robot_mover.node)
    except KeyboardInterrupt:
        pass

    robot_mover.node.destroy_node()
    rclpy.shutdown()
    print("CLOSING PROGRAM... BYE!")

#tot hier vervangen

if __name__ == '__main__':
    main()