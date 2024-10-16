// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMActivateSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_ACTIVATE_SETTINGS__STRUCT_H_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_ACTIVATE_SETTINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tool'
#include "abb_rapid_msgs/msg/detail/tool_data__struct.h"
// Member 'wobj'
#include "abb_rapid_msgs/msg/detail/w_obj_data__struct.h"
// Member 'correction_frame'
// Member 'sensor_frame'
#include "abb_rapid_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/EGMActivateSettings in the package abb_rapid_sm_addin_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the custom RAPID
  *    data type "EGMActivateSettings" from the RobotWare "StateMachine Add-In".
  *
  *  Note:
  *    "EGMActivateSettings" are for example used with the RAPID EGM instructions
  *    "EGMActJoint" and "EGMActPose".
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_sm_addin_msgs__msg__EGMActivateSettings
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Tool to use for EGM motions.
  abb_rapid_msgs__msg__ToolData tool;
  /// Work object to use for EGM motions.
  abb_rapid_msgs__msg__WObjData wobj;
  /// Correction frame to use for EGM motions (only used in EGM pose mode).
  abb_rapid_msgs__msg__Pose correction_frame;
  /// Sensor frame to use for EGM motions (only used in EGM pose mode).
  abb_rapid_msgs__msg__Pose sensor_frame;
  /// Condition threshold value for when an EGM motion's convergence
  /// criteria is considered to be fulfilled.
  float cond_min_max;
  /// Low pass filter bandwidth for the EGM controller.
  float lp_filter;
  /// Sample rate for the EGM communication.
  uint8_t sample_rate;
  /// Maximum admitted joint speed.
  float max_speed_deviation;
} abb_rapid_sm_addin_msgs__msg__EGMActivateSettings;

// Struct for a sequence of abb_rapid_sm_addin_msgs__msg__EGMActivateSettings.
typedef struct abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence
{
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__EGM_ACTIVATE_SETTINGS__STRUCT_H_
