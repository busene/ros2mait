#include <gazebo/gazebo.hh>
#include <gazebo/common/Plugin.hh>
#include <gazebo/rendering/rendering.hh>
#include <ros/ros.h>
#include <geometry_msgs/PoseStamped.h>
#include <visualization_msgs/Marker.h>

namespace gazebo {
    class PathTracer : public WorldPlugin {
    public:
        void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf) override {
            // Initialize ROS node
            if (!ros::isInitialized()) {
                int argc = 0;
                char **argv = nullptr;
                ros::init(argc, argv, "path_tracer_node");
            }

            this->rosNode.reset(new ros::NodeHandle("path_tracer"));

            // Subscribe to the end effector pose topic
            this->sub = this->rosNode->subscribe("/end_effector_pose", 10, &PathTracer::OnPoseReceived, this);

            // Initialize visualization marker publisher
            this->markerPub = this->rosNode->advertise<visualization_msgs::Marker>("end_effector_marker", 10);
        }

        void OnPoseReceived(const geometry_msgs::PoseStamped::ConstPtr& msg) {
            // Create a marker to visualize the path
            visualization_msgs::Marker marker;
            marker.header.frame_id = "world"; // Use the appropriate frame
            marker.header.stamp = ros::Time::now();
            marker.ns = "end_effector_path";
            marker.id = 0;
            marker.type = visualization_msgs::Marker::LINE_STRIP; // Use LINE_STRIP for path
            marker.action = visualization_msgs::Marker::ADD;

            // Set the scale and color of the line
            marker.scale.x = 0.01; // Line width
            marker.color.a = 1.0; // Alpha (transparency)
            marker.color.r = 1.0; // Red color

            // Add the current position of the end effector to the marker points
            geometry_msgs::Point p;
            p.x = msg->pose.position.x;
            p.y = msg->pose.position.y;
            p.z = msg->pose.position.z;
            
            marker.points.push_back(p); // Add point to the line

            // Publish the marker
            this->markerPub.publish(marker);
        }

    private:
        std::unique_ptr<ros::NodeHandle> rosNode;
        ros::Subscriber sub;
        ros::Publisher markerPub;
    };

    GZ_REGISTER_WORLD_PLUGIN(PathTracer)
}
