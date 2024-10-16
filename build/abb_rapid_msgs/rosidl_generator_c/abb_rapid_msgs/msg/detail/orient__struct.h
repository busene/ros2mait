// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_msgs:msg/Orient.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__ORIENT__STRUCT_H_
#define ABB_RAPID_MSGS__MSG__DETAIL__ORIENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Orient in the package abb_rapid_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the
  *    RAPID data type "orient" (orientation).
  *
  *  Note:
  *    Please see the "Technical reference manual - RAPID Instructions,
  *    Functions and Data types" for more details.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_msgs__msg__Orient
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Quaternion 1-4.
  float q1;
  float q2;
  float q3;
  float q4;
} abb_rapid_msgs__msg__Orient;

// Struct for a sequence of abb_rapid_msgs__msg__Orient.
typedef struct abb_rapid_msgs__msg__Orient__Sequence
{
  abb_rapid_msgs__msg__Orient * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_msgs__msg__Orient__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__ORIENT__STRUCT_H_
