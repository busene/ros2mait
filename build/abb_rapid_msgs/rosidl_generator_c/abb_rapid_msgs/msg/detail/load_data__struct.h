// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from abb_rapid_msgs:msg/LoadData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__LOAD_DATA__STRUCT_H_
#define ABB_RAPID_MSGS__MSG__DETAIL__LOAD_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'cog'
#include "abb_rapid_msgs/msg/detail/pos__struct.h"
// Member 'aom'
#include "abb_rapid_msgs/msg/detail/orient__struct.h"

/// Struct defined in msg/LoadData in the package abb_rapid_msgs.
/**
  * -------------------------------------------------------------------------------
  *  Description:
  *    The purpose of this message definition, is to represent the
  *    RAPID data type "loaddata" (load data).
  *
  *  Note:
  *    Please see the "Technical reference manual - RAPID Instructions,
  *    Functions and Data types" for more details.
  * -------------------------------------------------------------------------------
 */
typedef struct abb_rapid_msgs__msg__LoadData
{
  /// -------------------------------------------------------------------------------
  ///  Message fields
  /// -------------------------------------------------------------------------------
  ///  The mass (weight) of the load in kg.
  float mass;
  /// The center of gravity of the payload, expressed in mm,
  /// in the tool coordinate system if the robot is holding the tool.
  ///
  /// If a stationary tool is used then the center of gravity for the payload
  /// held by the gripper is expressed in the object frame of the work object
  /// coordinate system moved by the robot.
  abb_rapid_msgs__msg__Pos cog;
  /// The orientation of the axes of moment.
  ///
  /// These are the principal axes of the payload
  /// moment of inertia with origin in cog.
  ///
  /// If the robot is holding the tool, the axes of moment
  /// are expressed in the tool coordinate system.
  abb_rapid_msgs__msg__Orient aom;
  /// The moment of inertia of the load around the x-, y- and z-axis,
  /// expressed in kgm^2.
  float ix;
  float iy;
  float iz;
} abb_rapid_msgs__msg__LoadData;

// Struct for a sequence of abb_rapid_msgs__msg__LoadData.
typedef struct abb_rapid_msgs__msg__LoadData__Sequence
{
  abb_rapid_msgs__msg__LoadData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} abb_rapid_msgs__msg__LoadData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__LOAD_DATA__STRUCT_H_
