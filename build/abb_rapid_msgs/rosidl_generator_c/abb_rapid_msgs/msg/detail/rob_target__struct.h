// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_msgs:msg/RobTarget.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__ROB_TARGET__STRUCT_H_
#define ABB_RAPID_MSGS__MSG__DETAIL__ROB_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trans'
#include "abb_rapid_msgs/msg/detail/pos__struct.h"
// Member 'rot'
#include "abb_rapid_msgs/msg/detail/orient__struct.h"
// Member 'robconf'
#include "abb_rapid_msgs/msg/detail/conf_data__struct.h"
// Member 'extax'
#include "abb_rapid_msgs/msg/detail/ext_joint__struct.h"

/// Struct defined in msg/RobTarget in the package abb_rapid_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the
  *    RAPID data type "robtarget" (position data).
  *
  *  Note:
  *    Please see the "Technical reference manual - RAPID Instructions,
  *    Functions and Data types" for more details.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_msgs__msg__RobTarget
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  The position (x, y, and z) of the tool center point expressed in mm.
  ///
  ///  The position is specified in relation to the current object coordinate system,
  ///  including program displacement.
  ///
  ///  If no work object is specified then this is the world coordinate system.
  abb_rapid_msgs__msg__Pos trans;
  /// The orientation of the tool, expressed in the
  /// form of a quaternion (q1, q2, q3, and q4).
  ///
  /// The orientation is specified in relation to the current
  /// object coordinate system including program displacement.
  ///
  /// If no work object is specified then this is the world coordinate system.
  abb_rapid_msgs__msg__Orient rot;
  /// The axis configuration of the robot (cf1, cf4, cf6, and cfx).
  ///
  /// This is defined in the form of the current quarter
  /// revolution of axis 1, axis 4, and axis 6.
  ///
  /// The first positive quarter revolution 0 to 90 degrees is defined as 0.
  ///
  /// The meaning of the component cfx is dependent on robot type.
  abb_rapid_msgs__msg__ConfData robconf;
  /// The position of the additional axes.
  abb_rapid_msgs__msg__ExtJoint extax;
} abb_rapid_msgs__msg__RobTarget;

// Struct for a sequence of abb_rapid_msgs__msg__RobTarget.
typedef struct abb_rapid_msgs__msg__RobTarget__Sequence
{
  abb_rapid_msgs__msg__RobTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_msgs__msg__RobTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__ROB_TARGET__STRUCT_H_
