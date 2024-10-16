// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from abb_rapid_sm_addin_msgs:msg/StateMachineState.idl
// generated code does not contain a copyright notice
#include "abb_rapid_sm_addin_msgs/msg/detail/state_machine_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "abb_rapid_sm_addin_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/state_machine_state__struct.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/state_machine_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // rapid_task
#include "rosidl_runtime_c/string_functions.h"  // rapid_task

// forward declare type support functions


using _StateMachineState__ros_msg_type = abb_rapid_sm_addin_msgs__msg__StateMachineState;

static bool _StateMachineState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _StateMachineState__ros_msg_type * ros_message = static_cast<const _StateMachineState__ros_msg_type *>(untyped_ros_message);
  // Field name: rapid_task
  {
    const rosidl_runtime_c__String * str = &ros_message->rapid_task;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: sm_state
  {
    cdr << ros_message->sm_state;
  }

  // Field name: egm_action
  {
    cdr << ros_message->egm_action;
  }

  return true;
}

static bool _StateMachineState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _StateMachineState__ros_msg_type * ros_message = static_cast<_StateMachineState__ros_msg_type *>(untyped_ros_message);
  // Field name: rapid_task
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->rapid_task.data) {
      rosidl_runtime_c__String__init(&ros_message->rapid_task);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->rapid_task,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'rapid_task'\n");
      return false;
    }
  }

  // Field name: sm_state
  {
    cdr >> ros_message->sm_state;
  }

  // Field name: egm_action
  {
    cdr >> ros_message->egm_action;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_sm_addin_msgs
size_t get_serialized_size_abb_rapid_sm_addin_msgs__msg__StateMachineState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _StateMachineState__ros_msg_type * ros_message = static_cast<const _StateMachineState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name rapid_task
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->rapid_task.size + 1);
  // field.name sm_state
  {
    size_t item_size = sizeof(ros_message->sm_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name egm_action
  {
    size_t item_size = sizeof(ros_message->egm_action);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _StateMachineState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_abb_rapid_sm_addin_msgs__msg__StateMachineState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_sm_addin_msgs
size_t max_serialized_size_abb_rapid_sm_addin_msgs__msg__StateMachineState(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: rapid_task
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: sm_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: egm_action
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abb_rapid_sm_addin_msgs__msg__StateMachineState;
    is_plain =
      (
      offsetof(DataType, egm_action) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _StateMachineState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_abb_rapid_sm_addin_msgs__msg__StateMachineState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_StateMachineState = {
  "abb_rapid_sm_addin_msgs::msg",
  "StateMachineState",
  _StateMachineState__cdr_serialize,
  _StateMachineState__cdr_deserialize,
  _StateMachineState__get_serialized_size,
  _StateMachineState__max_serialized_size
};

static rosidl_message_type_support_t _StateMachineState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_StateMachineState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, StateMachineState)() {
  return &_StateMachineState__type_support;
}

#if defined(__cplusplus)
}
#endif
