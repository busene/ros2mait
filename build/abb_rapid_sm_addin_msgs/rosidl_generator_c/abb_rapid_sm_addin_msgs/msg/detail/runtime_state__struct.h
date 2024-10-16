// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_sm_addin_msgs:msg/RuntimeState.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__RUNTIME_STATE__STRUCT_H_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__RUNTIME_STATE__STRUCT_H_

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
// Member 'state_machines'
#include "abb_rapid_sm_addin_msgs/msg/detail/state_machine_state__struct.h"

/// Struct defined in msg/RuntimeState in the package abb_rapid_sm_addin_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the runtime states
  *    of all (known) RobotWare "StateMachine Add-In" RAPID instances.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_sm_addin_msgs__msg__RuntimeState
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Metadata.
  std_msgs__msg__Header header;
  /// "StateMachine Add-In" instances.
  abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence state_machines;
} abb_rapid_sm_addin_msgs__msg__RuntimeState;

// Struct for a sequence of abb_rapid_sm_addin_msgs__msg__RuntimeState.
typedef struct abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence
{
  abb_rapid_sm_addin_msgs__msg__RuntimeState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_sm_addin_msgs__msg__RuntimeState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__RUNTIME_STATE__STRUCT_H_
