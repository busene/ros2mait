// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_msgs:msg/ConfData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__CONF_DATA__STRUCT_H_
#define ABB_RAPID_MSGS__MSG__DETAIL__CONF_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ConfData in the package abb_rapid_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the
  *    RAPID data type "confdata" (robot configuration data).
  *
  *  Note:
  *    Please see the "Technical reference manual - RAPID Instructions,
  *    Functions and Data types" for more details.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_msgs__msg__ConfData
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  Rotating axis:
  ///  - The current quadrant of axis 1, 4 and 6,
  ///    expressed as a positive or negative integer.
  ///  Linear axis:
  ///  - The current meter interval of axis 1, 4 and 6,
  ///    expressed as a positive or negative integer.
  float cf1;
  float cf4;
  float cf6;
  /// Rotating axis:
  /// - For serial link robots, the current robot configuration,
  ///   expressed as an integer in the range from 0 to 7.
  /// - For SCARA robots, the current robot configuration,
  ///   expressed as an integer in the range from 0 to 1.
  /// - For 7-axis robots, the current robot configuration,
  ///   expressed as an integer in the range from 0 to 7.
  /// - For paint robots, the current quadrant of axis 5,
  ///   expressed as a positive or negative integer.
  /// - For other robots, using the current quadrant of axis 2,
  ///   expressed as a positive or negative integer.
  /// Linear axis:
  /// - The current meter interval of axis 2,
  ///   expressed as a positive or negative integer.
  float cfx;
} abb_rapid_msgs__msg__ConfData;

// Struct for a sequence of abb_rapid_msgs__msg__ConfData.
typedef struct abb_rapid_msgs__msg__ConfData__Sequence
{
  abb_rapid_msgs__msg__ConfData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_msgs__msg__ConfData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__CONF_DATA__STRUCT_H_
