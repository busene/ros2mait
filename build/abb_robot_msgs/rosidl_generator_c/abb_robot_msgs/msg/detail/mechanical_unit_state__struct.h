// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_robot_msgs:msg/MechanicalUnitState.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__MECHANICAL_UNIT_STATE__STRUCT_H_
#define ABB_ROBOT_MSGS__MSG__DETAIL__MECHANICAL_UNIT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MechanicalUnitState in the package abb_robot_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent a subset of states
  *    of a mechanical unit defined in an ABB robot controller system.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_robot_msgs__msg__MechanicalUnitState
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  The mechanical unit's name.
  rosidl_runtime_c__String name;
  /// The mechanical unit's activated/deactivated status.
  bool activated;
} abb_robot_msgs__msg__MechanicalUnitState;

// Struct for a sequence of abb_robot_msgs__msg__MechanicalUnitState.
typedef struct abb_robot_msgs__msg__MechanicalUnitState__Sequence
{
  abb_robot_msgs__msg__MechanicalUnitState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_robot_msgs__msg__MechanicalUnitState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__MECHANICAL_UNIT_STATE__STRUCT_H_
