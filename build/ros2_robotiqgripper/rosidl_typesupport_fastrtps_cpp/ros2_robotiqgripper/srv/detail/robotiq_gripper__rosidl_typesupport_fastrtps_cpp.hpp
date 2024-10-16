// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ros2_robotiqgripper:srv/RobotiqGripper.idl
// generated code does not contain a copyright notice

#ifndef ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ros2_robotiqgripper/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ros2_robotiqgripper/srv/detail/robotiq_gripper__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ros2_robotiqgripper
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_robotiqgripper
cdr_serialize(
  const ros2_robotiqgripper::srv::RobotiqGripper_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_robotiqgripper
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_robotiqgripper::srv::RobotiqGripper_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_robotiqgripper
get_serialized_size(
  const ros2_robotiqgripper::srv::RobotiqGripper_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_robotiqgripper
max_serialized_size_RobotiqGripper_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ros2_robotiqgripper

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_robotiqgripper
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_robotiqgripper, srv, RobotiqGripper_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ros2_robotiqgripper/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "ros2_robotiqgripper/srv/detail/robotiq_gripper__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace ros2_robotiqgripper
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_robotiqgripper
cdr_serialize(
  const ros2_robotiqgripper::srv::RobotiqGripper_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_robotiqgripper
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2_robotiqgripper::srv::RobotiqGripper_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_robotiqgripper
get_serialized_size(
  const ros2_robotiqgripper::srv::RobotiqGripper_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_robotiqgripper
max_serialized_size_RobotiqGripper_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ros2_robotiqgripper

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_robotiqgripper
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_robotiqgripper, srv, RobotiqGripper_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ros2_robotiqgripper/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2_robotiqgripper
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2_robotiqgripper, srv, RobotiqGripper)();

#ifdef __cplusplus
}
#endif

#endif  // ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
