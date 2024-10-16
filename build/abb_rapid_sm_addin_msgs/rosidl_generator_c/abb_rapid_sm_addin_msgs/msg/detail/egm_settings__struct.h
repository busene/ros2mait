// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETTINGS__STRUCT_H_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETTINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'setup_uc'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_setup_settings__struct.h"
// Member 'activate'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__struct.h"
// Member 'run'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_run_settings__struct.h"
// Member 'stop'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_stop_settings__struct.h"

/// Struct defined in msg/EGMSettings in the package abb_rapid_sm_addin_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the custom RAPID
  *    data type "EGMSettings" from the RobotWare "StateMachine Add-In".
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_sm_addin_msgs__msg__EGMSettings
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Indicator for if EGM motions are allowed to start.
  bool allow_egm_motions;
  /// Indicator for if RAPID tasks should be synced before starting EGM motions
  /// (only used in multi robot systems).
  bool use_presync;
  /// Settings for EGMSetupUC instructions.
  abb_rapid_sm_addin_msgs__msg__EGMSetupSettings setup_uc;
  /// Settings for EGMAct instructions.
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings activate;
  /// Settings for EGMRun instructions.
  abb_rapid_sm_addin_msgs__msg__EGMRunSettings run;
  /// Settings for EGMStop instructions.
  abb_rapid_sm_addin_msgs__msg__EGMStopSettings stop;
} abb_rapid_sm_addin_msgs__msg__EGMSettings;

// Struct for a sequence of abb_rapid_sm_addin_msgs__msg__EGMSettings.
typedef struct abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence
{
  abb_rapid_sm_addin_msgs__msg__EGMSettings * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_SETTINGS__STRUCT_H_
