// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_robot_msgs:msg/ServiceResponses.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__SERVICE_RESPONSES__STRUCT_H_
#define ABB_ROBOT_MSGS__MSG__DETAIL__SERVICE_RESPONSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SUCCESS'.
/**
  * Generic OK
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__SUCCESS = "";

/// Constant 'RC_SUCCESS'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_SUCCESS = 1
};

/// Constant 'FAILED'.
/**
  * Generic failure message
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__FAILED = "Service failed (e.g. timeout or resource not found, see the DEBUG log for details)";

/// Constant 'RC_FAILED'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_FAILED = 2
};

/// Constant 'SERVER_IS_BUSY'.
/**
  * The server's underlying communication interface is busy
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__SERVER_IS_BUSY = "Server is busy";

/// Constant 'RC_SERVER_IS_BUSY'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_SERVER_IS_BUSY = 1001
};

/// Constant 'EMPTY_FILENAME'.
/**
  * Filename field is empty in service request
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__EMPTY_FILENAME = "Filename is empty";

/// Constant 'RC_EMPTY_FILENAME'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_EMPTY_FILENAME = 2001
};

/// Constant 'EMPTY_SIGNAL_NAME'.
/**
  * Signal name field is empty in service request
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__EMPTY_SIGNAL_NAME = "Signal name is empty";

/// Constant 'RC_EMPTY_SIGNAL_NAME'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_EMPTY_SIGNAL_NAME = 2002
};

/// Constant 'EMPTY_RAPID_TASK_NAME'.
/**
  * RAPID task name field is empty in service request
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__EMPTY_RAPID_TASK_NAME = "RAPID task name is empty";

/// Constant 'RC_EMPTY_RAPID_TASK_NAME'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_EMPTY_RAPID_TASK_NAME = 2003
};

/// Constant 'EMPTY_RAPID_MODULE_NAME'.
/**
  * RAPID module name field is empty in service request
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__EMPTY_RAPID_MODULE_NAME = "RAPID module name is empty";

/// Constant 'RC_EMPTY_RAPID_MODULE_NAME'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_EMPTY_RAPID_MODULE_NAME = 2004
};

/// Constant 'EMPTY_RAPID_SYMBOL_NAME'.
/**
  * RAPID symbol name field is empty in service request
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__EMPTY_RAPID_SYMBOL_NAME = "RAPID symbol name is empty";

/// Constant 'RC_EMPTY_RAPID_SYMBOL_NAME'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_EMPTY_RAPID_SYMBOL_NAME = 2005
};

/// Constant 'NOT_IN_AUTO_MODE'.
/**
  * Robot controller is not in auto mode
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__NOT_IN_AUTO_MODE = "Robot controller is not in AUTO mode";

/// Constant 'RC_NOT_IN_AUTO_MODE'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_NOT_IN_AUTO_MODE = 3001
};

/// Constant 'MOTORS_ARE_OFF'.
/**
  * The motors are off
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__MOTORS_ARE_OFF = "Motors are off";

/// Constant 'RC_MOTORS_ARE_OFF'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_MOTORS_ARE_OFF = 3002
};

/// Constant 'MOTORS_ARE_ON'.
/**
  * The motors are on
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__MOTORS_ARE_ON = "Motors are on";

/// Constant 'RC_MOTORS_ARE_ON'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_MOTORS_ARE_ON = 3003
};

/// Constant 'RAPID_NOT_STOPPED'.
/**
  * RAPID has not been stopped
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__RAPID_NOT_STOPPED = "RAPID has not been stopped";

/// Constant 'RC_RAPID_NOT_STOPPED'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_RAPID_NOT_STOPPED = 3004
};

/// Constant 'RAPID_NOT_RUNNING'.
/**
  * RAPID is not running
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__RAPID_NOT_RUNNING = "RAPID is not running";

/// Constant 'RC_RAPID_NOT_RUNNING'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_RAPID_NOT_RUNNING = 3005
};

/// Constant 'SM_RUNTIME_STATES_MISSING'.
/**
  * RobotWare StateMachine Add-In runtime state is missing
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__SM_RUNTIME_STATES_MISSING = "No runtime states received for any StateMachine Add-In instance";

/// Constant 'RC_SM_RUNTIME_STATES_MISSING'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_SM_RUNTIME_STATES_MISSING = 4001
};

/// Constant 'SM_UNKNOWN_RAPID_TASK'.
/**
  * RobotWare StateMachine Add-In-instances do not know RAPID task
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__SM_UNKNOWN_RAPID_TASK = "RAPID task not found among known StateMachine Add-In instances";

/// Constant 'RC_SM_UNKNOWN_RAPID_TASK'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_SM_UNKNOWN_RAPID_TASK = 4002
};

/// Constant 'SM_UNINITIALIZED'.
/**
  * RobotWare StateMachine Add-In instance has not been initialized
 */
static const char * const abb_robot_msgs__msg__ServiceResponses__SM_UNINITIALIZED = "StateMachine Add-In instance has not been initialized";

/// Constant 'RC_SM_UNINITIALIZED'.
enum
{
  abb_robot_msgs__msg__ServiceResponses__RC_SM_UNINITIALIZED = 4003
};

/// Struct defined in msg/ServiceResponses in the package abb_robot_msgs.
/**
  * result codes are 16 bit unsigned
 */
typedef struct abb_robot_msgs__msg__ServiceResponses
{
  uint8_t structure_needs_at_least_one_member;
} abb_robot_msgs__msg__ServiceResponses;

// Struct for a sequence of abb_robot_msgs__msg__ServiceResponses.
typedef struct abb_robot_msgs__msg__ServiceResponses__Sequence
{
  abb_robot_msgs__msg__ServiceResponses * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_robot_msgs__msg__ServiceResponses__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__SERVICE_RESPONSES__STRUCT_H_
