// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMRunSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__STRUCT_H_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'offset'
#include "abb_rapid_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/EGMRunSettings in the package abb_rapid_sm_addin_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the custom RAPID
  *    data type "EGMRunSettings" from the RobotWare "StateMachine Add-In".
  *
  *  Note:
  *    "EGMRunSettings" are for example used with the RAPID EGM instructions
  *    "EGMRunJoint" and "EGMRunPose".
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_sm_addin_msgs__msg__EGMRunSettings
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Condition time for how long an EGM motion's convergence criteria must be
  ///  fulfilled before the motion is considered to be finished.
  float cond_time;
  /// Ramp in time.
  float ramp_in_time;
  /// Static offset applied on top of the EGM references
  /// (only used in EGM pose mode).
  abb_rapid_msgs__msg__Pose offset;
  /// Position correction gain for the EGM controller.
  float pos_corr_gain;
} abb_rapid_sm_addin_msgs__msg__EGMRunSettings;

// Struct for a sequence of abb_rapid_sm_addin_msgs__msg__EGMRunSettings.
typedef struct abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence
{
  abb_rapid_sm_addin_msgs__msg__EGMRunSettings * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_sm_addin_msgs__msg__EGMRunSettings__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_RUN_SETTINGS__STRUCT_H_
