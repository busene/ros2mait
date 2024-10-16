// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_msgs:msg/Pos.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__POS__STRUCT_H_
#define ABB_RAPID_MSGS__MSG__DETAIL__POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Pos in the package abb_rapid_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the
  *    RAPID data type "pos" (positions (only X, Y and Z)).
  *
  *  Note:
  *    Please see the "Technical reference manual - RAPID Instructions,
  *    Functions and Data types" for more details.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_msgs__msg__Pos
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  The x-, y- and z-value of the position.
  float x;
  float y;
  float z;
} abb_rapid_msgs__msg__Pos;

// Struct for a sequence of abb_rapid_msgs__msg__Pos.
typedef struct abb_rapid_msgs__msg__Pos__Sequence
{
  abb_rapid_msgs__msg__Pos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_msgs__msg__Pos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__POS__STRUCT_H_
