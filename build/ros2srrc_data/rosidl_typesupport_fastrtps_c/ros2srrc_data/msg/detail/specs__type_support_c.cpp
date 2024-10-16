// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2srrc_data:msg/Specs.idl
// generated code does not contain a copyright notice
#include "ros2srrc_data/msg/detail/specs__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2srrc_data/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2srrc_data/msg/detail/specs__struct.h"
#include "ros2srrc_data/msg/detail/specs__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // ee_vector, robot_max, robot_min
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // ee_vector, robot_max, robot_min

// forward declare type support functions


using _Specs__ros_msg_type = ros2srrc_data__msg__Specs;

static bool _Specs__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Specs__ros_msg_type * ros_message = static_cast<const _Specs__ros_msg_type *>(untyped_ros_message);
  // Field name: ee_max
  {
    cdr << ros_message->ee_max;
  }

  // Field name: ee_min
  {
    cdr << ros_message->ee_min;
  }

  // Field name: ee_vector
  {
    size_t size = ros_message->ee_vector.size;
    auto array_ptr = ros_message->ee_vector.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: robot_max
  {
    size_t size = ros_message->robot_max.size;
    auto array_ptr = ros_message->robot_max.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: robot_min
  {
    size_t size = ros_message->robot_min.size;
    auto array_ptr = ros_message->robot_min.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _Specs__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Specs__ros_msg_type * ros_message = static_cast<_Specs__ros_msg_type *>(untyped_ros_message);
  // Field name: ee_max
  {
    cdr >> ros_message->ee_max;
  }

  // Field name: ee_min
  {
    cdr >> ros_message->ee_min;
  }

  // Field name: ee_vector
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->ee_vector.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->ee_vector);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->ee_vector, size)) {
      fprintf(stderr, "failed to create array for field 'ee_vector'");
      return false;
    }
    auto array_ptr = ros_message->ee_vector.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: robot_max
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->robot_max.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->robot_max);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->robot_max, size)) {
      fprintf(stderr, "failed to create array for field 'robot_max'");
      return false;
    }
    auto array_ptr = ros_message->robot_max.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: robot_min
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->robot_min.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->robot_min);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->robot_min, size)) {
      fprintf(stderr, "failed to create array for field 'robot_min'");
      return false;
    }
    auto array_ptr = ros_message->robot_min.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2srrc_data
size_t get_serialized_size_ros2srrc_data__msg__Specs(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Specs__ros_msg_type * ros_message = static_cast<const _Specs__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name ee_max
  {
    size_t item_size = sizeof(ros_message->ee_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ee_min
  {
    size_t item_size = sizeof(ros_message->ee_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ee_vector
  {
    size_t array_size = ros_message->ee_vector.size;
    auto array_ptr = ros_message->ee_vector.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_max
  {
    size_t array_size = ros_message->robot_max.size;
    auto array_ptr = ros_message->robot_max.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name robot_min
  {
    size_t array_size = ros_message->robot_min.size;
    auto array_ptr = ros_message->robot_min.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Specs__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2srrc_data__msg__Specs(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2srrc_data
size_t max_serialized_size_ros2srrc_data__msg__Specs(
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

  // member: ee_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ee_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ee_vector
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: robot_max
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: robot_min
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros2srrc_data__msg__Specs;
    is_plain =
      (
      offsetof(DataType, robot_min) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Specs__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2srrc_data__msg__Specs(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Specs = {
  "ros2srrc_data::msg",
  "Specs",
  _Specs__cdr_serialize,
  _Specs__cdr_deserialize,
  _Specs__get_serialized_size,
  _Specs__max_serialized_size
};

static rosidl_message_type_support_t _Specs__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Specs,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Specs)() {
  return &_Specs__type_support;
}

#if defined(__cplusplus)
}
#endif
