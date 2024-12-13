# For /joint_states:
import rclpy
from rclpy.node import Node
from ros2srrc_data.msg import Robpose

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
        
        print(RESULT)
 
def main(args=None):
 
    # 1. INITIALISE ROS NODE:
    rclpy.init(args=args)
 
    print("")
    print(" --- Cranfield University --- ")
    print("        (c) IFRA Group        ")
    print("")
 
    print("ros2srrc_execution --> GET ROBOT STATE")
    print("Python script -> RobotState.py")
    print("")
    RobPose_node = CreateSubscriber()
    rclpy.spin_once(RobPose_node)
    RobPose_node.destroy_node
    rclpy.shutdown()
 
if __name__ == "__main__":
    main()