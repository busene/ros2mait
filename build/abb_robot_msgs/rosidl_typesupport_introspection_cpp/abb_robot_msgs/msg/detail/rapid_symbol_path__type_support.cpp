// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from abb_robot_msgs:msg/RAPIDSymbolPath.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "abb_robot_msgs/msg/detail/rapid_symbol_path__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace abb_robot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RAPIDSymbolPath_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) abb_robot_msgs::msg::RAPIDSymbolPath(_init);
}

void RAPIDSymbolPath_fini_function(void * message_memory)
{
  auto typed_message = static_cast<abb_robot_msgs::msg::RAPIDSymbolPath *>(message_memory);
  typed_message->~RAPIDSymbolPath();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RAPIDSymbolPath_message_member_array[3] = {
  {
    "task",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs::msg::RAPIDSymbolPath, task),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "module",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs::msg::RAPIDSymbolPath, module),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "symbol",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs::msg::RAPIDSymbolPath, symbol),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RAPIDSymbolPath_message_members = {
  "abb_robot_msgs::msg",  // message namespace
  "RAPIDSymbolPath",  // message name
  3,  // number of fields
  sizeof(abb_robot_msgs::msg::RAPIDSymbolPath),
  RAPIDSymbolPath_message_member_array,  // message members
  RAPIDSymbolPath_init_function,  // function to initialize message memory (memory has to be allocated)
  RAPIDSymbolPath_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RAPIDSymbolPath_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RAPIDSymbolPath_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace abb_robot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_robot_msgs::msg::RAPIDSymbolPath>()
{
  return &::abb_robot_msgs::msg::rosidl_typesupport_introspection_cpp::RAPIDSymbolPath_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_robot_msgs, msg, RAPIDSymbolPath)() {
  return &::abb_robot_msgs::msg::rosidl_typesupport_introspection_cpp::RAPIDSymbolPath_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
