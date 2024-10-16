// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2_robotiqgripper:srv/RobotiqGripper.idl
// generated code does not contain a copyright notice

#ifndef ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__STRUCT_H_
#define ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RobotiqGripper in the package ros2_robotiqgripper.
typedef struct ros2_robotiqgripper__srv__RobotiqGripper_Request
{
  rosidl_runtime_c__String action;
} ros2_robotiqgripper__srv__RobotiqGripper_Request;

// Struct for a sequence of ros2_robotiqgripper__srv__RobotiqGripper_Request.
typedef struct ros2_robotiqgripper__srv__RobotiqGripper_Request__Sequence
{
  ros2_robotiqgripper__srv__RobotiqGripper_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_robotiqgripper__srv__RobotiqGripper_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/RobotiqGripper in the package ros2_robotiqgripper.
typedef struct ros2_robotiqgripper__srv__RobotiqGripper_Response
{
  bool success;
  int64_t value;
  float average;
  rosidl_runtime_c__String message;
} ros2_robotiqgripper__srv__RobotiqGripper_Response;

// Struct for a sequence of ros2_robotiqgripper__srv__RobotiqGripper_Response.
typedef struct ros2_robotiqgripper__srv__RobotiqGripper_Response__Sequence
{
  ros2_robotiqgripper__srv__RobotiqGripper_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2_robotiqgripper__srv__RobotiqGripper_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2_ROBOTIQGRIPPER__SRV__DETAIL__ROBOTIQ_GRIPPER__STRUCT_H_
