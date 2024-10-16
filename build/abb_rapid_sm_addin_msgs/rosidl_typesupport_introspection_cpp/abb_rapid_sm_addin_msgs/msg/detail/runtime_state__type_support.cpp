// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from abb_rapid_sm_addin_msgs:msg/RuntimeState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "abb_rapid_sm_addin_msgs/msg/detail/runtime_state__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RuntimeState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) abb_rapid_sm_addin_msgs::msg::RuntimeState(_init);
}

void RuntimeState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<abb_rapid_sm_addin_msgs::msg::RuntimeState *>(message_memory);
  typed_message->~RuntimeState();
}

size_t size_function__RuntimeState__state_machines(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<abb_rapid_sm_addin_msgs::msg::StateMachineState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RuntimeState__state_machines(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<abb_rapid_sm_addin_msgs::msg::StateMachineState> *>(untyped_member);
  return &member[index];
}

void * get_function__RuntimeState__state_machines(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<abb_rapid_sm_addin_msgs::msg::StateMachineState> *>(untyped_member);
  return &member[index];
}

void fetch_function__RuntimeState__state_machines(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const abb_rapid_sm_addin_msgs::msg::StateMachineState *>(
    get_const_function__RuntimeState__state_machines(untyped_member, index));
  auto & value = *reinterpret_cast<abb_rapid_sm_addin_msgs::msg::StateMachineState *>(untyped_value);
  value = item;
}

void assign_function__RuntimeState__state_machines(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<abb_rapid_sm_addin_msgs::msg::StateMachineState *>(
    get_function__RuntimeState__state_machines(untyped_member, index));
  const auto & value = *reinterpret_cast<const abb_rapid_sm_addin_msgs::msg::StateMachineState *>(untyped_value);
  item = value;
}

void resize_function__RuntimeState__state_machines(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<abb_rapid_sm_addin_msgs::msg::StateMachineState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RuntimeState_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs::msg::RuntimeState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state_machines",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<abb_rapid_sm_addin_msgs::msg::StateMachineState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_rapid_sm_addin_msgs::msg::RuntimeState, state_machines),  // bytes offset in struct
    nullptr,  // default value
    size_function__RuntimeState__state_machines,  // size() function pointer
    get_const_function__RuntimeState__state_machines,  // get_const(index) function pointer
    get_function__RuntimeState__state_machines,  // get(index) function pointer
    fetch_function__RuntimeState__state_machines,  // fetch(index, &value) function pointer
    assign_function__RuntimeState__state_machines,  // assign(index, value) function pointer
    resize_function__RuntimeState__state_machines  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RuntimeState_message_members = {
  "abb_rapid_sm_addin_msgs::msg",  // message namespace
  "RuntimeState",  // message name
  2,  // number of fields
  sizeof(abb_rapid_sm_addin_msgs::msg::RuntimeState),
  RuntimeState_message_member_array,  // message members
  RuntimeState_init_function,  // function to initialize message memory (memory has to be allocated)
  RuntimeState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RuntimeState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RuntimeState_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace abb_rapid_sm_addin_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<abb_rapid_sm_addin_msgs::msg::RuntimeState>()
{
  return &::abb_rapid_sm_addin_msgs::msg::rosidl_typesupport_introspection_cpp::RuntimeState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_rapid_sm_addin_msgs, msg, RuntimeState)() {
  return &::abb_rapid_sm_addin_msgs::msg::rosidl_typesupport_introspection_cpp::RuntimeState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
