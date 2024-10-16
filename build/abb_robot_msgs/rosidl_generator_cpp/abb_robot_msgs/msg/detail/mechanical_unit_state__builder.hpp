// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_robot_msgs:msg/MechanicalUnitState.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__MECHANICAL_UNIT_STATE__BUILDER_HPP_
#define ABB_ROBOT_MSGS__MSG__DETAIL__MECHANICAL_UNIT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_robot_msgs/msg/detail/mechanical_unit_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_robot_msgs
{

namespace msg
{

namespace builder
{

class Init_MechanicalUnitState_activated
{
public:
  explicit Init_MechanicalUnitState_activated(::abb_robot_msgs::msg::MechanicalUnitState & msg)
  : msg_(msg)
  {}
  ::abb_robot_msgs::msg::MechanicalUnitState activated(::abb_robot_msgs::msg::MechanicalUnitState::_activated_type arg)
  {
    msg_.activated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_robot_msgs::msg::MechanicalUnitState msg_;
};

class Init_MechanicalUnitState_name
{
public:
  Init_MechanicalUnitState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MechanicalUnitState_activated name(::abb_robot_msgs::msg::MechanicalUnitState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_MechanicalUnitState_activated(msg_);
  }

private:
  ::abb_robot_msgs::msg::MechanicalUnitState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_robot_msgs::msg::MechanicalUnitState>()
{
  return abb_robot_msgs::msg::builder::Init_MechanicalUnitState_name();
}

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__MECHANICAL_UNIT_STATE__BUILDER_HPP_
