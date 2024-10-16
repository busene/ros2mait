// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_msgs:msg/RobJoint.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__ROB_JOINT__STRUCT_H_
#define ABB_RAPID_MSGS__MSG__DETAIL__ROB_JOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobJoint in the package abb_rapid_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the
  *    RAPID data type "robjoint" (joint position of robot axes).
  *
  *  Note:
  *    Please see the "Technical reference manual - RAPID Instructions,
  *    Functions and Data types" for more details.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_msgs__msg__RobJoint
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  The position of robot axis 1-6 in degrees from the calibration position.
  float rax_1;
  float rax_2;
  float rax_3;
  float rax_4;
  float rax_5;
  float rax_6;
} abb_rapid_msgs__msg__RobJoint;

// Struct for a sequence of abb_rapid_msgs__msg__RobJoint.
typedef struct abb_rapid_msgs__msg__RobJoint__Sequence
{
  abb_rapid_msgs__msg__RobJoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_msgs__msg__RobJoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__ROB_JOINT__STRUCT_H_
