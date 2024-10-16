// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from linkpose_msgs:msg/LinkPose.idl
// generated code does not contain a copyright notice

#ifndef LINKPOSE_MSGS__MSG__DETAIL__LINK_POSE__STRUCT_H_
#define LINKPOSE_MSGS__MSG__DETAIL__LINK_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'modelname'
// Member 'linkname'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/LinkPose in the package linkpose_msgs.
typedef struct linkpose_msgs__msg__LinkPose
{
  rosidl_runtime_c__String modelname;
  rosidl_runtime_c__String linkname;
  double x;
  double y;
  double z;
  double qx;
  double qy;
  double qz;
  double qw;
} linkpose_msgs__msg__LinkPose;

// Struct for a sequence of linkpose_msgs__msg__LinkPose.
typedef struct linkpose_msgs__msg__LinkPose__Sequence
{
  linkpose_msgs__msg__LinkPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} linkpose_msgs__msg__LinkPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LINKPOSE_MSGS__MSG__DETAIL__LINK_POSE__STRUCT_H_
