// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_robot_msgs:srv/GetSpeedRatio.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__SRV__DETAIL__GET_SPEED_RATIO__STRUCT_H_
#define ABB_ROBOT_MSGS__SRV__DETAIL__GET_SPEED_RATIO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetSpeedRatio in the package abb_robot_msgs.
typedef struct abb_robot_msgs__srv__GetSpeedRatio_Request
{
  uint8_t structure_needs_at_least_one_member;
} abb_robot_msgs__srv__GetSpeedRatio_Request;

// Struct for a sequence of abb_robot_msgs__srv__GetSpeedRatio_Request.
typedef struct abb_robot_msgs__srv__GetSpeedRatio_Request__Sequence
{
  abb_robot_msgs__srv__GetSpeedRatio_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_robot_msgs__srv__GetSpeedRatio_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetSpeedRatio in the package abb_robot_msgs.
typedef struct abb_robot_msgs__srv__GetSpeedRatio_Response
{
  /// -------------------------------------------------------------------------------
  ///  Service response fields
  /// -------------------------------------------------------------------------------
  ///  Speed ratio.
  uint8_t speed_ratio;
  /// Service success/failure indicator.
  /// Refer to 'abb_robot_msgs/ServiceResponses' for defined error codes.
  uint16_t result_code;
  /// Status message (empty if service succeeded).
  rosidl_runtime_c__String message;
} abb_robot_msgs__srv__GetSpeedRatio_Response;

// Struct for a sequence of abb_robot_msgs__srv__GetSpeedRatio_Response.
typedef struct abb_robot_msgs__srv__GetSpeedRatio_Response__Sequence
{
  abb_robot_msgs__srv__GetSpeedRatio_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_robot_msgs__srv__GetSpeedRatio_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_ROBOT_MSGS__SRV__DETAIL__GET_SPEED_RATIO__STRUCT_H_
