// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2srrc_data:msg/Robpose.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__ROBPOSE__STRUCT_H_
#define ROS2SRRC_DATA__MSG__DETAIL__ROBPOSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Robpose in the package ros2srrc_data.
typedef struct ros2srrc_data__msg__Robpose
{
  /// POSE-POSITION-(x)COORDINATE
  double x;
  /// POSE-POSITION-(y)COORDINATE
  double y;
  /// POSE-POSITION-(z)COORDINATE
  double z;
  /// POSE-ORIENTATION-QUATERNION(x)
  double qx;
  /// POSE-ORIENTATION-QUATERNION(y)
  double qy;
  /// POSE-ORIENTATION-QUATERNION(z)
  double qz;
  /// POSE-ORIENTATION-QUATERNION(w)
  double qw;
} ros2srrc_data__msg__Robpose;

// Struct for a sequence of ros2srrc_data__msg__Robpose.
typedef struct ros2srrc_data__msg__Robpose__Sequence
{
  ros2srrc_data__msg__Robpose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__msg__Robpose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2SRRC_DATA__MSG__DETAIL__ROBPOSE__STRUCT_H_
