// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_robot_msgs:srv/SetRAPIDString.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__SRV__DETAIL__SET_RAPID_STRING__STRUCT_H_
#define ABB_ROBOT_MSGS__SRV__DETAIL__SET_RAPID_STRING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'path'
#include "abb_robot_msgs/msg/detail/rapid_symbol_path__struct.h"
// Member 'value'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetRAPIDString in the package abb_robot_msgs.
typedef struct abb_robot_msgs__srv__SetRAPIDString_Request
{
  /// -------------------------------------------------------------------------------
  ///  Service request fields
  /// -------------------------------------------------------------------------------
  ///  Path to the targeted RAPID symbol.
  abb_robot_msgs__msg__RAPIDSymbolPath path;
  /// New value of the RAPID symbol.
  rosidl_runtime_c__String value;
} abb_robot_msgs__srv__SetRAPIDString_Request;

// Struct for a sequence of abb_robot_msgs__srv__SetRAPIDString_Request.
typedef struct abb_robot_msgs__srv__SetRAPIDString_Request__Sequence
{
  abb_robot_msgs__srv__SetRAPIDString_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_robot_msgs__srv__SetRAPIDString_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetRAPIDString in the package abb_robot_msgs.
typedef struct abb_robot_msgs__srv__SetRAPIDString_Response
{
  /// -------------------------------------------------------------------------------
  ///  Service response fields
  /// -------------------------------------------------------------------------------
  ///  Service success/failure indicator.
  ///  Refer to 'abb_robot_msgs/ServiceResponses' for defined error codes.
  uint16_t result_code;
  /// Status message (empty if service succeeded).
  rosidl_runtime_c__String message;
} abb_robot_msgs__srv__SetRAPIDString_Response;

// Struct for a sequence of abb_robot_msgs__srv__SetRAPIDString_Response.
typedef struct abb_robot_msgs__srv__SetRAPIDString_Response__Sequence
{
  abb_robot_msgs__srv__SetRAPIDString_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_robot_msgs__srv__SetRAPIDString_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_ROBOT_MSGS__SRV__DETAIL__SET_RAPID_STRING__STRUCT_H_
