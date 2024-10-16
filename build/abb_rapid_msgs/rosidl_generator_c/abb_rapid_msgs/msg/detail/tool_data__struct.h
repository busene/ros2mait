// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_msgs:msg/ToolData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__TOOL_DATA__STRUCT_H_
#define ABB_RAPID_MSGS__MSG__DETAIL__TOOL_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tframe'
#include "abb_rapid_msgs/msg/detail/pose__struct.h"
// Member 'tload'
#include "abb_rapid_msgs/msg/detail/load_data__struct.h"

/// Struct defined in msg/ToolData in the package abb_rapid_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the
  *    RAPID data type "tooldata" (tool data).
  *
  *  Note:
  *    Please see the "Technical reference manual - RAPID Instructions,
  *    Functions and Data types" for more details.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_msgs__msg__ToolData
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Defines whether or not the robot is holding the tool:
  ///  - TRUE: The robot is holding the tool.
  ///  - FALSE: The robot is not holding the tool, that is, a stationary tool.
  bool robhold;
  /// The tool coordinate system, that is:
  /// - The position of the TCP (x, y and z) in mm,
  ///   expressed in the wrist coordinate system (tool0).
  /// - The orientation of the tool coordinate system,
  ///   expressed in the wrist coordinate system.
  abb_rapid_msgs__msg__Pose tframe;
  /// The load of the tool (if robot held tool).
  /// The load of the gripper holding the work object (if stationary tool).
  abb_rapid_msgs__msg__LoadData tload;
} abb_rapid_msgs__msg__ToolData;

// Struct for a sequence of abb_rapid_msgs__msg__ToolData.
typedef struct abb_rapid_msgs__msg__ToolData__Sequence
{
  abb_rapid_msgs__msg__ToolData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_msgs__msg__ToolData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__TOOL_DATA__STRUCT_H_
