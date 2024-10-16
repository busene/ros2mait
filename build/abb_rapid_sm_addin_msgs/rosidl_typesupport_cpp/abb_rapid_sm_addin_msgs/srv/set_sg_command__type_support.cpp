// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from abb_rapid_sm_addin_msgs:srv/SetSGCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "abb_rapid_sm_addin_msgs/srv/detail/set_sg_command__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetSGCommand_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetSGCommand_Request_type_support_ids_t;

static const _SetSGCommand_Request_type_support_ids_t _SetSGCommand_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetSGCommand_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetSGCommand_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetSGCommand_Request_type_support_symbol_names_t _SetSGCommand_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_sm_addin_msgs, srv, SetSGCommand_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_rapid_sm_addin_msgs, srv, SetSGCommand_Request)),
  }
};

typedef struct _SetSGCommand_Request_type_support_data_t
{
  void * data[2];
} _SetSGCommand_Request_type_support_data_t;

static _SetSGCommand_Request_type_support_data_t _SetSGCommand_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetSGCommand_Request_message_typesupport_map = {
  2,
  "abb_rapid_sm_addin_msgs",
  &_SetSGCommand_Request_message_typesupport_ids.typesupport_identifier[0],
  &_SetSGCommand_Request_message_typesupport_symbol_names.symbol_name[0],
  &_SetSGCommand_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetSGCommand_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetSGCommand_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request>()
{
  return &::abb_rapid_sm_addin_msgs::srv::rosidl_typesupport_cpp::SetSGCommand_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, abb_rapid_sm_addin_msgs, srv, SetSGCommand_Request)() {
  return get_message_type_support_handle<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "abb_rapid_sm_addin_msgs/srv/detail/set_sg_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetSGCommand_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetSGCommand_Response_type_support_ids_t;

static const _SetSGCommand_Response_type_support_ids_t _SetSGCommand_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetSGCommand_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetSGCommand_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetSGCommand_Response_type_support_symbol_names_t _SetSGCommand_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_sm_addin_msgs, srv, SetSGCommand_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_rapid_sm_addin_msgs, srv, SetSGCommand_Response)),
  }
};

typedef struct _SetSGCommand_Response_type_support_data_t
{
  void * data[2];
} _SetSGCommand_Response_type_support_data_t;

static _SetSGCommand_Response_type_support_data_t _SetSGCommand_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetSGCommand_Response_message_typesupport_map = {
  2,
  "abb_rapid_sm_addin_msgs",
  &_SetSGCommand_Response_message_typesupport_ids.typesupport_identifier[0],
  &_SetSGCommand_Response_message_typesupport_symbol_names.symbol_name[0],
  &_SetSGCommand_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t SetSGCommand_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetSGCommand_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response>()
{
  return &::abb_rapid_sm_addin_msgs::srv::rosidl_typesupport_cpp::SetSGCommand_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, abb_rapid_sm_addin_msgs, srv, SetSGCommand_Response)() {
  return get_message_type_support_handle<abb_rapid_sm_addin_msgs::srv::SetSGCommand_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "abb_rapid_sm_addin_msgs/srv/detail/set_sg_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace abb_rapid_sm_addin_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _SetSGCommand_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _SetSGCommand_type_support_ids_t;

static const _SetSGCommand_type_support_ids_t _SetSGCommand_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _SetSGCommand_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _SetSGCommand_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _SetSGCommand_type_support_symbol_names_t _SetSGCommand_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, abb_rapid_sm_addin_msgs, srv, SetSGCommand)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_rapid_sm_addin_msgs, srv, SetSGCommand)),
  }
};

typedef struct _SetSGCommand_type_support_data_t
{
  void * data[2];
} _SetSGCommand_type_support_data_t;

static _SetSGCommand_type_support_data_t _SetSGCommand_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _SetSGCommand_service_typesupport_map = {
  2,
  "abb_rapid_sm_addin_msgs",
  &_SetSGCommand_service_typesupport_ids.typesupport_identifier[0],
  &_SetSGCommand_service_typesupport_symbol_names.symbol_name[0],
  &_SetSGCommand_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t SetSGCommand_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_SetSGCommand_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace abb_rapid_sm_addin_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<abb_rapid_sm_addin_msgs::srv::SetSGCommand>()
{
  return &::abb_rapid_sm_addin_msgs::srv::rosidl_typesupport_cpp::SetSGCommand_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
