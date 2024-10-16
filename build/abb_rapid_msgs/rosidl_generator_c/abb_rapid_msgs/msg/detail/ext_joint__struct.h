// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_msgs:msg/ExtJoint.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__EXT_JOINT__STRUCT_H_
#define ABB_RAPID_MSGS__MSG__DETAIL__EXT_JOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ExtJoint in the package abb_rapid_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the
  *    RAPID data type "extjoint" (position of external joints).
  *
  *  Note:
  *    Please see the "Technical reference manual - RAPID Instructions,
  *    Functions and Data types" for more details.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_msgs__msg__ExtJoint
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  The position of the external logical axis "a"-"f",
  ///  expressed in degrees or mm (depending on the type of axis).
  float eax_a;
  float eax_b;
  float eax_c;
  float eax_d;
  float eax_e;
  float eax_f;
} abb_rapid_msgs__msg__ExtJoint;

// Struct for a sequence of abb_rapid_msgs__msg__ExtJoint.
typedef struct abb_rapid_msgs__msg__ExtJoint__Sequence
{
  abb_rapid_msgs__msg__ExtJoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_msgs__msg__ExtJoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__EXT_JOINT__STRUCT_H_
