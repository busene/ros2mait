# Thanks to Mikel from the IFRA group who helped creating this node, by giving the general concept


import rclpy
from rclpy.node import Node
from ros2srrc_data.msg import Robpose
import threading

# Create NODE + SUBSCRIBER for /Robpose:
class CreateSubscriber(Node):

    def __init__(self):
        # Declare NODE:
        super().__init__("RobPose_sub")
        self.callback = callback
        # Declare SUBSCRIBER:
        self.subscription = self.create_subscription(
            Robpose,                                                                                                           
            "Robpose",                                                            
            self.listener_callback,                                                   
            10)                                                             
        self.subscription # Prevent unused variable warning.
 
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
        self.callback(RESULT)
        
 
def main(args=None):
    rclpy.init(args=args)
    node = CreateSubscriber(None)  # Initialize with None, will be updated later
    return node

def spin_node(node, callback):
    node.callback = callback
    rclpy.spin(node)

def shutdown_node(node):
    node.destroy_node()
    rclpy.shutdown()