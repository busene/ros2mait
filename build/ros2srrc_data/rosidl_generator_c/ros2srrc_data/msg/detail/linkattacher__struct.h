// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2srrc_data:msg/Linkattacher.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__LINKATTACHER__STRUCT_H_
#define ROS2SRRC_DATA__MSG__DETAIL__LINKATTACHER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'model1_name'
// Member 'link1_name'
// Member 'model2_name'
// Member 'link2_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Linkattacher in the package ros2srrc_data.
typedef struct ros2srrc_data__msg__Linkattacher
{
  /// Name of the first model.
  rosidl_runtime_c__String model1_name;
  /// Name of the link in the first model.
  rosidl_runtime_c__String link1_name;
  /// Name of the second model.
  rosidl_runtime_c__String model2_name;
  /// Name of the link in the second model.
  rosidl_runtime_c__String link2_name;
} ros2srrc_data__msg__Linkattacher;

// Struct for a sequence of ros2srrc_data__msg__Linkattacher.
typedef struct ros2srrc_data__msg__Linkattacher__Sequence
{
  ros2srrc_data__msg__Linkattacher * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__msg__Linkattacher__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2SRRC_DATA__MSG__DETAIL__LINKATTACHER__STRUCT_H_
