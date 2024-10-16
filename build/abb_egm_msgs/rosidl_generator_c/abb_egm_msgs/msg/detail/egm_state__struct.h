// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_egm_msgs:msg/EGMState.idl
// generated code does not contain a copyright notice

#ifndef ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__STRUCT_H_
#define ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__STRUCT_H_

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
// Member 'egm_channels'
#include "abb_egm_msgs/msg/detail/egm_channel_state__struct.h"

/// Struct defined in msg/EGMState in the package abb_egm_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent a subset of states
  *    of all (known) EGM communication channels.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_egm_msgs__msg__EGMState
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Metadata.
  std_msgs__msg__Header header;
  /// EGM channel states.
  abb_egm_msgs__msg__EGMChannelState__Sequence egm_channels;
} abb_egm_msgs__msg__EGMState;

// Struct for a sequence of abb_egm_msgs__msg__EGMState.
typedef struct abb_egm_msgs__msg__EGMState__Sequence
{
  abb_egm_msgs__msg__EGMState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_egm_msgs__msg__EGMState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__STRUCT_H_
