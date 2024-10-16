// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros2srrc_data:action/Move.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__ACTION__DETAIL__MOVE__STRUCT_H_
#define ROS2SRRC_DATA__ACTION__DETAIL__MOVE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'action'
#include "rosidl_runtime_c/string.h"
// Member 'movej'
#include "ros2srrc_data/msg/detail/joints__struct.h"
// Member 'mover'
#include "ros2srrc_data/msg/detail/joint__struct.h"
// Member 'movel'
#include "ros2srrc_data/msg/detail/xyz__struct.h"
// Member 'moverot'
#include "ros2srrc_data/msg/detail/ypr__struct.h"
// Member 'moverp'
#include "ros2srrc_data/msg/detail/xyzypr__struct.h"

/// Struct defined in action/Move in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Move_Goal
{
  rosidl_runtime_c__String action;
  double speed;
  ros2srrc_data__msg__Joints movej;
  ros2srrc_data__msg__Joint mover;
  ros2srrc_data__msg__Xyz movel;
  ros2srrc_data__msg__Ypr moverot;
  ros2srrc_data__msg__Xyzypr moverp;
  double moveg;
} ros2srrc_data__action__Move_Goal;

// Struct for a sequence of ros2srrc_data__action__Move_Goal.
typedef struct ros2srrc_data__action__Move_Goal__Sequence
{
  ros2srrc_data__action__Move_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Move_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Move in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Move_Result
{
  rosidl_runtime_c__String result;
} ros2srrc_data__action__Move_Result;

// Struct for a sequence of ros2srrc_data__action__Move_Result.
typedef struct ros2srrc_data__action__Move_Result__Sequence
{
  ros2srrc_data__action__Move_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Move_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'feedback'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in action/Move in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Move_Feedback
{
  rosidl_runtime_c__String feedback;
} ros2srrc_data__action__Move_Feedback;

// Struct for a sequence of ros2srrc_data__action__Move_Feedback.
typedef struct ros2srrc_data__action__Move_Feedback__Sequence
{
  ros2srrc_data__action__Move_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Move_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "ros2srrc_data/action/detail/move__struct.h"

/// Struct defined in action/Move in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Move_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2srrc_data__action__Move_Goal goal;
} ros2srrc_data__action__Move_SendGoal_Request;

// Struct for a sequence of ros2srrc_data__action__Move_SendGoal_Request.
typedef struct ros2srrc_data__action__Move_SendGoal_Request__Sequence
{
  ros2srrc_data__action__Move_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Move_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Move in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Move_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} ros2srrc_data__action__Move_SendGoal_Response;

// Struct for a sequence of ros2srrc_data__action__Move_SendGoal_Response.
typedef struct ros2srrc_data__action__Move_SendGoal_Response__Sequence
{
  ros2srrc_data__action__Move_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Move_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Move in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Move_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} ros2srrc_data__action__Move_GetResult_Request;

// Struct for a sequence of ros2srrc_data__action__Move_GetResult_Request.
typedef struct ros2srrc_data__action__Move_GetResult_Request__Sequence
{
  ros2srrc_data__action__Move_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Move_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "ros2srrc_data/action/detail/move__struct.h"

/// Struct defined in action/Move in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Move_GetResult_Response
{
  int8_t status;
  ros2srrc_data__action__Move_Result result;
} ros2srrc_data__action__Move_GetResult_Response;

// Struct for a sequence of ros2srrc_data__action__Move_GetResult_Response.
typedef struct ros2srrc_data__action__Move_GetResult_Response__Sequence
{
  ros2srrc_data__action__Move_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Move_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "ros2srrc_data/action/detail/move__struct.h"

/// Struct defined in action/Move in the package ros2srrc_data.
typedef struct ros2srrc_data__action__Move_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  ros2srrc_data__action__Move_Feedback feedback;
} ros2srrc_data__action__Move_FeedbackMessage;

// Struct for a sequence of ros2srrc_data__action__Move_FeedbackMessage.
typedef struct ros2srrc_data__action__Move_FeedbackMessage__Sequence
{
  ros2srrc_data__action__Move_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros2srrc_data__action__Move_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS2SRRC_DATA__ACTION__DETAIL__MOVE__STRUCT_H_