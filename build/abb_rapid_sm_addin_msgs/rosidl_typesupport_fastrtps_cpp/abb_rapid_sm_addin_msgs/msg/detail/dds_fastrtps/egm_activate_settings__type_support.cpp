// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMActivateSettings.idl
// generated code does not contain a copyright notice
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__rosidl_typesupport_fastrtps_cpp.hpp"
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__struct.hpp"

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
namespace abb_rapid_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const abb_rapid_msgs::msg::ToolData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  abb_rapid_msgs::msg::ToolData &);
size_t get_serialized_size(
  const abb_rapid_msgs::msg::ToolData &,
  size_t current_alignment);
size_t
max_serialized_size_ToolData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace abb_rapid_msgs

namespace abb_rapid_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const abb_rapid_msgs::msg::WObjData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  abb_rapid_msgs::msg::WObjData &);
size_t get_serialized_size(
  const abb_rapid_msgs::msg::WObjData &,
  size_t current_alignment);
size_t
max_serialized_size_WObjData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace abb_rapid_msgs

namespace abb_rapid_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const abb_rapid_msgs::msg::Pose &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  abb_rapid_msgs::msg::Pose &);
size_t get_serialized_size(
  const abb_rapid_msgs::msg::Pose &,
  size_t current_alignment);
size_t
max_serialized_size_Pose(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace abb_rapid_msgs

// functions for abb_rapid_msgs::msg::Pose already declared above


namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
cdr_serialize(
  const abb_rapid_sm_addin_msgs::msg::EGMActivateSettings & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: tool
  abb_rapid_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tool,
    cdr);
  // Member: wobj
  abb_rapid_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.wobj,
    cdr);
  // Member: correction_frame
  abb_rapid_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.correction_frame,
    cdr);
  // Member: sensor_frame
  abb_rapid_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.sensor_frame,
    cdr);
  // Member: cond_min_max
  cdr << ros_message.cond_min_max;
  // Member: lp_filter
  cdr << ros_message.lp_filter;
  // Member: sample_rate
  cdr << ros_message.sample_rate;
  // Member: max_speed_deviation
  cdr << ros_message.max_speed_deviation;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  abb_rapid_sm_addin_msgs::msg::EGMActivateSettings & ros_message)
{
  // Member: tool
  abb_rapid_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tool);

  // Member: wobj
  abb_rapid_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.wobj);

  // Member: correction_frame
  abb_rapid_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.correction_frame);

  // Member: sensor_frame
  abb_rapid_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.sensor_frame);

  // Member: cond_min_max
  cdr >> ros_message.cond_min_max;

  // Member: lp_filter
  cdr >> ros_message.lp_filter;

  // Member: sample_rate
  cdr >> ros_message.sample_rate;

  // Member: max_speed_deviation
  cdr >> ros_message.max_speed_deviation;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
get_serialized_size(
  const abb_rapid_sm_addin_msgs::msg::EGMActivateSettings & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: tool

  current_alignment +=
    abb_rapid_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tool, current_alignment);
  // Member: wobj

  current_alignment +=
    abb_rapid_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.wobj, current_alignment);
  // Member: correction_frame

  current_alignment +=
    abb_rapid_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.correction_frame, current_alignment);
  // Member: sensor_frame

  current_alignment +=
    abb_rapid_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.sensor_frame, current_alignment);
  // Member: cond_min_max
  {
    size_t item_size = sizeof(ros_message.cond_min_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lp_filter
  {
    size_t item_size = sizeof(ros_message.lp_filter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sample_rate
  {
    size_t item_size = sizeof(ros_message.sample_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_speed_deviation
  {
    size_t item_size = sizeof(ros_message.max_speed_deviation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_abb_rapid_sm_addin_msgs
max_serialized_size_EGMActivateSettings(
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


  // Member: tool
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        abb_rapid_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ToolData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: wobj
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        abb_rapid_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_WObjData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: correction_frame
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        abb_rapid_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: sensor_frame
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        abb_rapid_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Pose(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cond_min_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lp_filter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sample_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_speed_deviation
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
    using DataType = abb_rapid_sm_addin_msgs::msg::EGMActivateSettings;
    is_plain =
      (
      offsetof(DataType, max_speed_deviation) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EGMActivateSettings__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const abb_rapid_sm_addin_msgs::msg::EGMActivateSettings *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EGMActivateSettings__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EGMActivateSettings__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const abb_rapid_sm_addin_msgs::msg::EGMActivateSettings *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EGMActivateSettings__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EGMActivateSettings(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EGMActivateSettings__callbacks = {
  "abb_rapid_sm_addin_msgs::msg",
  "EGMActivateSettings",
  _EGMActivateSettings__cdr_serialize,
  _EGMActivateSettings__cdr_deserialize,
  _EGMActivateSettings__get_serialized_size,
  _EGMActivateSettings__max_serialized_size
};

static rosidl_message_type_support_t _EGMActivateSettings__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EGMActivateSettings__callbacks,
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
get_message_type_support_handle<abb_rapid_sm_addin_msgs::msg::EGMActivateSettings>()
{
  return &abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::_EGMActivateSettings__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_sm_addin_msgs, msg, EGMActivateSettings)() {
  return &abb_rapid_sm_addin_msgs::msg::typesupport_fastrtps_cpp::_EGMActivateSettings__handle;
}

#ifdef __cplusplus
}
#endif
