// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2srrc_data:msg/Joints.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__JOINTS__STRUCT_H_
#define ROS2SRRC_DATA__MSG__DETAIL__JOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Joints in the package ros2srrc_data.
typedef struct ros2srrc_data__msg__Joints
{
  double joint1;
  double joint2;
  double joint3;
  double joint4;
  double joint5;
  double joint6;
  double joint7;
} ros2srrc_data__msg__Joints;

// Struct for a sequence of ros2srrc_data__msg__Joints.
typedef struct ros2srrc_data__msg__Joints__Sequence
{
  ros2srrc_data__msg__Joints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__msg__Joints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2SRRC_DATA__MSG__DETAIL__JOINTS__STRUCT_H_
