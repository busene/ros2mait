// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from abb_robot_msgs:srv/GetRAPIDNum.idl
// generated code does not contain a copyright notice
#include "abb_robot_msgs/srv/detail/get_rapid_num__rosidl_typesupport_fastrtps_cpp.hpp"
#include "abb_robot_msgs/srv/detail/get_rapid_num__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace abb_robot_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const abb_robot_msgs::msg::RAPIDSymbolPath &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  abb_robot_msgs::msg::RAPIDSymbolPath &);
size_t get_serialized_size(
  const abb_robot_msgs::msg::RAPIDSymbolPath &,
  size_t current_alignment);
size_t
max_serialized_size_RAPIDSymbolPath(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace abb_robot_msgs


namespace abb_robot_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_robot_msgs
cdr_serialize(
  const abb_robot_msgs::srv::GetRAPIDNum_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: path
  abb_robot_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.path,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_robot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abb_robot_msgs::srv::GetRAPIDNum_Request & ros_message)
{
  // Member: path
  abb_robot_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.path);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_robot_msgs
get_serialized_size(
  const abb_robot_msgs::srv::GetRAPIDNum_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: path

  current_alignment +=
    abb_robot_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.path, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_robot_msgs
max_serialized_size_GetRAPIDNum_Request(
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


  // Member: path
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        abb_robot_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_RAPIDSymbolPath(
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
    using DataType = abb_robot_msgs::srv::GetRAPIDNum_Request;
    is_plain =
      (
      offsetof(DataType, path) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetRAPIDNum_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const abb_robot_msgs::srv::GetRAPIDNum_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetRAPIDNum_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abb_robot_msgs::srv::GetRAPIDNum_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetRAPIDNum_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abb_robot_msgs::srv::GetRAPIDNum_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetRAPIDNum_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetRAPIDNum_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetRAPIDNum_Request__callbacks = {
  "abb_robot_msgs::srv",
  "GetRAPIDNum_Request",
  _GetRAPIDNum_Request__cdr_serialize,
  _GetRAPIDNum_Request__cdr_deserialize,
  _GetRAPIDNum_Request__get_serialized_size,
  _GetRAPIDNum_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetRAPIDNum_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetRAPIDNum_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace abb_robot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abb_robot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_robot_msgs::srv::GetRAPIDNum_Request>()
{
  return &abb_robot_msgs::srv::typesupport_fastrtps_cpp::_GetRAPIDNum_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_robot_msgs, srv, GetRAPIDNum_Request)() {
  return &abb_robot_msgs::srv::typesupport_fastrtps_cpp::_GetRAPIDNum_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace abb_robot_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_robot_msgs
cdr_serialize(
  const abb_robot_msgs::srv::GetRAPIDNum_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: value
  cdr << ros_message.value;
  // Member: result_code
  cdr << ros_message.result_code;
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_robot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abb_robot_msgs::srv::GetRAPIDNum_Response & ros_message)
{
  // Member: value
  cdr >> ros_message.value;

  // Member: result_code
  cdr >> ros_message.result_code;

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_robot_msgs
get_serialized_size(
  const abb_robot_msgs::srv::GetRAPIDNum_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: value
  {
    size_t item_size = sizeof(ros_message.value);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: result_code
  {
    size_t item_size = sizeof(ros_message.result_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: message
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.message.size() + 1);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_robot_msgs
max_serialized_size_GetRAPIDNum_Response(
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


  // Member: value
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: result_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: message
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
    using DataType = abb_robot_msgs::srv::GetRAPIDNum_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GetRAPIDNum_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const abb_robot_msgs::srv::GetRAPIDNum_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetRAPIDNum_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abb_robot_msgs::srv::GetRAPIDNum_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetRAPIDNum_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abb_robot_msgs::srv::GetRAPIDNum_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetRAPIDNum_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GetRAPIDNum_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GetRAPIDNum_Response__callbacks = {
  "abb_robot_msgs::srv",
  "GetRAPIDNum_Response",
  _GetRAPIDNum_Response__cdr_serialize,
  _GetRAPIDNum_Response__cdr_deserialize,
  _GetRAPIDNum_Response__get_serialized_size,
  _GetRAPIDNum_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetRAPIDNum_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetRAPIDNum_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace abb_robot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abb_robot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_robot_msgs::srv::GetRAPIDNum_Response>()
{
  return &abb_robot_msgs::srv::typesupport_fastrtps_cpp::_GetRAPIDNum_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_robot_msgs, srv, GetRAPIDNum_Response)() {
  return &abb_robot_msgs::srv::typesupport_fastrtps_cpp::_GetRAPIDNum_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace abb_robot_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetRAPIDNum__callbacks = {
  "abb_robot_msgs::srv",
  "GetRAPIDNum",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_robot_msgs, srv, GetRAPIDNum_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_robot_msgs, srv, GetRAPIDNum_Response)(),
};

static rosidl_service_type_support_t _GetRAPIDNum__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetRAPIDNum__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace abb_robot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abb_robot_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<abb_robot_msgs::srv::GetRAPIDNum>()
{
  return &abb_robot_msgs::srv::typesupport_fastrtps_cpp::_GetRAPIDNum__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_robot_msgs, srv, GetRAPIDNum)() {
  return &abb_robot_msgs::srv::typesupport_fastrtps_cpp::_GetRAPIDNum__handle;
}

#ifdef __cplusplus
}
#endif
