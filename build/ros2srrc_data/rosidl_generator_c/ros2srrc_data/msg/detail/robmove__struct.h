// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2srrc_data:msg/Robmove.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__ROBMOVE__STRUCT_H_
#define ROS2SRRC_DATA__MSG__DETAIL__ROBMOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Robmove in the package ros2srrc_data.
typedef struct ros2srrc_data__msg__Robmove
{
  /// Input to RobMove -> Type of MOVEMENT: PTP/LIN.
  rosidl_runtime_c__String type;
  /// Input to RobMove -> Robot movement SPEED.
  double speed;
  /// Input to RobMove -> POSE-POSITION-(x)COORDINATE.
  double x;
  /// Input to RobMove -> POSE-POSITION-(y)COORDINATE.
  double y;
  /// Input to RobMove -> POSE-POSITION-(z)COORDINATE.
  double z;
  /// Input to RobMove -> POSE-ORIENTATION-QUATERNION(x).
  double qx;
  /// Input to RobMove -> POSE-ORIENTATION-QUATERNION(y).
  double qy;
  /// Input to RobMove -> POSE-ORIENTATION-QUATERNION(z).
  double qz;
  /// Input to RobMove -> POSE-ORIENTATION-QUATERNION(w).
  double qw;
} ros2srrc_data__msg__Robmove;

// Struct for a sequence of ros2srrc_data__msg__Robmove.
typedef struct ros2srrc_data__msg__Robmove__Sequence
{
  ros2srrc_data__msg__Robmove * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__msg__Robmove__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2SRRC_DATA__MSG__DETAIL__ROBMOVE__STRUCT_H_
