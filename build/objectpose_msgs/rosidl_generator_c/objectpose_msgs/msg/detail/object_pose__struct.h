// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from objectpose_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice

#ifndef OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__STRUCT_H_
#define OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'objectname'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ObjectPose in the package objectpose_msgs.
typedef struct objectpose_msgs__msg__ObjectPose
{
  rosidl_runtime_c__String objectname;
  double x;
  double y;
  double z;
  double qx;
  double qy;
  double qz;
  double qw;
} objectpose_msgs__msg__ObjectPose;

// Struct for a sequence of objectpose_msgs__msg__ObjectPose.
typedef struct objectpose_msgs__msg__ObjectPose__Sequence
{
  objectpose_msgs__msg__ObjectPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} objectpose_msgs__msg__ObjectPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__STRUCT_H_
