// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSettings.idl
// generated code does not contain a copyright notice
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "abb_rapid_sm_addin_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__struct.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__functions.h"
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

#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__functions.h"  // activate
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_run_settings__functions.h"  // run
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_setup_settings__functions.h"  // setup_uc
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_stop_settings__functions.h"  // stop

// forward declare type support functions
size_t get_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMActivateSettings(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMActivateSettings(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMActivateSettings)();
size_t get_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMRunSettings(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMRunSettings(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMRunSettings)();
size_t get_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMSetupSettings(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMSetupSettings(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMSetupSettings)();
size_t get_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMStopSettings(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMStopSettings(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMStopSettings)();


using _EGMSettings__ros_msg_type = abb_rapid_sm_addin_msgs__msg__EGMSettings;

static bool _EGMSettings__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EGMSettings__ros_msg_type * ros_message = static_cast<const _EGMSettings__ros_msg_type *>(untyped_ros_message);
  // Field name: allow_egm_motions
  {
    cdr << (ros_message->allow_egm_motions ? true : false);
  }

  // Field name: use_presync
  {
    cdr << (ros_message->use_presync ? true : false);
  }

  // Field name: setup_uc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMSetupSettings
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->setup_uc, cdr))
    {
      return false;
    }
  }

  // Field name: activate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMActivateSettings
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->activate, cdr))
    {
      return false;
    }
  }

  // Field name: run
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMRunSettings
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->run, cdr))
    {
      return false;
    }
  }

  // Field name: stop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMStopSettings
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->stop, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _EGMSettings__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EGMSettings__ros_msg_type * ros_message = static_cast<_EGMSettings__ros_msg_type *>(untyped_ros_message);
  // Field name: allow_egm_motions
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->allow_egm_motions = tmp ? true : false;
  }

  // Field name: use_presync
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_presync = tmp ? true : false;
  }

  // Field name: setup_uc
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMSetupSettings
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->setup_uc))
    {
      return false;
    }
  }

  // Field name: activate
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMActivateSettings
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->activate))
    {
      return false;
    }
  }

  // Field name: run
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMRunSettings
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->run))
    {
      return false;
    }
  }

  // Field name: stop
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMStopSettings
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->stop))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_sm_addin_msgs
size_t get_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMSettings(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EGMSettings__ros_msg_type * ros_message = static_cast<const _EGMSettings__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name allow_egm_motions
  {
    size_t item_size = sizeof(ros_message->allow_egm_motions);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_presync
  {
    size_t item_size = sizeof(ros_message->use_presync);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name setup_uc

  current_alignment += get_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMSetupSettings(
    &(ros_message->setup_uc), current_alignment);
  // field.name activate

  current_alignment += get_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMActivateSettings(
    &(ros_message->activate), current_alignment);
  // field.name run

  current_alignment += get_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMRunSettings(
    &(ros_message->run), current_alignment);
  // field.name stop

  current_alignment += get_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMStopSettings(
    &(ros_message->stop), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _EGMSettings__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMSettings(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_sm_addin_msgs
size_t max_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMSettings(
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

  // member: allow_egm_motions
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: use_presync
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: setup_uc
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMSetupSettings(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: activate
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMActivateSettings(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: run
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMRunSettings(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: stop
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMStopSettings(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = abb_rapid_sm_addin_msgs__msg__EGMSettings;
    is_plain =
      (
      offsetof(DataType, stop) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _EGMSettings__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_abb_rapid_sm_addin_msgs__msg__EGMSettings(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EGMSettings = {
  "abb_rapid_sm_addin_msgs::msg",
  "EGMSettings",
  _EGMSettings__cdr_serialize,
  _EGMSettings__cdr_deserialize,
  _EGMSettings__get_serialized_size,
  _EGMSettings__max_serialized_size
};

static rosidl_message_type_support_t _EGMSettings__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EGMSettings,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_sm_addin_msgs, msg, EGMSettings)() {
  return &_EGMSettings__type_support;
}

#if defined(__cplusplus)
}
#endif
