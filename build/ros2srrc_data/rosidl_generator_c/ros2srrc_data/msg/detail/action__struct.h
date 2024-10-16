// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2srrc_data:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__ACTION__STRUCT_H_
#define ROS2SRRC_DATA__MSG__DETAIL__ACTION__STRUCT_H_

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
// Member 'movej'
#include "ros2srrc_data/msg/detail/joints__struct.h"
// Member 'mover'
#include "ros2srrc_data/msg/detail/joint__struct.h"
// Member 'movel'
// Member 'movexyz'
#include "ros2srrc_data/msg/detail/xyz__struct.h"
// Member 'movexyzw'
// Member 'moverp'
#include "ros2srrc_data/msg/detail/xyzypr__struct.h"
// Member 'moveypr'
// Member 'moverot'
#include "ros2srrc_data/msg/detail/ypr__struct.h"
// Member 'attach'
// Member 'detach'
#include "ros2srrc_data/msg/detail/linkattacher__struct.h"

/// Struct defined in msg/Action in the package ros2srrc_data.
typedef struct ros2srrc_data__msg__Action
{
  rosidl_runtime_c__String action;
  double speed;
  ros2srrc_data__msg__Joints movej;
  ros2srrc_data__msg__Joint mover;
  ros2srrc_data__msg__Xyz movel;
  ros2srrc_data__msg__Xyzypr movexyzw;
  ros2srrc_data__msg__Xyz movexyz;
  ros2srrc_data__msg__Ypr moveypr;
  ros2srrc_data__msg__Ypr moverot;
  ros2srrc_data__msg__Xyzypr moverp;
  double moveg;
  ros2srrc_data__msg__Linkattacher attach;
  ros2srrc_data__msg__Linkattacher detach;
} ros2srrc_data__msg__Action;

// Struct for a sequence of ros2srrc_data__msg__Action.
typedef struct ros2srrc_data__msg__Action__Sequence
{
  ros2srrc_data__msg__Action * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__msg__Action__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2SRRC_DATA__MSG__DETAIL__ACTION__STRUCT_H_
