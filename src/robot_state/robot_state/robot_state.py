import rclpy
from rclpy.node import Node
from ros2srrc_data.msg import Robpose
import configparser

# Create NODE + SUBSCRIBER for /Robpose:
class CreateSubscriber(Node):
 
    def __init__(self):
        # Declare NODE:
        super().__init__("RobPose_sub")
        # Declare SUBSCRIBER:
        self.subscription = self.create_subscription(
            Robpose,                                                                                                           
            "Robpose",                                                            
            self.listener_callback,                                                   
            10)                                                             
        self.subscription # Prevent unused variable warning.
        self.config = configparser.ConfigParser()
        self.config_file = '/home/ubuntu/ros2ws/config.ini'
        self.got_pose = False  # Flag to indicate if pose has been received
        self.pose_data = None  # Store pose data to write to config later

    def listener_callback(self, MSG):
 
        # RESULT in quaternion format:
        x = MSG.x
        y = MSG.y
        z = MSG.z
        qx = MSG.qx
        qy = MSG.qy
        qz = MSG.qz
        qw = MSG.qw
        # Define the results, rounded with 4 values
        RESULT = f"Pose Values are -> 'x': {x:.4f}, 'y': {y:.4f}, 'z': {z:.4f}, 'qx': {qx:.4f}, 'qy': {qy:.4f}, 'qz': {qz:.4f}, 'qw': {qw:.4f}"
        
        self.get_logger().info(RESULT)
        self.pose_data = (x, y, z, qx, qy, qz, qw)
        self.got_pose = True  # Set flag to True after receiving pose

    def write_config(self):
        if self.pose_data:
            x, y, z, qx, qy, qz, qw = self.pose_data
            # Read existing config
            self.config.read(self.config_file)
            # Check if 'ROBOT' section exists, create it if not
            if not self.config.has_section('ROBOT'):
                self.config.add_section('ROBOT')
            # Update 'ROBOT' section
            self.config['ROBOT'] = {
                'x': f"{x:.4f}",
                'y': f"{y:.4f}",
                'z': f"{z:.4f}",
                'qx': f"{qx:.4f}",
                'qy': f"{qy:.4f}",
                'qz': f"{qz:.4f}",
                'qw': f"{qw:.4f}",
            }
            # Write updated config back to file
            with open(self.config_file, 'w') as configfile:
                self.config.write(configfile)
            self.get_logger().info(f"Robot coordinates written to {self.config_file}")

def main(args=None):
 
    # 1. INITIALISE ROS NODE:
    rclpy.init(args=args)
 
    RobPose_node = CreateSubscriber()
    while rclpy.ok() and not RobPose_node.got_pose:
        rclpy.spin_once(RobPose_node)
    RobPose_node.write_config()  # Write config after pose is received
    RobPose_node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()
