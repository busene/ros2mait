// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from linkattacher_msgs:srv/DetachLink.idl
// generated code does not contain a copyright notice
#include "linkattacher_msgs/srv/detail/detach_link__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "linkattacher_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "linkattacher_msgs/srv/detail/detach_link__struct.h"
#include "linkattacher_msgs/srv/detail/detach_link__functions.h"
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


using _DetachLink_Request__ros_msg_type = linkattacher_msgs__srv__DetachLink_Request;

static bool _DetachLink_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DetachLink_Request__ros_msg_type * ros_message = static_cast<const _DetachLink_Request__ros_msg_type *>(untyped_ros_message);
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

static bool _DetachLink_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DetachLink_Request__ros_msg_type * ros_message = static_cast<_DetachLink_Request__ros_msg_type *>(untyped_ros_message);
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_linkattacher_msgs
size_t get_serialized_size_linkattacher_msgs__srv__DetachLink_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetachLink_Request__ros_msg_type * ros_message = static_cast<const _DetachLink_Request__ros_msg_type *>(untyped_ros_message);
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

static uint32_t _DetachLink_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_linkattacher_msgs__srv__DetachLink_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_linkattacher_msgs
size_t max_serialized_size_linkattacher_msgs__srv__DetachLink_Request(
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
    using DataType = linkattacher_msgs__srv__DetachLink_Request;
    is_plain =
      (
      offsetof(DataType, link2_name) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DetachLink_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_linkattacher_msgs__srv__DetachLink_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DetachLink_Request = {
  "linkattacher_msgs::srv",
  "DetachLink_Request",
  _DetachLink_Request__cdr_serialize,
  _DetachLink_Request__cdr_deserialize,
  _DetachLink_Request__get_serialized_size,
  _DetachLink_Request__max_serialized_size
};

static rosidl_message_type_support_t _DetachLink_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetachLink_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, linkattacher_msgs, srv, DetachLink_Request)() {
  return &_DetachLink_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "linkattacher_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "linkattacher_msgs/srv/detail/detach_link__struct.h"
// already included above
// #include "linkattacher_msgs/srv/detail/detach_link__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// already included above
// #include "rosidl_runtime_c/string.h"  // message
// already included above
// #include "rosidl_runtime_c/string_functions.h"  // message

// forward declare type support functions


using _DetachLink_Response__ros_msg_type = linkattacher_msgs__srv__DetachLink_Response;

static bool _DetachLink_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DetachLink_Response__ros_msg_type * ros_message = static_cast<const _DetachLink_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  // Field name: message
  {
    const rosidl_runtime_c__String * str = &ros_message->message;
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

static bool _DetachLink_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DetachLink_Response__ros_msg_type * ros_message = static_cast<_DetachLink_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  // Field name: message
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->message.data) {
      rosidl_runtime_c__String__init(&ros_message->message);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->message,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'message'\n");
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_linkattacher_msgs
size_t get_serialized_size_linkattacher_msgs__srv__DetachLink_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DetachLink_Response__ros_msg_type * ros_message = static_cast<const _DetachLink_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->message.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _DetachLink_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_linkattacher_msgs__srv__DetachLink_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_linkattacher_msgs
size_t max_serialized_size_linkattacher_msgs__srv__DetachLink_Response(
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

  // member: success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: message
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
    using DataType = linkattacher_msgs__srv__DetachLink_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DetachLink_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_linkattacher_msgs__srv__DetachLink_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DetachLink_Response = {
  "linkattacher_msgs::srv",
  "DetachLink_Response",
  _DetachLink_Response__cdr_serialize,
  _DetachLink_Response__cdr_deserialize,
  _DetachLink_Response__get_serialized_size,
  _DetachLink_Response__max_serialized_size
};

static rosidl_message_type_support_t _DetachLink_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DetachLink_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, linkattacher_msgs, srv, DetachLink_Response)() {
  return &_DetachLink_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "linkattacher_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "linkattacher_msgs/srv/detach_link.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t DetachLink__callbacks = {
  "linkattacher_msgs::srv",
  "DetachLink",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, linkattacher_msgs, srv, DetachLink_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, linkattacher_msgs, srv, DetachLink_Response)(),
};

static rosidl_service_type_support_t DetachLink__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &DetachLink__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, linkattacher_msgs, srv, DetachLink)() {
  return &DetachLink__handle;
}

#if defined(__cplusplus)
}
#endif
