// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_sm_addin_msgs:srv/SetRAPIDRoutine.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_RAPID_ROUTINE__STRUCT_H_
#define ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_RAPID_ROUTINE__STRUCT_H_

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
// Member 'routine'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetRAPIDRoutine in the package abb_rapid_sm_addin_msgs.
typedef struct abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request
{
  /// -------------------------------------------------------------------------------
  ///  Service request fields
  /// -------------------------------------------------------------------------------
  ///  The RAPID task that runs the "StateMachine Add-In" instance.
  rosidl_runtime_c__String task;
  /// Desired custom RAPID routine to run.
  rosidl_runtime_c__String routine;
} abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request;

// Struct for a sequence of abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request.
typedef struct abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__Sequence
{
  abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetRAPIDRoutine in the package abb_rapid_sm_addin_msgs.
typedef struct abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response
{
  /// -------------------------------------------------------------------------------
  ///  Service response fields
  /// -------------------------------------------------------------------------------
  ///  Service success/failure indicator.
  ///  Refer to 'abb_robot_msgs/ServiceResponses' for defined error codes.
  uint16_t result_code;
  /// Status message (empty if service succeeded).
  rosidl_runtime_c__String message;
} abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response;

// Struct for a sequence of abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response.
typedef struct abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__Sequence
{
  abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_sm_addin_msgs__srv__SetRAPIDRoutine_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_RAPID_ROUTINE__STRUCT_H_
