// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from abb_robot_msgs:msg/SystemState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "abb_robot_msgs/msg/detail/system_state__struct.hpp"
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

void SystemState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) abb_robot_msgs::msg::SystemState(_init);
}

void SystemState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<abb_robot_msgs::msg::SystemState *>(message_memory);
  typed_message->~SystemState();
}

size_t size_function__SystemState__rapid_tasks(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<abb_robot_msgs::msg::RAPIDTaskState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemState__rapid_tasks(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<abb_robot_msgs::msg::RAPIDTaskState> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemState__rapid_tasks(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<abb_robot_msgs::msg::RAPIDTaskState> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemState__rapid_tasks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const abb_robot_msgs::msg::RAPIDTaskState *>(
    get_const_function__SystemState__rapid_tasks(untyped_member, index));
  auto & value = *reinterpret_cast<abb_robot_msgs::msg::RAPIDTaskState *>(untyped_value);
  value = item;
}

void assign_function__SystemState__rapid_tasks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<abb_robot_msgs::msg::RAPIDTaskState *>(
    get_function__SystemState__rapid_tasks(untyped_member, index));
  const auto & value = *reinterpret_cast<const abb_robot_msgs::msg::RAPIDTaskState *>(untyped_value);
  item = value;
}

void resize_function__SystemState__rapid_tasks(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<abb_robot_msgs::msg::RAPIDTaskState> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SystemState__mechanical_units(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<abb_robot_msgs::msg::MechanicalUnitState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SystemState__mechanical_units(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<abb_robot_msgs::msg::MechanicalUnitState> *>(untyped_member);
  return &member[index];
}

void * get_function__SystemState__mechanical_units(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<abb_robot_msgs::msg::MechanicalUnitState> *>(untyped_member);
  return &member[index];
}

void fetch_function__SystemState__mechanical_units(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const abb_robot_msgs::msg::MechanicalUnitState *>(
    get_const_function__SystemState__mechanical_units(untyped_member, index));
  auto & value = *reinterpret_cast<abb_robot_msgs::msg::MechanicalUnitState *>(untyped_value);
  value = item;
}

void assign_function__SystemState__mechanical_units(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<abb_robot_msgs::msg::MechanicalUnitState *>(
    get_function__SystemState__mechanical_units(untyped_member, index));
  const auto & value = *reinterpret_cast<const abb_robot_msgs::msg::MechanicalUnitState *>(untyped_value);
  item = value;
}

void resize_function__SystemState__mechanical_units(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<abb_robot_msgs::msg::MechanicalUnitState> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SystemState_message_member_array[6] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs::msg::SystemState, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "motors_on",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs::msg::SystemState, motors_on),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "auto_mode",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs::msg::SystemState, auto_mode),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rapid_running",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs::msg::SystemState, rapid_running),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rapid_tasks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<abb_robot_msgs::msg::RAPIDTaskState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs::msg::SystemState, rapid_tasks),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemState__rapid_tasks,  // size() function pointer
    get_const_function__SystemState__rapid_tasks,  // get_const(index) function pointer
    get_function__SystemState__rapid_tasks,  // get(index) function pointer
    fetch_function__SystemState__rapid_tasks,  // fetch(index, &value) function pointer
    assign_function__SystemState__rapid_tasks,  // assign(index, value) function pointer
    resize_function__SystemState__rapid_tasks  // resize(index) function pointer
  },
  {
    "mechanical_units",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<abb_robot_msgs::msg::MechanicalUnitState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(abb_robot_msgs::msg::SystemState, mechanical_units),  // bytes offset in struct
    nullptr,  // default value
    size_function__SystemState__mechanical_units,  // size() function pointer
    get_const_function__SystemState__mechanical_units,  // get_const(index) function pointer
    get_function__SystemState__mechanical_units,  // get(index) function pointer
    fetch_function__SystemState__mechanical_units,  // fetch(index, &value) function pointer
    assign_function__SystemState__mechanical_units,  // assign(index, value) function pointer
    resize_function__SystemState__mechanical_units  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SystemState_message_members = {
  "abb_robot_msgs::msg",  // message namespace
  "SystemState",  // message name
  6,  // number of fields
  sizeof(abb_robot_msgs::msg::SystemState),
  SystemState_message_member_array,  // message members
  SystemState_init_function,  // function to initialize message memory (memory has to be allocated)
  SystemState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SystemState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SystemState_message_members,
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
get_message_type_support_handle<abb_robot_msgs::msg::SystemState>()
{
  return &::abb_robot_msgs::msg::rosidl_typesupport_introspection_cpp::SystemState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, abb_robot_msgs, msg, SystemState)() {
  return &::abb_robot_msgs::msg::rosidl_typesupport_introspection_cpp::SystemState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
