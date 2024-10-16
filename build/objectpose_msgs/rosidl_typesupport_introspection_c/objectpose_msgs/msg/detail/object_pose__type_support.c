// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from objectpose_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "objectpose_msgs/msg/detail/object_pose__rosidl_typesupport_introspection_c.h"
#include "objectpose_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "objectpose_msgs/msg/detail/object_pose__functions.h"
#include "objectpose_msgs/msg/detail/object_pose__struct.h"


// Include directives for member types
// Member `objectname`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void objectpose_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  objectpose_msgs__msg__ObjectPose__init(message_memory);
}

void objectpose_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_fini_function(void * message_memory)
{
  objectpose_msgs__msg__ObjectPose__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember objectpose_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_member_array[8] = {
  {
    "objectname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(objectpose_msgs__msg__ObjectPose, objectname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(objectpose_msgs__msg__ObjectPose, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(objectpose_msgs__msg__ObjectPose, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(objectpose_msgs__msg__ObjectPose, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qx",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(objectpose_msgs__msg__ObjectPose, qx),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(objectpose_msgs__msg__ObjectPose, qy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(objectpose_msgs__msg__ObjectPose, qz),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "qw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(objectpose_msgs__msg__ObjectPose, qw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers objectpose_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_members = {
  "objectpose_msgs__msg",  // message namespace
  "ObjectPose",  // message name
  8,  // number of fields
  sizeof(objectpose_msgs__msg__ObjectPose),
  objectpose_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_member_array,  // message members
  objectpose_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_init_function,  // function to initialize message memory (memory has to be allocated)
  objectpose_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t objectpose_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_type_support_handle = {
  0,
  &objectpose_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_objectpose_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, objectpose_msgs, msg, ObjectPose)() {
  if (!objectpose_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_type_support_handle.typesupport_identifier) {
    objectpose_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &objectpose_msgs__msg__ObjectPose__rosidl_typesupport_introspection_c__ObjectPose_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
