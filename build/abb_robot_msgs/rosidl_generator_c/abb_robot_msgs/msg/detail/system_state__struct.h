// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_robot_msgs:msg/SystemState.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__SYSTEM_STATE__STRUCT_H_
#define ABB_ROBOT_MSGS__MSG__DETAIL__SYSTEM_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'rapid_tasks'
#include "abb_robot_msgs/msg/detail/rapid_task_state__struct.h"
// Member 'mechanical_units'
#include "abb_robot_msgs/msg/detail/mechanical_unit_state__struct.h"

/// Struct defined in msg/SystemState in the package abb_robot_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent a subset of states
  *    of an ABB robot controller system.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_robot_msgs__msg__SystemState
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Metadata.
  std_msgs__msg__Header header;
  /// Motors on/off indicator.
  bool motors_on;
  /// Auto/manual mode indicator.
  bool auto_mode;
  /// RAPID running/stopped indicator.
  bool rapid_running;
  /// RAPID task states.
  abb_robot_msgs__msg__RAPIDTaskState__Sequence rapid_tasks;
  /// Mechanical unit states.
  abb_robot_msgs__msg__MechanicalUnitState__Sequence mechanical_units;
} abb_robot_msgs__msg__SystemState;

// Struct for a sequence of abb_robot_msgs__msg__SystemState.
typedef struct abb_robot_msgs__msg__SystemState__Sequence
{
  abb_robot_msgs__msg__SystemState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_robot_msgs__msg__SystemState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__SYSTEM_STATE__STRUCT_H_
