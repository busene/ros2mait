// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_sm_addin_msgs:srv/SetSGCommand.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_SG_COMMAND__STRUCT_H_
#define ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_SG_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SG_COMMAND_UNKNOWN'.
/**
  * -------------------------------------------------------------------------------
  *  Enumerations
  * -------------------------------------------------------------------------------
  *  Supported "StateMachine Add-In" SmartGripper commands:
  *
  *  Note: These enumeration values differ from the RAPID implementation
  *        values to avoid conflict with default values in ROS messages.
 */
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_UNKNOWN = 1
};

/// Constant 'SG_COMMAND_NONE'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_NONE = 2
};

/// Constant 'SG_COMMAND_INITIALIZE'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_INITIALIZE = 3
};

/// Constant 'SG_COMMAND_CALIBRATE'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_CALIBRATE = 4
};

/// Constant 'SG_COMMAND_MOVE_TO'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_MOVE_TO = 5
};

/// Constant 'SG_COMMAND_GRIP_IN'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_GRIP_IN = 6
};

/// Constant 'SG_COMMAND_GRIP_OUT'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_GRIP_OUT = 7
};

/// Constant 'SG_COMMAND_BLOW_ON_1'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_BLOW_ON_1 = 8
};

/// Constant 'SG_COMMAND_BLOW_ON_2'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_BLOW_ON_2 = 9
};

/// Constant 'SG_COMMAND_BLOW_OFF_1'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_BLOW_OFF_1 = 10
};

/// Constant 'SG_COMMAND_BLOW_OFF_2'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_BLOW_OFF_2 = 11
};

/// Constant 'SG_COMMAND_VACUUM_ON_1'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_VACUUM_ON_1 = 12
};

/// Constant 'SG_COMMAND_VACUUM_ON_2'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_VACUUM_ON_2 = 13
};

/// Constant 'SG_COMMAND_VACUUM_OFF_1'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_VACUUM_OFF_1 = 14
};

/// Constant 'SG_COMMAND_VACUUM_OFF_2'.
enum
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__SG_COMMAND_VACUUM_OFF_2 = 15
};

// Include directives for member types
// Member 'task'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetSGCommand in the package abb_rapid_sm_addin_msgs.
typedef struct abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request
{
  /// -------------------------------------------------------------------------------
  ///  Service request fields
  /// -------------------------------------------------------------------------------
  ///  The RAPID task that runs the "StateMachine Add-In" instance.
  rosidl_runtime_c__String task;
  /// Desired SmartGripper command.
  uint8_t command;
  /// Desired target position (only used for the 'SG_COMMAND_MOVE_TO' command).
  float target_position;
} abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request;

// Struct for a sequence of abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request.
typedef struct abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__Sequence
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_sm_addin_msgs__srv__SetSGCommand_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetSGCommand in the package abb_rapid_sm_addin_msgs.
typedef struct abb_rapid_sm_addin_msgs__srv__SetSGCommand_Response
{
  /// -------------------------------------------------------------------------------
  ///  Service response fields
  /// -------------------------------------------------------------------------------
  ///  Service success/failure indicator.
  ///  Refer to 'abb_robot_msgs/ServiceResponses' for defined error codes.
  uint16_t result_code;
  /// Status message (empty if service succeeded).
  rosidl_runtime_c__String message;
} abb_rapid_sm_addin_msgs__srv__SetSGCommand_Response;

// Struct for a sequence of abb_rapid_sm_addin_msgs__srv__SetSGCommand_Response.
typedef struct abb_rapid_sm_addin_msgs__srv__SetSGCommand_Response__Sequence
{
  abb_rapid_sm_addin_msgs__srv__SetSGCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_sm_addin_msgs__srv__SetSGCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_SM_ADDIN_MSGS__SRV__DETAIL__SET_SG_COMMAND__STRUCT_H_
