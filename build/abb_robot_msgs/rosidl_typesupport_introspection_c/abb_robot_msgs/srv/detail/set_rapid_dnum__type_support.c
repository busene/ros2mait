// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from abb_robot_msgs:srv/SetRAPIDDnum.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "abb_robot_msgs/srv/detail/set_rapid_dnum__rosidl_typesupport_introspection_c.h"
#include "abb_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "abb_robot_msgs/srv/detail/set_rapid_dnum__functions.h"
#include "abb_robot_msgs/srv/detail/set_rapid_dnum__struct.h"


// Include directives for member types
// Member `path`
#include "abb_robot_msgs/msg/rapid_symbol_path.h"
// Member `path`
#include "abb_robot_msgs/msg/detail/rapid_symbol_path__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abb_robot_msgs__srv__SetRAPIDDnum_Request__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_robot_msgs__srv__SetRAPIDDnum_Request__init(message_memory);
}

void abb_robot_msgs__srv__SetRAPIDDnum_Request__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_fini_function(void * message_memory)
{
  abb_robot_msgs__srv__SetRAPIDDnum_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember abb_robot_msgs__srv__SetRAPIDDnum_Request__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_message_member_array[2] = {
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__srv__SetRAPIDDnum_Request, path),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__srv__SetRAPIDDnum_Request, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_robot_msgs__srv__SetRAPIDDnum_Request__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_message_members = {
  "abb_robot_msgs__srv",  // message namespace
  "SetRAPIDDnum_Request",  // message name
  2,  // number of fields
  sizeof(abb_robot_msgs__srv__SetRAPIDDnum_Request),
  abb_robot_msgs__srv__SetRAPIDDnum_Request__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_message_member_array,  // message members
  abb_robot_msgs__srv__SetRAPIDDnum_Request__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_robot_msgs__srv__SetRAPIDDnum_Request__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_robot_msgs__srv__SetRAPIDDnum_Request__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_message_type_support_handle = {
  0,
  &abb_robot_msgs__srv__SetRAPIDDnum_Request__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetRAPIDDnum_Request)() {
  abb_robot_msgs__srv__SetRAPIDDnum_Request__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, msg, RAPIDSymbolPath)();
  if (!abb_robot_msgs__srv__SetRAPIDDnum_Request__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_message_type_support_handle.typesupport_identifier) {
    abb_robot_msgs__srv__SetRAPIDDnum_Request__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_robot_msgs__srv__SetRAPIDDnum_Request__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "abb_robot_msgs/srv/detail/set_rapid_dnum__rosidl_typesupport_introspection_c.h"
// already included above
// #include "abb_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "abb_robot_msgs/srv/detail/set_rapid_dnum__functions.h"
// already included above
// #include "abb_robot_msgs/srv/detail/set_rapid_dnum__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void abb_robot_msgs__srv__SetRAPIDDnum_Response__rosidl_typesupport_introspection_c__SetRAPIDDnum_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  abb_robot_msgs__srv__SetRAPIDDnum_Response__init(message_memory);
}

void abb_robot_msgs__srv__SetRAPIDDnum_Response__rosidl_typesupport_introspection_c__SetRAPIDDnum_Response_fini_function(void * message_memory)
{
  abb_robot_msgs__srv__SetRAPIDDnum_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember abb_robot_msgs__srv__SetRAPIDDnum_Response__rosidl_typesupport_introspection_c__SetRAPIDDnum_Response_message_member_array[2] = {
  {
    "result_code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__srv__SetRAPIDDnum_Response, result_code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs__srv__SetRAPIDDnum_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers abb_robot_msgs__srv__SetRAPIDDnum_Response__rosidl_typesupport_introspection_c__SetRAPIDDnum_Response_message_members = {
  "abb_robot_msgs__srv",  // message namespace
  "SetRAPIDDnum_Response",  // message name
  2,  // number of fields
  sizeof(abb_robot_msgs__srv__SetRAPIDDnum_Response),
  abb_robot_msgs__srv__SetRAPIDDnum_Response__rosidl_typesupport_introspection_c__SetRAPIDDnum_Response_message_member_array,  // message members
  abb_robot_msgs__srv__SetRAPIDDnum_Response__rosidl_typesupport_introspection_c__SetRAPIDDnum_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  abb_robot_msgs__srv__SetRAPIDDnum_Response__rosidl_typesupport_introspection_c__SetRAPIDDnum_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t abb_robot_msgs__srv__SetRAPIDDnum_Response__rosidl_typesupport_introspection_c__SetRAPIDDnum_Response_message_type_support_handle = {
  0,
  &abb_robot_msgs__srv__SetRAPIDDnum_Response__rosidl_typesupport_introspection_c__SetRAPIDDnum_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_robot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetRAPIDDnum_Response)() {
  if (!abb_robot_msgs__srv__SetRAPIDDnum_Response__rosidl_typesupport_introspection_c__SetRAPIDDnum_Response_message_type_support_handle.typesupport_identifier) {
    abb_robot_msgs__srv__SetRAPIDDnum_Response__rosidl_typesupport_introspection_c__SetRAPIDDnum_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &abb_robot_msgs__srv__SetRAPIDDnum_Response__rosidl_typesupport_introspection_c__SetRAPIDDnum_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "abb_robot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "abb_robot_msgs/srv/detail/set_rapid_dnum__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers abb_robot_msgs__srv__detail__set_rapid_dnum__rosidl_typesupport_introspection_c__SetRAPIDDnum_service_members = {
  "abb_robot_msgs__srv",  // service namespace
  "SetRAPIDDnum",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // abb_robot_msgs__srv__detail__set_rapid_dnum__rosidl_typesupport_introspection_c__SetRAPIDDnum_Request_message_type_support_handle,
  NULL  // response message
  // abb_robot_msgs__srv__detail__set_rapid_dnum__rosidl_typesupport_introspection_c__SetRAPIDDnum_Response_message_type_support_handle
};

static rosidl_service_type_support_t abb_robot_msgs__srv__detail__set_rapid_dnum__rosidl_typesupport_introspection_c__SetRAPIDDnum_service_type_support_handle = {
  0,
  &abb_robot_msgs__srv__detail__set_rapid_dnum__rosidl_typesupport_introspection_c__SetRAPIDDnum_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetRAPIDDnum_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetRAPIDDnum_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_abb_robot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetRAPIDDnum)() {
  if (!abb_robot_msgs__srv__detail__set_rapid_dnum__rosidl_typesupport_introspection_c__SetRAPIDDnum_service_type_support_handle.typesupport_identifier) {
    abb_robot_msgs__srv__detail__set_rapid_dnum__rosidl_typesupport_introspection_c__SetRAPIDDnum_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)abb_robot_msgs__srv__detail__set_rapid_dnum__rosidl_typesupport_introspection_c__SetRAPIDDnum_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetRAPIDDnum_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, abb_robot_msgs, srv, SetRAPIDDnum_Response)()->data;
  }

  return &abb_robot_msgs__srv__detail__set_rapid_dnum__rosidl_typesupport_introspection_c__SetRAPIDDnum_service_type_support_handle;
}
