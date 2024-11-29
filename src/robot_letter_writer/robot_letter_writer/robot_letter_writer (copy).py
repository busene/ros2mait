#!/usr/bin/env Python3
 
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from ros2srrc_data.msg import Specs
from ros2srrc_data.action import Move
from moveit_msgs.msg import MoveGroupInterface
from geometry_msgs.msg import Pose

class RobotLetterWriterNode(Node):
    def __init__(self):
        super().__init__('robot_letter_writer_node')
        self.subscription = self.create_subscription(
            String,
            'letter_command',
            self.letter_callback,
            10)
        self.subscription  # prevent unused variable warning
        
        # Global variables (as class attributes)
        self.param_ROB = "none"
        self.param_EE = "none"
        self.param_ENV = "none"
        
        # MoveIt!2 Interface (placeholder, actual implementation may differ)
        self.move_group_interface_ROB = None
        self.move_group_interface_EE = None
        
        # JointModelGroup (placeholder, actual implementation may differ)
        self.joint_model_group_ROB = None
        self.joint_model_group_EE = None
        
        self.RES = "none"
        
        # robotSPECS and eeSPECS
        self.robotSPECS = Specs()
        self.eeSPECS = Specs()

    def letter_callback(self, msg):
        self.get_logger().info(f"Received letter: '{msg.data}'")
        if msg.data[0].lower() == 'a':
            self.get_logger().info("Writing letter A")
            # Add logic for writing letter A here
        # Add more letters as needed

def main(args=None):
    rclpy.init(args=args)
    letter_writer_node = RobotLetterWriterNode()
    rclpy.spin(lrobot_letter_writer_node)
    letter_writer_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()