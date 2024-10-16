// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_egm_msgs:msg/EGMChannelState.idl
// generated code does not contain a copyright notice

#ifndef ABB_EGM_MSGS__MSG__DETAIL__EGM_CHANNEL_STATE__STRUCT_H_
#define ABB_EGM_MSGS__MSG__DETAIL__EGM_CHANNEL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'EGM_UNDEFINED'.
/**
  * -------------------------------------------------------------------------------
  *  Enumerations
  * -------------------------------------------------------------------------------
  *  EGM client states:
 */
enum
{
  abb_egm_msgs__msg__EGMChannelState__EGM_UNDEFINED = 1
};

/// Constant 'EGM_ERROR'.
enum
{
  abb_egm_msgs__msg__EGMChannelState__EGM_ERROR = 2
};

/// Constant 'EGM_STOPPED'.
enum
{
  abb_egm_msgs__msg__EGMChannelState__EGM_STOPPED = 3
};

/// Constant 'EGM_RUNNING'.
enum
{
  abb_egm_msgs__msg__EGMChannelState__EGM_RUNNING = 4
};

/// Constant 'MOTORS_UNDEFINED'.
/**
  * Motor states:
 */
enum
{
  abb_egm_msgs__msg__EGMChannelState__MOTORS_UNDEFINED = 1
};

/// Constant 'MOTORS_ON'.
enum
{
  abb_egm_msgs__msg__EGMChannelState__MOTORS_ON = 2
};

/// Constant 'MOTORS_OFF'.
enum
{
  abb_egm_msgs__msg__EGMChannelState__MOTORS_OFF = 3
};

/// Constant 'RAPID_UNDEFINED'.
/**
  * RAPID states:
 */
enum
{
  abb_egm_msgs__msg__EGMChannelState__RAPID_UNDEFINED = 1
};

/// Constant 'RAPID_STOPPED'.
enum
{
  abb_egm_msgs__msg__EGMChannelState__RAPID_STOPPED = 2
};

/// Constant 'RAPID_RUNNING'.
enum
{
  abb_egm_msgs__msg__EGMChannelState__RAPID_RUNNING = 3
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EGMChannelState in the package abb_egm_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent a subset of states
  *    of an EGM communication channel. I.e. a channel between an EGM client,
  *    in an ABB robot controller system, and an external EGM server.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_egm_msgs__msg__EGMChannelState
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  The EGM channel's name.
  rosidl_runtime_c__String name;
  /// The EGM channel's active/inactive status.
  bool active;
  /// Indicator for if the EGM convergence criteria is currently fulfilled or not.
  bool egm_convergence_met;
  /// EGM client state.
  uint8_t egm_client_state;
  /// Motor state.
  uint8_t motor_state;
  /// RAPID execution state.
  uint8_t rapid_execution_state;
  /// Utilization rate of the connected mechanical unit.
  ///
  /// An utilization rate > 100 mean that EGM motion references are
  /// too aggressive and should be reduced.
  double utilization_rate;
} abb_egm_msgs__msg__EGMChannelState;

// Struct for a sequence of abb_egm_msgs__msg__EGMChannelState.
typedef struct abb_egm_msgs__msg__EGMChannelState__Sequence
{
  abb_egm_msgs__msg__EGMChannelState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_egm_msgs__msg__EGMChannelState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_EGM_MSGS__MSG__DETAIL__EGM_CHANNEL_STATE__STRUCT_H_
