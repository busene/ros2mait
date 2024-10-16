// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2srrc_data:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__JOINT__STRUCT_H_
#define ROS2SRRC_DATA__MSG__DETAIL__JOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joint'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Joint in the package ros2srrc_data.
typedef struct ros2srrc_data__msg__Joint
{
  rosidl_runtime_c__String joint;
  double value;
} ros2srrc_data__msg__Joint;

// Struct for a sequence of ros2srrc_data__msg__Joint.
typedef struct ros2srrc_data__msg__Joint__Sequence
{
  ros2srrc_data__msg__Joint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__msg__Joint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2SRRC_DATA__MSG__DETAIL__JOINT__STRUCT_H_
