// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2srrc_data:msg/Specs.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__SPECS__STRUCT_H_
#define ROS2SRRC_DATA__MSG__DETAIL__SPECS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ee_vector'
// Member 'robot_max'
// Member 'robot_min'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Specs in the package ros2srrc_data.
typedef struct ros2srrc_data__msg__Specs
{
  double ee_max;
  double ee_min;
  rosidl_runtime_c__double__Sequence ee_vector;
  rosidl_runtime_c__double__Sequence robot_max;
  rosidl_runtime_c__double__Sequence robot_min;
} ros2srrc_data__msg__Specs;

// Struct for a sequence of ros2srrc_data__msg__Specs.
typedef struct ros2srrc_data__msg__Specs__Sequence
{
  ros2srrc_data__msg__Specs * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__msg__Specs__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2SRRC_DATA__MSG__DETAIL__SPECS__STRUCT_H_
