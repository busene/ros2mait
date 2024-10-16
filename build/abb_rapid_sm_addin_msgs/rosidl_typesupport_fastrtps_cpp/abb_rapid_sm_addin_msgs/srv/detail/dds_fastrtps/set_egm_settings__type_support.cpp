// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from abb_rapid_sm_addin_msgs:srv/SetEGMSettings.idl
// generated code does not contain a copyright notice
#include "abb_rapid_sm_addin_msgs/srv/detail/set_egm_settings__rosidl_typesupport_fastrtps_cpp.hpp"
#include "abb_rapid_sm_addin_msgs/srv/detail/set_egm_settings__struct.hpp"

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
namespace abb_rapid_sm_addin_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const abb_rapid_sm_addin_msgs::msg::EGMSettings &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  abb_rapid_sm_addin_msgs::msg::EGMSettings &);
size_t get_serialized_size(
  const abb_rapid_sm_addin_msgs::msg::EGMSettings &,
  size_t current_alignment);
size_t
max_serialized_size_EGMSettings(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace abb_rapid_sm_addin_msgs


namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
cdr_serialize(
  const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: task
  cdr << ros_message.task;
  // Member: settings
  abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.settings,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request & ros_message)
{
  // Member: task
  cdr >> ros_message.task;

  // Member: settings
  abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.settings);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
get_serialized_size(
  const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: task
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.task.size() + 1);
  // Member: settings

  current_alignment +=
    abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.settings, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
max_serialized_size_SetEGMSettings_Request(
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


  // Member: task
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

  // Member: settings
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_EGMSettings(
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
    using DataType = abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request;
    is_plain =
      (
      offsetof(DataType, settings) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetEGMSettings_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetEGMSettings_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetEGMSettings_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetEGMSettings_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetEGMSettings_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetEGMSettings_Request__callbacks = {
  "abb_rapid_sm_addin_msgs::srv",
  "SetEGMSettings_Request",
  _SetEGMSettings_Request__cdr_serialize,
  _SetEGMSettings_Request__cdr_deserialize,
  _SetEGMSettings_Request__get_serialized_size,
  _SetEGMSettings_Request__max_serialized_size
};

static rosidl_message_type_support_t _SetEGMSettings_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetEGMSettings_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Request>()
{
  return &abb_rapid_sm_addin_msgs::srv::typesupport_fastrtps_cpp::_SetEGMSettings_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_sm_addin_msgs, srv, SetEGMSettings_Request)() {
  return &abb_rapid_sm_addin_msgs::srv::typesupport_fastrtps_cpp::_SetEGMSettings_Request__handle;
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

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
cdr_serialize(
  const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: result_code
  cdr << ros_message.result_code;
  // Member: message
  cdr << ros_message.message;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response & ros_message)
{
  // Member: result_code
  cdr >> ros_message.result_code;

  // Member: message
  cdr >> ros_message.message;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
get_serialized_size(
  const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

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
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
max_serialized_size_SetEGMSettings_Response(
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
    using DataType = abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response;
    is_plain =
      (
      offsetof(DataType, message) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _SetEGMSettings_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SetEGMSettings_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SetEGMSettings_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SetEGMSettings_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SetEGMSettings_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SetEGMSettings_Response__callbacks = {
  "abb_rapid_sm_addin_msgs::srv",
  "SetEGMSettings_Response",
  _SetEGMSettings_Response__cdr_serialize,
  _SetEGMSettings_Response__cdr_deserialize,
  _SetEGMSettings_Response__get_serialized_size,
  _SetEGMSettings_Response__max_serialized_size
};

static rosidl_message_type_support_t _SetEGMSettings_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetEGMSettings_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_rapid_sm_addin_msgs::srv::SetEGMSettings_Response>()
{
  return &abb_rapid_sm_addin_msgs::srv::typesupport_fastrtps_cpp::_SetEGMSettings_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_sm_addin_msgs, srv, SetEGMSettings_Response)() {
  return &abb_rapid_sm_addin_msgs::srv::typesupport_fastrtps_cpp::_SetEGMSettings_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _SetEGMSettings__callbacks = {
  "abb_rapid_sm_addin_msgs::srv",
  "SetEGMSettings",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_sm_addin_msgs, srv, SetEGMSettings_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_sm_addin_msgs, srv, SetEGMSettings_Response)(),
};

static rosidl_service_type_support_t _SetEGMSettings__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SetEGMSettings__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abb_rapid_sm_addin_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<abb_rapid_sm_addin_msgs::srv::SetEGMSettings>()
{
  return &abb_rapid_sm_addin_msgs::srv::typesupport_fastrtps_cpp::_SetEGMSettings__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_sm_addin_msgs, srv, SetEGMSettings)() {
  return &abb_rapid_sm_addin_msgs::srv::typesupport_fastrtps_cpp::_SetEGMSettings__handle;
}

#ifdef __cplusplus
}
#endif