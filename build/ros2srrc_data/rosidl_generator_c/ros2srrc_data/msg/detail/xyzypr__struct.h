// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2srrc_data:msg/Xyzypr.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__XYZYPR__STRUCT_H_
#define ROS2SRRC_DATA__MSG__DETAIL__XYZYPR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Xyzypr in the package ros2srrc_data.
typedef struct ros2srrc_data__msg__Xyzypr
{
  double x;
  double y;
  double z;
  double yaw;
  double pitch;
  double roll;
} ros2srrc_data__msg__Xyzypr;

// Struct for a sequence of ros2srrc_data__msg__Xyzypr.
typedef struct ros2srrc_data__msg__Xyzypr__Sequence
{
  ros2srrc_data__msg__Xyzypr * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__msg__Xyzypr__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2SRRC_DATA__MSG__DETAIL__XYZYPR__STRUCT_H_
