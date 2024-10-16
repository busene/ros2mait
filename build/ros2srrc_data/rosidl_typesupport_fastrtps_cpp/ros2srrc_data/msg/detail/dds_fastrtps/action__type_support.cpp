// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ros2srrc_data:msg/Action.idl
// generated code does not contain a copyright notice
#include "ros2srrc_data/msg/detail/action__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ros2srrc_data/msg/detail/action__struct.hpp"

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
namespace ros2srrc_data
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2srrc_data::msg::Joints &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2srrc_data::msg::Joints &);
size_t get_serialized_size(
  const ros2srrc_data::msg::Joints &,
  size_t current_alignment);
size_t
max_serialized_size_Joints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2srrc_data

namespace ros2srrc_data
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2srrc_data::msg::Joint &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2srrc_data::msg::Joint &);
size_t get_serialized_size(
  const ros2srrc_data::msg::Joint &,
  size_t current_alignment);
size_t
max_serialized_size_Joint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2srrc_data

namespace ros2srrc_data
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2srrc_data::msg::Xyz &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2srrc_data::msg::Xyz &);
size_t get_serialized_size(
  const ros2srrc_data::msg::Xyz &,
  size_t current_alignment);
size_t
max_serialized_size_Xyz(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2srrc_data

namespace ros2srrc_data
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2srrc_data::msg::Xyzypr &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2srrc_data::msg::Xyzypr &);
size_t get_serialized_size(
  const ros2srrc_data::msg::Xyzypr &,
  size_t current_alignment);
size_t
max_serialized_size_Xyzypr(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2srrc_data

// functions for ros2srrc_data::msg::Xyz already declared above

namespace ros2srrc_data
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2srrc_data::msg::Ypr &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2srrc_data::msg::Ypr &);
size_t get_serialized_size(
  const ros2srrc_data::msg::Ypr &,
  size_t current_alignment);
size_t
max_serialized_size_Ypr(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2srrc_data

// functions for ros2srrc_data::msg::Ypr already declared above

// functions for ros2srrc_data::msg::Xyzypr already declared above

namespace ros2srrc_data
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ros2srrc_data::msg::Linkattacher &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ros2srrc_data::msg::Linkattacher &);
size_t get_serialized_size(
  const ros2srrc_data::msg::Linkattacher &,
  size_t current_alignment);
size_t
max_serialized_size_Linkattacher(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ros2srrc_data

// functions for ros2srrc_data::msg::Linkattacher already declared above


namespace ros2srrc_data
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2srrc_data
cdr_serialize(
  const ros2srrc_data::msg::Action & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: action
  cdr << ros_message.action;
  // Member: speed
  cdr << ros_message.speed;
  // Member: movej
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.movej,
    cdr);
  // Member: mover
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.mover,
    cdr);
  // Member: movel
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.movel,
    cdr);
  // Member: movexyzw
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.movexyzw,
    cdr);
  // Member: movexyz
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.movexyz,
    cdr);
  // Member: moveypr
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.moveypr,
    cdr);
  // Member: moverot
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.moverot,
    cdr);
  // Member: moverp
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.moverp,
    cdr);
  // Member: moveg
  cdr << ros_message.moveg;
  // Member: attach
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.attach,
    cdr);
  // Member: detach
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.detach,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2srrc_data
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ros2srrc_data::msg::Action & ros_message)
{
  // Member: action
  cdr >> ros_message.action;

  // Member: speed
  cdr >> ros_message.speed;

  // Member: movej
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.movej);

  // Member: mover
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.mover);

  // Member: movel
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.movel);

  // Member: movexyzw
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.movexyzw);

  // Member: movexyz
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.movexyz);

  // Member: moveypr
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.moveypr);

  // Member: moverot
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.moverot);

  // Member: moverp
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.moverp);

  // Member: moveg
  cdr >> ros_message.moveg;

  // Member: attach
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.attach);

  // Member: detach
  ros2srrc_data::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.detach);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2srrc_data
get_serialized_size(
  const ros2srrc_data::msg::Action & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.action.size() + 1);
  // Member: speed
  {
    size_t item_size = sizeof(ros_message.speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: movej

  current_alignment +=
    ros2srrc_data::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.movej, current_alignment);
  // Member: mover

  current_alignment +=
    ros2srrc_data::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.mover, current_alignment);
  // Member: movel

  current_alignment +=
    ros2srrc_data::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.movel, current_alignment);
  // Member: movexyzw

  current_alignment +=
    ros2srrc_data::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.movexyzw, current_alignment);
  // Member: movexyz

  current_alignment +=
    ros2srrc_data::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.movexyz, current_alignment);
  // Member: moveypr

  current_alignment +=
    ros2srrc_data::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.moveypr, current_alignment);
  // Member: moverot

  current_alignment +=
    ros2srrc_data::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.moverot, current_alignment);
  // Member: moverp

  current_alignment +=
    ros2srrc_data::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.moverp, current_alignment);
  // Member: moveg
  {
    size_t item_size = sizeof(ros_message.moveg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: attach

  current_alignment +=
    ros2srrc_data::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.attach, current_alignment);
  // Member: detach

  current_alignment +=
    ros2srrc_data::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.detach, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ros2srrc_data
max_serialized_size_Action(
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


  // Member: action
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

  // Member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: movej
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2srrc_data::msg::typesupport_fastrtps_cpp::max_serialized_size_Joints(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: mover
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2srrc_data::msg::typesupport_fastrtps_cpp::max_serialized_size_Joint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: movel
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2srrc_data::msg::typesupport_fastrtps_cpp::max_serialized_size_Xyz(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: movexyzw
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2srrc_data::msg::typesupport_fastrtps_cpp::max_serialized_size_Xyzypr(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: movexyz
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2srrc_data::msg::typesupport_fastrtps_cpp::max_serialized_size_Xyz(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: moveypr
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2srrc_data::msg::typesupport_fastrtps_cpp::max_serialized_size_Ypr(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: moverot
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2srrc_data::msg::typesupport_fastrtps_cpp::max_serialized_size_Ypr(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: moverp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2srrc_data::msg::typesupport_fastrtps_cpp::max_serialized_size_Xyzypr(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: moveg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: attach
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2srrc_data::msg::typesupport_fastrtps_cpp::max_serialized_size_Linkattacher(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: detach
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        ros2srrc_data::msg::typesupport_fastrtps_cpp::max_serialized_size_Linkattacher(
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
    using DataType = ros2srrc_data::msg::Action;
    is_plain =
      (
      offsetof(DataType, detach) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Action__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ros2srrc_data::msg::Action *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Action__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ros2srrc_data::msg::Action *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Action__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ros2srrc_data::msg::Action *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Action__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Action(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Action__callbacks = {
  "ros2srrc_data::msg",
  "Action",
  _Action__cdr_serialize,
  _Action__cdr_deserialize,
  _Action__get_serialized_size,
  _Action__max_serialized_size
};

static rosidl_message_type_support_t _Action__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Action__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ros2srrc_data

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ros2srrc_data
const rosidl_message_type_support_t *
get_message_type_support_handle<ros2srrc_data::msg::Action>()
{
  return &ros2srrc_data::msg::typesupport_fastrtps_cpp::_Action__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ros2srrc_data, msg, Action)() {
  return &ros2srrc_data::msg::typesupport_fastrtps_cpp::_Action__handle;
}

#ifdef __cplusplus
}
#endif
