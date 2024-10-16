// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_sm_addin_msgs:srv/GetEGMSettings.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__GET_EGM_SETTINGS__STRUCT_H_
#define ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__GET_EGM_SETTINGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetEGMSettings in the package abb_rapid_sm_addin_msgs.
typedef struct abb_rapid_sm_addin_msgs__srv__GetEGMSettings_Request
{
  /// -------------------------------------------------------------------------------
  ///  Service request fields
  /// -------------------------------------------------------------------------------
  ///  The RAPID task, where the variable exists.
  rosidl_runtime_c__String task;
} abb_rapid_sm_addin_msgs__srv__GetEGMSettings_Request;

// Struct for a sequence of abb_rapid_sm_addin_msgs__srv__GetEGMSettings_Request.
typedef struct abb_rapid_sm_addin_msgs__srv__GetEGMSettings_Request__Sequence
{
  abb_rapid_sm_addin_msgs__srv__GetEGMSettings_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_sm_addin_msgs__srv__GetEGMSettings_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'settings'
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__struct.h"
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetEGMSettings in the package abb_rapid_sm_addin_msgs.
typedef struct abb_rapid_sm_addin_msgs__srv__GetEGMSettings_Response
{
  /// -------------------------------------------------------------------------------
  ///  Service response fields
  /// -------------------------------------------------------------------------------
  ///  The settings used for RAPID EGM instructions.
  abb_rapid_sm_addin_msgs__msg__EGMSettings settings;
  /// Service success/failure indicator.
  /// Refer to 'abb_robot_msgs/ServiceResponses' for defined error codes.
  uint16_t result_code;
  /// Status message (empty if service succeeded).
  rosidl_runtime_c__String message;
} abb_rapid_sm_addin_msgs__srv__GetEGMSettings_Response;

// Struct for a sequence of abb_rapid_sm_addin_msgs__srv__GetEGMSettings_Response.
typedef struct abb_rapid_sm_addin_msgs__srv__GetEGMSettings_Response__Sequence
{
  abb_rapid_sm_addin_msgs__srv__GetEGMSettings_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_sm_addin_msgs__srv__GetEGMSettings_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__GET_EGM_SETTINGS__STRUCT_H_