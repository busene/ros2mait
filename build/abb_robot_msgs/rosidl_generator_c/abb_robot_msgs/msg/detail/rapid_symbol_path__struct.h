// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_robot_msgs:msg/RAPIDSymbolPath.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__STRUCT_H_
#define ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task'
// Member 'module'
// Member 'symbol'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RAPIDSymbolPath in the package abb_robot_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the path to a RAPID
  *    symbol (e.g. a variable) defined in an ABB robot controller system.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_robot_msgs__msg__RAPIDSymbolPath
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Name of the RAPID task, where the symbol exists (i.e. the symbol's context).
  rosidl_runtime_c__String task;
  /// Name of the RAPID module, where the symbol has been defined.
  rosidl_runtime_c__String module;
  /// Name of the RAPID symbol in question.
  rosidl_runtime_c__String symbol;
} abb_robot_msgs__msg__RAPIDSymbolPath;

// Struct for a sequence of abb_robot_msgs__msg__RAPIDSymbolPath.
typedef struct abb_robot_msgs__msg__RAPIDSymbolPath__Sequence
{
  abb_robot_msgs__msg__RAPIDSymbolPath * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_robot_msgs__msg__RAPIDSymbolPath__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__STRUCT_H_
