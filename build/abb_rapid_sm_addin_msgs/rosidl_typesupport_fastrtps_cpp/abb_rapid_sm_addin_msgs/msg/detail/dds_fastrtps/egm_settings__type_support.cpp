// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSettings.idl
// generated code does not contain a copyright notice
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__rosidl_typesupport_fastrtps_cpp.hpp"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__struct.hpp"

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
  const abb_rapid_sm_addin_msgs::msg::EGMSetupSettings &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  abb_rapid_sm_addin_msgs::msg::EGMSetupSettings &);
size_t get_serialized_size(
  const abb_rapid_sm_addin_msgs::msg::EGMSetupSettings &,
  size_t current_alignment);
size_t
max_serialized_size_EGMSetupSettings(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace abb_rapid_sm_addin_msgs

namespace abb_rapid_sm_addin_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const abb_rapid_sm_addin_msgs::msg::EGMActivateSettings &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  abb_rapid_sm_addin_msgs::msg::EGMActivateSettings &);
size_t get_serialized_size(
  const abb_rapid_sm_addin_msgs::msg::EGMActivateSettings &,
  size_t current_alignment);
size_t
max_serialized_size_EGMActivateSettings(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace abb_rapid_sm_addin_msgs

namespace abb_rapid_sm_addin_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const abb_rapid_sm_addin_msgs::msg::EGMRunSettings &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  abb_rapid_sm_addin_msgs::msg::EGMRunSettings &);
size_t get_serialized_size(
  const abb_rapid_sm_addin_msgs::msg::EGMRunSettings &,
  size_t current_alignment);
size_t
max_serialized_size_EGMRunSettings(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace abb_rapid_sm_addin_msgs

namespace abb_rapid_sm_addin_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const abb_rapid_sm_addin_msgs::msg::EGMStopSettings &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  abb_rapid_sm_addin_msgs::msg::EGMStopSettings &);
size_t get_serialized_size(
  const abb_rapid_sm_addin_msgs::msg::EGMStopSettings &,
  size_t current_alignment);
size_t
max_serialized_size_EGMStopSettings(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace abb_rapid_sm_addin_msgs


namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
cdr_serialize(
  const abb_rapid_sm_addin_msgs::msg::EGMSettings & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: allow_egm_motions
  cdr << (ros_message.allow_egm_motions ? true : false);
  // Member: use_presync
  cdr << (ros_message.use_presync ? true : false);
  // Member: setup_uc
  abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.setup_uc,
    cdr);
  // Member: activate
  abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.activate,
    cdr);
  // Member: run
  abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.run,
    cdr);
  // Member: stop
  abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stop,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abb_rapid_sm_addin_msgs::msg::EGMSettings & ros_message)
{
  // Member: allow_egm_motions
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.allow_egm_motions = tmp ? true : false;
  }

  // Member: use_presync
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_presync = tmp ? true : false;
  }

  // Member: setup_uc
  abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.setup_uc);

  // Member: activate
  abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.activate);

  // Member: run
  abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.run);

  // Member: stop
  abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stop);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
get_serialized_size(
  const abb_rapid_sm_addin_msgs::msg::EGMSettings & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: allow_egm_motions
  {
    size_t item_size = sizeof(ros_message.allow_egm_motions);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_presync
  {
    size_t item_size = sizeof(ros_message.use_presync);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: setup_uc

  current_alignment +=
    abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.setup_uc, current_alignment);
  // Member: activate

  current_alignment +=
    abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.activate, current_alignment);
  // Member: run

  current_alignment +=
    abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.run, current_alignment);
  // Member: stop

  current_alignment +=
    abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stop, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
max_serialized_size_EGMSettings(
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


  // Member: allow_egm_motions
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: use_presync
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: setup_uc
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_EGMSetupSettings(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: activate
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_EGMActivateSettings(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: run
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_EGMRunSettings(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: stop
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_EGMStopSettings(
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
    using DataType = abb_rapid_sm_addin_msgs::msg::EGMSettings;
    is_plain =
      (
      offsetof(DataType, stop) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EGMSettings__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const abb_rapid_sm_addin_msgs::msg::EGMSettings *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EGMSettings__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abb_rapid_sm_addin_msgs::msg::EGMSettings *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EGMSettings__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abb_rapid_sm_addin_msgs::msg::EGMSettings *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EGMSettings__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EGMSettings(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EGMSettings__callbacks = {
  "abb_rapid_sm_addin_msgs::msg",
  "EGMSettings",
  _EGMSettings__cdr_serialize,
  _EGMSettings__cdr_deserialize,
  _EGMSettings__get_serialized_size,
  _EGMSettings__max_serialized_size
};

static rosidl_message_type_support_t _EGMSettings__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EGMSettings__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace abb_rapid_sm_addin_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_abb_rapid_sm_addin_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_rapid_sm_addin_msgs::msg::EGMSettings>()
{
  return &abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::_EGMSettings__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_sm_addin_msgs, msg, EGMSettings)() {
  return &abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::_EGMSettings__handle;
}

#ifdef __cplusplus
}
#endif
