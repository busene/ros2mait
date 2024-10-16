// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from abb_egm_msgs:msg/EGMState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "abb_egm_msgs/msg/detail/egm_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace abb_egm_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void EGMState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) abb_egm_msgs::msg::EGMState(_init);
}

void EGMState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<abb_egm_msgs::msg::EGMState *>(message_memory);
  typed_message->~EGMState();
}

size_t size_function__EGMState__egm_channels(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<abb_egm_msgs::msg::EGMChannelState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__EGMState__egm_channels(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<abb_egm_msgs::msg::EGMChannelState> *>(untyped_member);
  return &member[index];
}

void * get_function__EGMState__egm_channels(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<abb_egm_msgs::msg::EGMChannelState> *>(untyped_member);
  return &member[index];
}

void fetch_function__EGMState__egm_channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const abb_egm_msgs::msg::EGMChannelState *>(
    get_const_function__EGMState__egm_channels(untyped_member, index));
  auto & value = *reinterpret_cast<abb_egm_msgs::msg::EGMChannelState *>(untyped_value);
  value = item;
}

void assign_function__EGMState__egm_channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<abb_egm_msgs::msg::EGMChannelState *>(
    get_function__EGMState__egm_channels(untyped_member, index));
  const auto & value = *reinterpret_cast<const abb_egm_msgs::msg::EGMChannelState *>(untyped_value);
  item = value;
}

void resize_function__EGMState__egm_channels(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<abb_egm_msgs::msg::EGMChannelState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EGMState_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_egm_msgs::msg::EGMState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "egm_channels",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<abb_egm_msgs::msg::EGMChannelState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_egm_msgs::msg::EGMState, egm_channels),  // bytes offset in struct
    nullptr,  // default value
    size_function__EGMState__egm_channels,  // size() function pointer
    get_const_function__EGMState__egm_channels,  // get_const(index) function pointer
    get_function__EGMState__egm_channels,  // get(index) function pointer
    fetch_function__EGMState__egm_channels,  // fetch(index, &value) function pointer
    assign_function__EGMState__egm_channels,  // assign(index, value) function pointer
    resize_function__EGMState__egm_channels  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EGMState_message_members = {
  "abb_egm_msgs::msg",  // message namespace
  "EGMState",  // message name
  2,  // number of fields
  sizeof(abb_egm_msgs::msg::EGMState),
  EGMState_message_member_array,  // message members
  EGMState_init_function,  // function to initialize message memory (memory has to be allocated)
  EGMState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EGMState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EGMState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace abb_egm_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_egm_msgs::msg::EGMState>()
{
  return &::abb_egm_msgs::msg::rosidl_typesupport_introspection_cpp::EGMState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_egm_msgs, msg, EGMState)() {
  return &::abb_egm_msgs::msg::rosidl_typesupport_introspection_cpp::EGMState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
