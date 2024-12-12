# robot_letter_writer.py

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
from your_package.msg import Robpose  # Replace 'your_package' with the actual package name
from rclpy.node import Node

# Import the refactored letter movements module
from .letter_movements_robmove import get_letter_movements

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

        self.subscription_place = self.create_subscription(
            String,
            'arm_control',
            self.arm_control_callback,
            10)
        self.subscription_place  # prevent unused variable warning

        self.subscription_robpose = self.create_subscription(
            Robpose,
            'robpose_topic',  # Replace 'robpose_topic' with the actual topic name
            self.robpose_callback,
            10)
        self.subscription_robpose  # prevent unused variable warning

        self.client = RBT()  # Initialize the robot client
        self.current_robpose = None
        self.place1_coordinates = None
        self.place2_coordinates = None

    def typed_text_callback(self, msg): 
        # receiving which character was pressed and execute needed function
        char = msg.data
        actions = get_letter_movements(char)

        if actions:
            for action in actions:
                self.execute_movement(action)
        elif char == '0':
            movements = RobotMovement()
            self.execute_movement(movements.move_to_zero()[0]) 
        elif char == 'BackSpace':
            self.get_logger().info("BackSpace pressed, ignoring.")
        elif char == ' ':
            self.get_logger().info("Space pressed, ignoring.")
        else:
            self.get_logger().info(f"Unknown character: {char}")

    def robpose_callback(self, msg):
        self.current_robpose = msg
        self.get_logger().info(f"Received Robpose: {msg}")

    def arm_control_callback(self, msg):
        command = msg.data
        if command == 'Place 1':
            if self.current_robpose is not None:
                self.place1_coordinates = self.current_robpose
                self.get_logger().info(f"Place 1 coordinates: {self.place1_coordinates}")
            else:
                self.get_logger().info("No current Robpose available.")
        elif command == 'Place 2':
            if self.current_robpose is not None:
                self.place2_coordinates = self.current_robpose
                self.get_logger().info(f"Place 2 coordinates: {self.place2_coordinates}")
            else:
                self.get_logger().info("No current Robpose available.")
        else:
            self.get_logger().info(f"Unknown command: {command}")

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
