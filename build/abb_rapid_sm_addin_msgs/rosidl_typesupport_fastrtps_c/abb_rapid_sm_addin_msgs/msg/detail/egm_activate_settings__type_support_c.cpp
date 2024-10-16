// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMActivateSettings.idl
// generated code does not contain a copyright notice
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "abb_rapid_sm_addin_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__struct.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__functions.h"
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

#include "abb_rapid_msgs/msg/detail/pose__functions.h"  // correction_frame, sensor_frame
#include "abb_rapid_msgs/msg/detail/tool_data__functions.h"  // tool
#include "abb_rapid_msgs/msg/detail/w_obj_data__functions.h"  // wobj

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_abb_rapid_sm_addin_msgs
size_t get_serialized_size_abb_rapid_msgs__msg__Pose(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_abb_rapid_sm_addin_msgs
size_t max_serialized_size_abb_rapid_msgs__msg__Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pose)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_abb_rapid_sm_addin_msgs
size_t get_serialized_size_abb_rapid_msgs__msg__ToolData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_abb_rapid_sm_addin_msgs
size_t max_serialized_size_abb_rapid_msgs__msg__ToolData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, ToolData)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_abb_rapid_sm_addin_msgs
size_t get_serialized_size_abb_rapid_msgs__msg__WObjData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_abb_rapid_sm_addin_msgs
size_t max_serialized_size_abb_rapid_msgs__msg__WObjData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, WObjData)();


using _EGMActivateSettings__ros_msg_type = abb_rapid_sm_addin_msgs__msg__EGMActivateSettings;

static bool _EGMActivateSettings__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EGMActivateSettings__ros_msg_type * ros_message = static_cast<const _EGMActivateSettings__ros_msg_type *>(untyped_ros_message);
  // Field name: tool
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, ToolData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->tool, cdr))
    {
      return false;
    }
  }

  // Field name: wobj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, WObjData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->wobj, cdr))
    {
      return false;
    }
  }

  // Field name: correction_frame
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->correction_frame, cdr))
    {
      return false;
    }
  }

  // Field name: sensor_frame
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sensor_frame, cdr))
    {
      return false;
    }
  }

  // Field name: cond_min_max
  {
    cdr << ros_message->cond_min_max;
  }

  // Field name: lp_filter
  {
    cdr << ros_message->lp_filter;
  }

  // Field name: sample_rate
  {
    cdr << ros_message->sample_rate;
  }

  // Field name: max_speed_deviation
  {
    cdr << ros_message->max_speed_deviation;
  }

  return true;
}

static bool _EGMActivateSettings__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EGMActivateSettings__ros_msg_type * ros_message = static_cast<_EGMActivateSettings__ros_msg_type *>(untyped_ros_message);
  // Field name: tool
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, ToolData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->tool))
    {
      return false;
    }
  }

  // Field name: wobj
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, WObjData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->wobj))
    {
      return false;
    }
  }

  // Field name: correction_frame
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->correction_frame))
    {
      return false;
    }
  }

  // Field name: sensor_frame
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pose
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sensor_frame))
    {
      return false;
    }
  }

  // Field name: cond_min_max
  {
    cdr >> ros_message->cond_min_max;
  }

  // Field name: lp_filter
  {
    cdr >> ros_message->lp_filter;
  }

  // Field name: sample_rate
  {
    cdr >> ros_message->sample_rate;
  }

  // Field name: max_speed_deviation
  {
    cdr >> ros_message->max_speed_deviation;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_sm_addin_msgs
size_t get_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMActivateSettings(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EGMActivateSettings__ros_msg_type * ros_message = static_cast<const _EGMActivateSettings__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name tool

  current_alignment += get_serialized_size_abb_rapid_msgs__msg__ToolData(
    &(ros_message->tool), current_alignment);
  // field.name wobj

  current_alignment += get_serialized_size_abb_rapid_msgs__msg__WObjData(
    &(ros_message->wobj), current_alignment);
  // field.name correction_frame

  current_alignment += get_serialized_size_abb_rapid_msgs__msg__Pose(
    &(ros_message->correction_frame), current_alignment);
  // field.name sensor_frame

  current_alignment += get_serialized_size_abb_rapid_msgs__msg__Pose(
    &(ros_message->sensor_frame), current_alignment);
  // field.name cond_min_max
  {
    size_t item_size = sizeof(ros_message->cond_min_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lp_filter
  {
    size_t item_size = sizeof(ros_message->lp_filter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sample_rate
  {
    size_t item_size = sizeof(ros_message->sample_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_speed_deviation
  {
    size_t item_size = sizeof(ros_message->max_speed_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EGMActivateSettings__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMActivateSettings(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_sm_addin_msgs
size_t max_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMActivateSettings(
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

  // member: tool
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_msgs__msg__ToolData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: wobj
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_msgs__msg__WObjData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: correction_frame
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: sensor_frame
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_msgs__msg__Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cond_min_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lp_filter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sample_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: max_speed_deviation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abb_rapid_sm_addin_msgs__msg__EGMActivateSettings;
    is_plain =
      (
      offsetof(DataType, max_speed_deviation) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EGMActivateSettings__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMActivateSettings(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EGMActivateSettings = {
  "abb_rapid_sm_addin_msgs::msg",
  "EGMActivateSettings",
  _EGMActivateSettings__cdr_serialize,
  _EGMActivateSettings__cdr_deserialize,
  _EGMActivateSettings__get_serialized_size,
  _EGMActivateSettings__max_serialized_size
};

static rosidl_message_type_support_t _EGMActivateSettings__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EGMActivateSettings,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMActivateSettings)() {
  return &_EGMActivateSettings__type_support;
}

#if defined(__cplusplus)
}
#endif
