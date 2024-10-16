// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_sm_addin_msgs:msg/StateMachineState.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__STATE_MACHINE_STATE__STRUCT_H_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__STATE_MACHINE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SM_STATE_UNKNOWN'.
/**
  * -------------------------------------------------------------------------------
  *  Enumerations
  * -------------------------------------------------------------------------------
  *  Possible "StateMachine Add-In" RAPID states:
  *
  *  Note: These enumeration values differ from the RAPID implementation
  *        values to avoid conflict with default values in ROS messages.
 */
enum
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__SM_STATE_UNKNOWN = 1
};

/// Constant 'SM_STATE_IDLE'.
enum
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__SM_STATE_IDLE = 2
};

/// Constant 'SM_STATE_INITIALIZE'.
enum
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__SM_STATE_INITIALIZE = 3
};

/// Constant 'SM_STATE_RUN_RAPID_ROUTINE'.
enum
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__SM_STATE_RUN_RAPID_ROUTINE = 4
};

/// Constant 'SM_STATE_RUN_EGM_ROUTINE'.
enum
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__SM_STATE_RUN_EGM_ROUTINE = 5
};

/// Constant 'EGM_ACTION_UNKNOWN'.
/**
  * Possible "StateMachine Add-In" RAPID EGM actions:
  *
  * Note: These enumeration values differ from the RAPID implementation
  *       values to avoid conflict with default values in ROS messages.
 */
enum
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__EGM_ACTION_UNKNOWN = 1
};

/// Constant 'EGM_ACTION_NONE'.
enum
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__EGM_ACTION_NONE = 2
};

/// Constant 'EGM_ACTION_RUN_JOINT'.
enum
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__EGM_ACTION_RUN_JOINT = 3
};

/// Constant 'EGM_ACTION_RUN_POSE'.
enum
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__EGM_ACTION_RUN_POSE = 4
};

/// Constant 'EGM_ACTION_STOP'.
enum
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__EGM_ACTION_STOP = 5
};

/// Constant 'EGM_ACTION_START_STREAM'.
enum
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__EGM_ACTION_START_STREAM = 6
};

/// Constant 'EGM_ACTION_STOP_STREAM'.
enum
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState__EGM_ACTION_STOP_STREAM = 7
};

// Include directives for member types
// Member 'rapid_task'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/StateMachineState in the package abb_rapid_sm_addin_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the state of an
  *    instance of the RobotWare "StateMachine Add-In"'s RAPID implementation.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_sm_addin_msgs__msg__StateMachineState
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  The RAPID task that runs the "StateMachine Add-In" instance.
  rosidl_runtime_c__String rapid_task;
  /// The "StateMachine Add-In" instance's current state.
  uint8_t sm_state;
  /// The "StateMachine Add-In" instance's current EGM action
  /// (only used if the RobotWare EGM option is present).
  uint8_t egm_action;
} abb_rapid_sm_addin_msgs__msg__StateMachineState;

// Struct for a sequence of abb_rapid_sm_addin_msgs__msg__StateMachineState.
typedef struct abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence
{
  abb_rapid_sm_addin_msgs__msg__StateMachineState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_sm_addin_msgs__msg__StateMachineState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__STATE_MACHINE_STATE__STRUCT_H_
