// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros2srrc_data:msg/Action.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros2srrc_data/msg/detail/action__rosidl_typesupport_introspection_c.h"
#include "ros2srrc_data/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros2srrc_data/msg/detail/action__functions.h"
#include "ros2srrc_data/msg/detail/action__struct.h"


// Include directives for member types
// Member `action`
#include "rosidl_runtime_c/string_functions.h"
// Member `movej`
#include "ros2srrc_data/msg/joints.h"
// Member `movej`
#include "ros2srrc_data/msg/detail/joints__rosidl_typesupport_introspection_c.h"
// Member `mover`
#include "ros2srrc_data/msg/joint.h"
// Member `mover`
#include "ros2srrc_data/msg/detail/joint__rosidl_typesupport_introspection_c.h"
// Member `movel`
// Member `movexyz`
#include "ros2srrc_data/msg/xyz.h"
// Member `movel`
// Member `movexyz`
#include "ros2srrc_data/msg/detail/xyz__rosidl_typesupport_introspection_c.h"
// Member `movexyzw`
// Member `moverp`
#include "ros2srrc_data/msg/xyzypr.h"
// Member `movexyzw`
// Member `moverp`
#include "ros2srrc_data/msg/detail/xyzypr__rosidl_typesupport_introspection_c.h"
// Member `moveypr`
// Member `moverot`
#include "ros2srrc_data/msg/ypr.h"
// Member `moveypr`
// Member `moverot`
#include "ros2srrc_data/msg/detail/ypr__rosidl_typesupport_introspection_c.h"
// Member `attach`
// Member `detach`
#include "ros2srrc_data/msg/linkattacher.h"
// Member `attach`
// Member `detach`
#include "ros2srrc_data/msg/detail/linkattacher__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros2srrc_data__msg__Action__init(message_memory);
}

void ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_fini_function(void * message_memory)
{
  ros2srrc_data__msg__Action__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array[13] = {
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Action, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Action, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "movej",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Action, movej),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mover",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Action, mover),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "movel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Action, movel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "movexyzw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Action, movexyzw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "movexyz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Action, movexyz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moveypr",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Action, moveypr),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moverot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Action, moverot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moverp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Action, moverp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moveg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Action, moveg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Action, attach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "detach",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros2srrc_data__msg__Action, detach),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_members = {
  "ros2srrc_data__msg",  // message namespace
  "Action",  // message name
  13,  // number of fields
  sizeof(ros2srrc_data__msg__Action),
  ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array,  // message members
  ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_init_function,  // function to initialize message memory (memory has to be allocated)
  ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_type_support_handle = {
  0,
  &ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros2srrc_data
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2srrc_data, msg, Action)() {
  ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2srrc_data, msg, Joints)();
  ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2srrc_data, msg, Joint)();
  ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2srrc_data, msg, Xyz)();
  ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2srrc_data, msg, Xyzypr)();
  ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2srrc_data, msg, Xyz)();
  ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2srrc_data, msg, Ypr)();
  ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2srrc_data, msg, Ypr)();
  ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2srrc_data, msg, Xyzypr)();
  ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2srrc_data, msg, Linkattacher)();
  ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros2srrc_data, msg, Linkattacher)();
  if (!ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_type_support_handle.typesupport_identifier) {
    ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ros2srrc_data__msg__Action__rosidl_typesupport_introspection_c__Action_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
