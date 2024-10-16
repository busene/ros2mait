// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMStopSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_STOP_SETTINGS__STRUCT_H_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_STOP_SETTINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EGMStopSettings in the package abb_rapid_sm_addin_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the custom RAPID
  *    data type "EGMStopSettings" from the RobotWare "StateMachine Add-In".
  *
  *  Note:
  *    "EGMStopSettings" are for example used with the RAPID EGM instruction
  *    "EGMStop".
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_sm_addin_msgs__msg__EGMStopSettings
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Ramp out time.
  float ramp_out_time;
} abb_rapid_sm_addin_msgs__msg__EGMStopSettings;

// Struct for a sequence of abb_rapid_sm_addin_msgs__msg__EGMStopSettings.
typedef struct abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence
{
  abb_rapid_sm_addin_msgs__msg__EGMStopSettings * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_sm_addin_msgs__msg__EGMStopSettings__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_STOP_SETTINGS__STRUCT_H_
