// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros2srrc_data:msg/Action.idl
// generated code does not contain a copyright notice
#include "ros2srrc_data/msg/detail/action__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros2srrc_data/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros2srrc_data/msg/detail/action__struct.h"
#include "ros2srrc_data/msg/detail/action__functions.h"
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

#include "ros2srrc_data/msg/detail/joint__functions.h"  // mover
#include "ros2srrc_data/msg/detail/joints__functions.h"  // movej
#include "ros2srrc_data/msg/detail/linkattacher__functions.h"  // attach, detach
#include "ros2srrc_data/msg/detail/xyz__functions.h"  // movel, movexyz
#include "ros2srrc_data/msg/detail/xyzypr__functions.h"  // moverp, movexyzw
#include "ros2srrc_data/msg/detail/ypr__functions.h"  // moverot, moveypr
#include "rosidl_runtime_c/string.h"  // action
#include "rosidl_runtime_c/string_functions.h"  // action

// forward declare type support functions
size_t get_serialized_size_ros2srrc_data__msg__Joint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2srrc_data__msg__Joint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Joint)();
size_t get_serialized_size_ros2srrc_data__msg__Joints(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2srrc_data__msg__Joints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Joints)();
size_t get_serialized_size_ros2srrc_data__msg__Linkattacher(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2srrc_data__msg__Linkattacher(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Linkattacher)();
size_t get_serialized_size_ros2srrc_data__msg__Xyz(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2srrc_data__msg__Xyz(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Xyz)();
size_t get_serialized_size_ros2srrc_data__msg__Xyzypr(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2srrc_data__msg__Xyzypr(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Xyzypr)();
size_t get_serialized_size_ros2srrc_data__msg__Ypr(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros2srrc_data__msg__Ypr(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Ypr)();


using _Action__ros_msg_type = ros2srrc_data__msg__Action;

static bool _Action__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Action__ros_msg_type * ros_message = static_cast<const _Action__ros_msg_type *>(untyped_ros_message);
  // Field name: action
  {
    const rosidl_runtime_c__String * str = &ros_message->action;
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

  // Field name: speed
  {
    cdr << ros_message->speed;
  }

  // Field name: movej
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Joints
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->movej, cdr))
    {
      return false;
    }
  }

  // Field name: mover
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Joint
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->mover, cdr))
    {
      return false;
    }
  }

  // Field name: movel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Xyz
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->movel, cdr))
    {
      return false;
    }
  }

  // Field name: movexyzw
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Xyzypr
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->movexyzw, cdr))
    {
      return false;
    }
  }

  // Field name: movexyz
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Xyz
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->movexyz, cdr))
    {
      return false;
    }
  }

  // Field name: moveypr
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Ypr
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->moveypr, cdr))
    {
      return false;
    }
  }

  // Field name: moverot
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Ypr
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->moverot, cdr))
    {
      return false;
    }
  }

  // Field name: moverp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Xyzypr
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->moverp, cdr))
    {
      return false;
    }
  }

  // Field name: moveg
  {
    cdr << ros_message->moveg;
  }

  // Field name: attach
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Linkattacher
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->attach, cdr))
    {
      return false;
    }
  }

  // Field name: detach
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Linkattacher
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->detach, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _Action__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Action__ros_msg_type * ros_message = static_cast<_Action__ros_msg_type *>(untyped_ros_message);
  // Field name: action
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->action.data) {
      rosidl_runtime_c__String__init(&ros_message->action);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->action,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'action'\n");
      return false;
    }
  }

  // Field name: speed
  {
    cdr >> ros_message->speed;
  }

  // Field name: movej
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Joints
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->movej))
    {
      return false;
    }
  }

  // Field name: mover
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Joint
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->mover))
    {
      return false;
    }
  }

  // Field name: movel
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Xyz
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->movel))
    {
      return false;
    }
  }

  // Field name: movexyzw
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Xyzypr
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->movexyzw))
    {
      return false;
    }
  }

  // Field name: movexyz
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Xyz
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->movexyz))
    {
      return false;
    }
  }

  // Field name: moveypr
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Ypr
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->moveypr))
    {
      return false;
    }
  }

  // Field name: moverot
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Ypr
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->moverot))
    {
      return false;
    }
  }

  // Field name: moverp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Xyzypr
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->moverp))
    {
      return false;
    }
  }

  // Field name: moveg
  {
    cdr >> ros_message->moveg;
  }

  // Field name: attach
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Linkattacher
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->attach))
    {
      return false;
    }
  }

  // Field name: detach
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Linkattacher
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->detach))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2srrc_data
size_t get_serialized_size_ros2srrc_data__msg__Action(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Action__ros_msg_type * ros_message = static_cast<const _Action__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name action
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->action.size + 1);
  // field.name speed
  {
    size_t item_size = sizeof(ros_message->speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name movej

  current_alignment += get_serialized_size_ros2srrc_data__msg__Joints(
    &(ros_message->movej), current_alignment);
  // field.name mover

  current_alignment += get_serialized_size_ros2srrc_data__msg__Joint(
    &(ros_message->mover), current_alignment);
  // field.name movel

  current_alignment += get_serialized_size_ros2srrc_data__msg__Xyz(
    &(ros_message->movel), current_alignment);
  // field.name movexyzw

  current_alignment += get_serialized_size_ros2srrc_data__msg__Xyzypr(
    &(ros_message->movexyzw), current_alignment);
  // field.name movexyz

  current_alignment += get_serialized_size_ros2srrc_data__msg__Xyz(
    &(ros_message->movexyz), current_alignment);
  // field.name moveypr

  current_alignment += get_serialized_size_ros2srrc_data__msg__Ypr(
    &(ros_message->moveypr), current_alignment);
  // field.name moverot

  current_alignment += get_serialized_size_ros2srrc_data__msg__Ypr(
    &(ros_message->moverot), current_alignment);
  // field.name moverp

  current_alignment += get_serialized_size_ros2srrc_data__msg__Xyzypr(
    &(ros_message->moverp), current_alignment);
  // field.name moveg
  {
    size_t item_size = sizeof(ros_message->moveg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attach

  current_alignment += get_serialized_size_ros2srrc_data__msg__Linkattacher(
    &(ros_message->attach), current_alignment);
  // field.name detach

  current_alignment += get_serialized_size_ros2srrc_data__msg__Linkattacher(
    &(ros_message->detach), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _Action__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros2srrc_data__msg__Action(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros2srrc_data
size_t max_serialized_size_ros2srrc_data__msg__Action(
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

  // member: action
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
  // member: speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: movej
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2srrc_data__msg__Joints(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: mover
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2srrc_data__msg__Joint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: movel
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2srrc_data__msg__Xyz(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: movexyzw
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2srrc_data__msg__Xyzypr(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: movexyz
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2srrc_data__msg__Xyz(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: moveypr
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2srrc_data__msg__Ypr(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: moverot
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2srrc_data__msg__Ypr(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: moverp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2srrc_data__msg__Xyzypr(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: moveg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: attach
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2srrc_data__msg__Linkattacher(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: detach
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros2srrc_data__msg__Linkattacher(
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
    using DataType = ros2srrc_data__msg__Action;
    is_plain =
      (
      offsetof(DataType, detach) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Action__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros2srrc_data__msg__Action(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Action = {
  "ros2srrc_data::msg",
  "Action",
  _Action__cdr_serialize,
  _Action__cdr_deserialize,
  _Action__get_serialized_size,
  _Action__max_serialized_size
};

static rosidl_message_type_support_t _Action__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Action,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros2srrc_data, msg, Action)() {
  return &_Action__type_support;
}

#if defined(__cplusplus)
}
#endif
