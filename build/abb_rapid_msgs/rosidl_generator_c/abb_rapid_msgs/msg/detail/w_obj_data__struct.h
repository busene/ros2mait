// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_msgs:msg/WObjData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__W_OBJ_DATA__STRUCT_H_
#define ABB_RAPID_MSGS__MSG__DETAIL__W_OBJ_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'ufmec'
#include "rosidl_runtime_c/string.h"
// Member 'uframe'
// Member 'oframe'
#include "abb_rapid_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/WObjData in the package abb_rapid_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the
  *    RAPID data type "wobjdata" (work object data).
  *
  *  Note:
  *    Please see the "Technical reference manual - RAPID Instructions,
  *    Functions and Data types" for more details.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_msgs__msg__WObjData
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Defines whether or not the robot in the actual
  ///  program task is holding the work object:
  ///  - TRUE: The robot is holding the work object,
  ///          i.e. using a stationary tool.
  ///  - FALSE: The robot is not holding the work object,
  ///           i.e. the robot is holding the tool.
  bool robhold;
  /// Defines whether or not a fixed user coordinate system is used:
  /// - TRUE: Fixed user coordinate system.
  /// - FALSE: Movable user coordinate system,
  ///          i.e. coordinated external axes are used.
  ///          Also to be used in a MultiMove system in
  ///          semicoordinated or synchronized coordinated mode.
  bool ufprog;
  /// The mechanical unit with which the robot movements are coordinated.
  ///
  /// Only specified in the case of movable user
  /// coordinate systems (ufprog is FALSE).
  rosidl_runtime_c__String ufmec;
  /// The user coordinate system, i.e. the position
  /// of the current work surface or fixture.
  abb_rapid_msgs__msg__Pose uframe;
  /// The object coordinate system, i.e. the position
  /// of the current work object.
  abb_rapid_msgs__msg__Pose oframe;
} abb_rapid_msgs__msg__WObjData;

// Struct for a sequence of abb_rapid_msgs__msg__WObjData.
typedef struct abb_rapid_msgs__msg__WObjData__Sequence
{
  abb_rapid_msgs__msg__WObjData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_msgs__msg__WObjData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__W_OBJ_DATA__STRUCT_H_
