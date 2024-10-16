// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from abb_rapid_msgs:msg/LoadData.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/load_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "abb_rapid_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "abb_rapid_msgs/msg/detail/load_data__struct.h"
#include "abb_rapid_msgs/msg/detail/load_data__functions.h"
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

#include "abb_rapid_msgs/msg/detail/orient__functions.h"  // aom
#include "abb_rapid_msgs/msg/detail/pos__functions.h"  // cog

// forward declare type support functions
size_t get_serialized_size_abb_rapid_msgs__msg__Orient(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_rapid_msgs__msg__Orient(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Orient)();
size_t get_serialized_size_abb_rapid_msgs__msg__Pos(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_abb_rapid_msgs__msg__Pos(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pos)();


using _LoadData__ros_msg_type = abb_rapid_msgs__msg__LoadData;

static bool _LoadData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LoadData__ros_msg_type * ros_message = static_cast<const _LoadData__ros_msg_type *>(untyped_ros_message);
  // Field name: mass
  {
    cdr << ros_message->mass;
  }

  // Field name: cog
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pos
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cog, cdr))
    {
      return false;
    }
  }

  // Field name: aom
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Orient
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->aom, cdr))
    {
      return false;
    }
  }

  // Field name: ix
  {
    cdr << ros_message->ix;
  }

  // Field name: iy
  {
    cdr << ros_message->iy;
  }

  // Field name: iz
  {
    cdr << ros_message->iz;
  }

  return true;
}

static bool _LoadData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LoadData__ros_msg_type * ros_message = static_cast<_LoadData__ros_msg_type *>(untyped_ros_message);
  // Field name: mass
  {
    cdr >> ros_message->mass;
  }

  // Field name: cog
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Pos
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cog))
    {
      return false;
    }
  }

  // Field name: aom
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, Orient
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->aom))
    {
      return false;
    }
  }

  // Field name: ix
  {
    cdr >> ros_message->ix;
  }

  // Field name: iy
  {
    cdr >> ros_message->iy;
  }

  // Field name: iz
  {
    cdr >> ros_message->iz;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_msgs
size_t get_serialized_size_abb_rapid_msgs__msg__LoadData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LoadData__ros_msg_type * ros_message = static_cast<const _LoadData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mass
  {
    size_t item_size = sizeof(ros_message->mass);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cog

  current_alignment += get_serialized_size_abb_rapid_msgs__msg__Pos(
    &(ros_message->cog), current_alignment);
  // field.name aom

  current_alignment += get_serialized_size_abb_rapid_msgs__msg__Orient(
    &(ros_message->aom), current_alignment);
  // field.name ix
  {
    size_t item_size = sizeof(ros_message->ix);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name iy
  {
    size_t item_size = sizeof(ros_message->iy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name iz
  {
    size_t item_size = sizeof(ros_message->iz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LoadData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_abb_rapid_msgs__msg__LoadData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_abb_rapid_msgs
size_t max_serialized_size_abb_rapid_msgs__msg__LoadData(
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

  // member: mass
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cog
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_msgs__msg__Pos(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: aom
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_abb_rapid_msgs__msg__Orient(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: ix
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: iy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: iz
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
    using DataType = abb_rapid_msgs__msg__LoadData;
    is_plain =
      (
      offsetof(DataType, iz) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LoadData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_abb_rapid_msgs__msg__LoadData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LoadData = {
  "abb_rapid_msgs::msg",
  "LoadData",
  _LoadData__cdr_serialize,
  _LoadData__cdr_deserialize,
  _LoadData__get_serialized_size,
  _LoadData__max_serialized_size
};

static rosidl_message_type_support_t _LoadData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LoadData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, abb_rapid_msgs, msg, LoadData)() {
  return &_LoadData__type_support;
}

#if defined(__cplusplus)
}
#endif
