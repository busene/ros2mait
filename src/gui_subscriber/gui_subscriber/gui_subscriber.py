# This program is the ROS2 Node that receives messages from the controlUI.py program. It processes these messages and sends commands to the robot to move.
#
# Importing necessary ROS2 and system libraries
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import sys, os
from ament_index_python.packages import get_package_share_directory

# Importing custom ROS2 messages for robot control from the IFRA package
from ros2srrc_data.msg import Action, Joint, Joints, Xyz, Xyzypr, Ypr

# Setting up the path to import the robot class
PATH = os.path.join(get_package_share_directory("ros2srrc_execution"), 'python')
PATH_robot = PATH + "/robot"
sys.path.append(PATH_robot)
from robot import RBT


NULL = 0.0 # A constant for 0.0 to keep the code easy to read, no magic numbers
speed = 1.0 # Setting the speed for the movements

class RobotArmControlNode(Node):
    def __init__(self):
        super().__init__('robot_arm_control_node')
        # Creating a subscription to listen for arm control commands
        self.subscription = self.create_subscription(
            String,
            'arm_control',
            self.command_callback,
            10)
        self.subscription  # prevent unused variable warning
        self.client = RBT()  # Initialize the RBT client for robot control
        self.joint_step = 5.0  # Fixed step size for joint movements in degrees

    def command_callback(self, msg):
        # This method is called whenever a command is received
        self.get_logger().info(f'Received command: "{msg.data}"')
        try:
            parts = msg.data.split('_')
            # Route the command to the appropriate handler
            if parts[0].startswith('joint'):
                self.handle_joint_command(parts)
            elif parts[0] in ['forward', 'backward', 'left', 'right', 'up', 'down']:
                self.handle_movement_command(parts)
            elif msg.data == 'reset':
                self.execute_movement(self.move_reset())
            else:
                self.get_logger().warn(f'Unknown command: {msg.data}')
        except Exception as e:
            self.get_logger().error(f'Error executing command: {e}')

    def handle_joint_command(self, parts):
        # Handle commands for individual joint movements
        if len(parts) == 2 and parts[0].startswith('joint') and parts[1] in ['positive', 'negative']:
            joint_num = int(parts[0][5:])
            direction = 1 if parts[1] == 'positive' else -1
            self.execute_movement(self.move_joint(joint_num, direction))
        else:
            self.get_logger().warn(f'Invalid joint command format: {parts}')

    def handle_movement_command(self, parts):
        # Handle commands for cartesian movements coming from the maincontrol.py code that sends messages like: forward, backward, left, right. It also contains which step-size is chosen in the UI
        if len(parts) == 2:
            direction = parts[0]
            step = float(parts[1])
            method_name = f'move_{direction}'
            if hasattr(self, method_name):
                self.execute_movement(getattr(self, method_name)(step))
            else:
                self.get_logger().warn(f'Unknown movement command: {direction}')
        else:
            self.get_logger().warn(f'Invalid movement command format: {parts}')

    def move_joint(self, joint_num, direction):
        # Create a joint movement action
        if 1 <= joint_num <= 6:
            value = self.joint_step * direction
            return self.create_action_move_joint(joint_num, value)
        else:
            self.get_logger().warn(f'Invalid joint number: {joint_num}')
            return None

    # Methods for creating cartesian movement actions. xyz translation
    def move_forward(self, step):
        return self.create_action(step, NULL, NULL)

    def move_backward(self, step):
        return self.create_action(-step, NULL, NULL)

    def move_left(self, step):
        return self.create_action(NULL, step, NULL)

    def move_right(self, step):
        return self.create_action(NULL, -step, NULL)

    def move_up(self, step):
        return self.create_action(NULL, NULL, step)

    def move_down(self, step):
        return self.create_action(NULL, NULL, -step)

    def move_reset(self):
        # Reset the robot to a predefined position
        return self.create_action_joints(NULL, NULL, NULL, NULL, 90.0, NULL) # setting joint 1, 2, 3, 4, and 6 to 0 degrees (default position) and joint 5 to 90 degrees, which points the end effector down

    def create_action(self, x, y, z):
        # Create a linear movement action (MoveL)
        ACTION = Action()
        ACTION.action = "MoveL"  # MoveL makes the robot move a certain amount over a cartesian path
        ACTION.speed = speed
        INPUT = Xyz()
        INPUT.x = x
        INPUT.y = y
        INPUT.z = z
        ACTION.movel = INPUT
        return ACTION
    
    def create_action_joints(self, j1, j2, j3, j4, j5, j6):
        # Create a joint movement action (MoveJ)
        ACTION = Action()
        ACTION.action = "MoveJ"  # MoveJ moves joints to the desired positions
        ACTION.speed = speed
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
        # Create a relative joint movement action (MoveR)
        ACTION = Action()
        ACTION.action = "MoveR"  # MoveR rotates a joint a specific amount
        ACTION.speed = speed
        INPUT = Joint()
        INPUT.joint = f"joint{joint_num}"
        INPUT.value = value
        ACTION.mover = INPUT
        return ACTION

    def execute_movement(self, action):
        # Execute the movement action using the RBT client
        try:
            RES = self.client.Move_EXECUTE(action)
            self.get_logger().info(f"Moved to position. Result: {RES['Message']}")
        except Exception as e:
            self.get_logger().error(f"Error executing movement: {e}")

def main(args=None):
    # Initialize the ROS2 system and create the node
    rclpy.init(args=args)
    robot_arm_control_node = RobotArmControlNode()
    try:
        # Keep the node running and processing callbacks
        rclpy.spin(robot_arm_control_node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        robot_arm_control_node.get_logger().error(f"Unexpected error: {e}")
    finally:
        # Clean up the node when done
        robot_arm_control_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()