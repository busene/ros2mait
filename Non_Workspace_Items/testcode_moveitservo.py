# Add these imports at the beginning of the file
from launch.substitutions import LaunchConfiguration
from moveit_configs_utils import MoveItConfigsBuilder

# Add these functions after the existing utility functions
def load_servo_config():
    servo_yaml = load_yaml("moveit_servo", "config/servo_config.yaml")
    return {"moveit_servo": servo_yaml}

# In the generate_launch_description function, add the following:

def generate_launch_description():
    # ... (keep existing code)

    # Load MoveIt configs
    moveit_config = MoveItConfigsBuilder(CONFIGURATION["rob"]).to_moveit_configs()

    # Load Servo configuration
    servo_params = load_servo_config()

    # Add Servo node
    servo_node = Node(
        package="moveit_servo",
        executable="servo_node_main",
        parameters=[
            servo_params,
            moveit_config.robot_description,
            moveit_config.robot_description_semantic,
            moveit_config.robot_description_kinematics,
            {"use_sim_time": True},
        ],
        output="screen",
    )

    # Add Servo components to the ComposableNodeContainer
    container = ComposableNodeContainer(
        name="moveit_servo_container",
        namespace="/",
        package="rclcpp_components",
        executable="component_container_mt",
        composable_node_descriptions=[
            ComposableNode(
                package="moveit_servo",
                plugin="moveit_servo::JoyToServoPub",
                name="joy_to_servo_node",
            ),
            ComposableNode(
                package="joy",
                plugin="joy::Joy",
                name="joy_node",
            ),
        ],
        output="screen",
    )

    # Add Servo nodes to the launch description
    LD.add_action(servo_node)
    LD.add_action(container)

    # ... (keep the rest of the existing code)

    return LD