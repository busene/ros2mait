import rclpy
from rclpy.node import Node
from std_msgs.msg import String

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

class RobotArmControlNode(Node):
    def __init__(self):
        super().__init__('robot_arm_control_node')
        self.subscription = self.create_subscription(
            String,
            'arm_control',
            self.command_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.client = RBT()  # Initialize the RBT client

    def command_callback(self, msg):
        self.get_logger().info(f'Received command: "{msg.data}"')
        try:
            if msg.data.startswith('joint'):
                self.handle_joint_command(msg.data)
            elif msg.data in ['forward', 'backward', 'left', 'right', 'up', 'down', 'reset']:
                method_name = f'move_{msg.data}'
                if hasattr(self, method_name):
                    self.execute_movement(getattr(self, method_name)())
                else:
                    self.get_logger().warn(f'Unknown movement command: {msg.data}')
            else:
                self.get_logger().warn(f'Unknown command: {msg.data}')
        except Exception as e:
            self.get_logger().error(f'Error executing command: {e}')

    def handle_joint_command(self, command):
        parts = command.split('_')
        if len(parts) == 2 and parts[0].startswith('joint') and parts[1] in ['positive', 'negative']:
            joint_num = int(parts[0][5:])
            direction = 1 if parts[1] == 'positive' else -1
            self.execute_movement(self.move_joint(joint_num, direction))
        else:
            self.get_logger().warn(f'Invalid joint command format: {command}')

    def move_joint(self, joint_num, direction):
        if 1 <= joint_num <= 6:
            value = 5.0 * direction  # 5.0 for positive, -5.0 for negative
            return self.create_action_move_joint(joint_num, value)
        else:
            self.get_logger().warn(f'Invalid joint number: {joint_num}')
            return None

    def move_forward(self):
        return self.create_action(0.01, 0.0, 0.0)

    def move_backward(self):
        return self.create_action(-0.01, 0.0, 0.0)

    def move_left(self):
        return self.create_action(0.0, 0.01, 0.0)

    def move_right(self):
        return self.create_action(0.0, -0.01, 0.0)

    def move_up(self):
        return self.create_action(0.0, 0.0, 0.01)

    def move_down(self):
        return self.create_action(0.0, 0.0, -0.01)
    
    def move_reset(self):
        return self.create_action_joints(0.0, 0.0, 0.0, 0.0, 90.0, 0.0)

    def create_action(self, x, y, z):
        ACTION = Action()
        ACTION.action = "MoveL"
        ACTION.speed = 1.0
        INPUT = Xyz()
        INPUT.x = x
        INPUT.y = y
        INPUT.z = z
        ACTION.movel = INPUT
        return ACTION
    
    def create_action_joints(self, j1, j2, j3, j4, j5, j6):
        ACTION = Action()
        ACTION.action = "MoveJ"
        ACTION.speed = 1.0
        INPUT = Joints()
        INPUT.joint1 = j1
        INPUT.joint2 = j2
        INPUT.joint3 = j3
        INPUT.joint4 = j4
        INPUT.joint5 = j5
        INPUT.joint6 = j6
        ACTION.movej = INPUT
        return ACTION
    
    def create_action_move_joint(self, joint_num, value):
        ACTION = Action()
        ACTION.action = "MoveR"
        ACTION.speed = 1.0
        INPUT = Joint()
        INPUT.joint = f"joint{joint_num}"
        INPUT.value = value
        ACTION.mover = INPUT
        return ACTION

    def execute_movement(self, action):
        try:
            RES = self.client.Move_EXECUTE(action)
            self.get_logger().info(f"Moved to position. Result: {RES['Message']}")
        except Exception as e:
            self.get_logger().error(f"Error executing movement: {e}")


def main(args=None):
    rclpy.init(args=args)
    robot_arm_control_node = RobotArmControlNode()
    try:
        rclpy.spin(robot_arm_control_node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        robot_arm_control_node.get_logger().error(f"Unexpected error: {e}")
    finally:
        robot_arm_control_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()