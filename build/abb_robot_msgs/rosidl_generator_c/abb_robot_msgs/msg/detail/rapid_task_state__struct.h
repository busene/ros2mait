// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_robot_msgs:msg/RAPIDTaskState.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_TASK_STATE__STRUCT_H_
#define ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_TASK_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EXECUTION_STATE_UNKNOWN'.
/**
  * -------------------------------------------------------------------------------
  *  Enumerations
  * -------------------------------------------------------------------------------
  *  RAPID execution states:
 */
enum
{
  abb_robot_msgs__msg__RAPIDTaskState__EXECUTION_STATE_UNKNOWN = 1
};

/// Constant 'EXECUTION_STATE_READY'.
enum
{
  abb_robot_msgs__msg__RAPIDTaskState__EXECUTION_STATE_READY = 2
};

/// Constant 'EXECUTION_STATE_STOPPED'.
enum
{
  abb_robot_msgs__msg__RAPIDTaskState__EXECUTION_STATE_STOPPED = 3
};

/// Constant 'EXECUTION_STATE_STARTED'.
enum
{
  abb_robot_msgs__msg__RAPIDTaskState__EXECUTION_STATE_STARTED = 4
};

/// Constant 'EXECUTION_STATE_UNINITIALIZED'.
enum
{
  abb_robot_msgs__msg__RAPIDTaskState__EXECUTION_STATE_UNINITIALIZED = 5
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RAPIDTaskState in the package abb_robot_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent a subset of states
  *    of a RAPID task defined in an ABB robot controller system.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_robot_msgs__msg__RAPIDTaskState
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  The RAPID task's name.
  rosidl_runtime_c__String name;
  /// The RAPID task's activated/deactivated status.
  bool activated;
  /// The RAPID task's execution state.
  uint8_t execution_state;
  /// The RAPID task is a motion task.
  bool motion_task;
} abb_robot_msgs__msg__RAPIDTaskState;

// Struct for a sequence of abb_robot_msgs__msg__RAPIDTaskState.
typedef struct abb_robot_msgs__msg__RAPIDTaskState__Sequence
{
  abb_robot_msgs__msg__RAPIDTaskState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_robot_msgs__msg__RAPIDTaskState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_TASK_STATE__STRUCT_H_
