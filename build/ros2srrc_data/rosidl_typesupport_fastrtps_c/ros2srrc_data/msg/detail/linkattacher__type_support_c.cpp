// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2srrc_data:msg/Linkattacher.idl
// generated code does not contain a copyright notice
#include "ros2srrc_data/msg/detail/linkattacher__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2srrc_data/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2srrc_data/msg/detail/linkattacher__struct.h"
#include "ros2srrc_data/msg/detail/linkattacher__functions.h"
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

#include "rosidl_runtime_c/string.h"  // link1_name, link2_name, model1_name, model2_name
#include "rosidl_runtime_c/string_functions.h"  // link1_name, link2_name, model1_name, model2_name

// forward declare type support functions


using _Linkattacher__ros_msg_type = ros2srrc_data__msg__Linkattacher;

static bool _Linkattacher__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Linkattacher__ros_msg_type * ros_message = static_cast<const _Linkattacher__ros_msg_type *>(untyped_ros_message);
  // Field name: model1_name
  {
    const rosidl_runtime_c__String * str = &ros_message->model1_name;
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

  // Field name: link1_name
  {
    const rosidl_runtime_c__String * str = &ros_message->link1_name;
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

  // Field name: model2_name
  {
    const rosidl_runtime_c__String * str = &ros_message->model2_name;
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

  // Field name: link2_name
  {
    const rosidl_runtime_c__String * str = &ros_message->link2_name;
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

  return true;
}

static bool _Linkattacher__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Linkattacher__ros_msg_type * ros_message = static_cast<_Linkattacher__ros_msg_type *>(untyped_ros_message);
  // Field name: model1_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model1_name.data) {
      rosidl_runtime_c__String__init(&ros_message->model1_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model1_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model1_name'\n");
      return false;
    }
  }

  // Field name: link1_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->link1_name.data) {
      rosidl_runtime_c__String__init(&ros_message->link1_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->link1_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'link1_name'\n");
      return false;
    }
  }

  // Field name: model2_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->model2_name.data) {
      rosidl_runtime_c__String__init(&ros_message->model2_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->model2_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'model2_name'\n");
      return false;
    }
  }

  // Field name: link2_name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->link2_name.data) {
      rosidl_runtime_c__String__init(&ros_message->link2_name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->link2_name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'link2_name'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2srrc_data
size_t get_serialized_size_ros2srrc_data__msg__Linkattacher(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Linkattacher__ros_msg_type * ros_message = static_cast<const _Linkattacher__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name model1_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model1_name.size + 1);
  // field.name link1_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->link1_name.size + 1);
  // field.name model2_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->model2_name.size + 1);
  // field.name link2_name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->link2_name.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _Linkattacher__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2srrc_data__msg__Linkattacher(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2srrc_data
size_t max_serialized_size_ros2srrc_data__msg__Linkattacher(
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

  // member: model1_name
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
  // member: link1_name
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
  // member: model2_name
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
  // member: link2_name
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2srrc_data__msg__Linkattacher;
    is_plain =
      (
      offsetof(DataType, link2_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Linkattacher__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2srrc_data__msg__Linkattacher(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Linkattacher = {
  "ros2srrc_data::msg",
  "Linkattacher",
  _Linkattacher__cdr_serialize,
  _Linkattacher__cdr_deserialize,
  _Linkattacher__get_serialized_size,
  _Linkattacher__max_serialized_size
};

static rosidl_message_type_support_t _Linkattacher__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Linkattacher,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Linkattacher)() {
  return &_Linkattacher__type_support;
}

#if defined(__cplusplus)
}
#endif
