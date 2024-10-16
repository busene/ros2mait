// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2srrc_data:action/Sequence.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__ACTION__DETAIL__SEQUENCE__STRUCT_H_
#define ROS2SRRC_DATA__ACTION__DETAIL__SEQUENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'sequence'
#include "ros2srrc_data/msg/detail/action__struct.h"
// Member 'robot'
// Member 'endeffector'
// Member 'environment'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Sequence in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Sequence_Goal
{
  ros2srrc_data__msg__Action__Sequence sequence;
  rosidl_runtime_c__String robot;
  rosidl_runtime_c__String endeffector;
  rosidl_runtime_c__String environment;
} ros2srrc_data__action__Sequence_Goal;

// Struct for a sequence of ros2srrc_data__action__Sequence_Goal.
typedef struct ros2srrc_data__action__Sequence_Goal__Sequence
{
  ros2srrc_data__action__Sequence_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Sequence_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Sequence in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Sequence_Result
{
  rosidl_runtime_c__String result;
} ros2srrc_data__action__Sequence_Result;

// Struct for a sequence of ros2srrc_data__action__Sequence_Result.
typedef struct ros2srrc_data__action__Sequence_Result__Sequence
{
  ros2srrc_data__action__Sequence_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Sequence_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Sequence in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Sequence_Feedback
{
  rosidl_runtime_c__String feedback;
} ros2srrc_data__action__Sequence_Feedback;

// Struct for a sequence of ros2srrc_data__action__Sequence_Feedback.
typedef struct ros2srrc_data__action__Sequence_Feedback__Sequence
{
  ros2srrc_data__action__Sequence_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Sequence_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ros2srrc_data/action/detail/sequence__struct.h"

/// Struct defined in action/Sequence in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Sequence_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2srrc_data__action__Sequence_Goal goal;
} ros2srrc_data__action__Sequence_SendGoal_Request;

// Struct for a sequence of ros2srrc_data__action__Sequence_SendGoal_Request.
typedef struct ros2srrc_data__action__Sequence_SendGoal_Request__Sequence
{
  ros2srrc_data__action__Sequence_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Sequence_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Sequence in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Sequence_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ros2srrc_data__action__Sequence_SendGoal_Response;

// Struct for a sequence of ros2srrc_data__action__Sequence_SendGoal_Response.
typedef struct ros2srrc_data__action__Sequence_SendGoal_Response__Sequence
{
  ros2srrc_data__action__Sequence_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Sequence_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Sequence in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Sequence_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ros2srrc_data__action__Sequence_GetResult_Request;

// Struct for a sequence of ros2srrc_data__action__Sequence_GetResult_Request.
typedef struct ros2srrc_data__action__Sequence_GetResult_Request__Sequence
{
  ros2srrc_data__action__Sequence_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Sequence_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2srrc_data/action/detail/sequence__struct.h"

/// Struct defined in action/Sequence in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Sequence_GetResult_Response
{
  int8_t status;
  ros2srrc_data__action__Sequence_Result result;
} ros2srrc_data__action__Sequence_GetResult_Response;

// Struct for a sequence of ros2srrc_data__action__Sequence_GetResult_Response.
typedef struct ros2srrc_data__action__Sequence_GetResult_Response__Sequence
{
  ros2srrc_data__action__Sequence_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Sequence_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ros2srrc_data/action/detail/sequence__struct.h"

/// Struct defined in action/Sequence in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Sequence_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2srrc_data__action__Sequence_Feedback feedback;
} ros2srrc_data__action__Sequence_FeedbackMessage;

// Struct for a sequence of ros2srrc_data__action__Sequence_FeedbackMessage.
typedef struct ros2srrc_data__action__Sequence_FeedbackMessage__Sequence
{
  ros2srrc_data__action__Sequence_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Sequence_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2SRRC_DATA__ACTION__DETAIL__SEQUENCE__STRUCT_H_
