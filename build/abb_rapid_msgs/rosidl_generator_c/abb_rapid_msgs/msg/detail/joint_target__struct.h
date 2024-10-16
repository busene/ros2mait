// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_msgs:msg/JointTarget.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__JOINT_TARGET__STRUCT_H_
#define ABB_RAPID_MSGS__MSG__DETAIL__JOINT_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'robax'
#include "abb_rapid_msgs/msg/detail/rob_joint__struct.h"
// Member 'extax'
#include "abb_rapid_msgs/msg/detail/ext_joint__struct.h"

/// Struct defined in msg/JointTarget in the package abb_rapid_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the
  *    RAPID data type "jointtarget" (joint position data).
  *
  *  Note:
  *    Please see the "Technical reference manual - RAPID Instructions,
  *    Functions and Data types" for more details.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_msgs__msg__JointTarget
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Axis positions of the robot axes in degrees.
  abb_rapid_msgs__msg__RobJoint robax;
  /// The position of the external axes.
  abb_rapid_msgs__msg__ExtJoint extax;
} abb_rapid_msgs__msg__JointTarget;

// Struct for a sequence of abb_rapid_msgs__msg__JointTarget.
typedef struct abb_rapid_msgs__msg__JointTarget__Sequence
{
  abb_rapid_msgs__msg__JointTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_msgs__msg__JointTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__JOINT_TARGET__STRUCT_H_
