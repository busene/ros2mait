// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSetupSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__STRUCT_H_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EGMSetupSettings in the package abb_rapid_sm_addin_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the custom RAPID
  *    data type "EGMSetupSettings" from the RobotWare "StateMachine Add-In".
  *
  *  Note:
  *    "EGMSetupSettings" are for example used with the RAPID EGM instruction
  *    "EGMSetupUC".
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_sm_addin_msgs__msg__EGMSetupSettings
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Indicator for if the EGM controller should apply filtering on the
  ///  EGM references.
  bool use_filtering;
  /// Communication timeout.
  float comm_timeout;
} abb_rapid_sm_addin_msgs__msg__EGMSetupSettings;

// Struct for a sequence of abb_rapid_sm_addin_msgs__msg__EGMSetupSettings.
typedef struct abb_rapid_sm_addin_msgs__msg__EGMSetupSettings__Sequence
{
  abb_rapid_sm_addin_msgs__msg__EGMSetupSettings * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_sm_addin_msgs__msg__EGMSetupSettings__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETUP_SETTINGS__STRUCT_H_
