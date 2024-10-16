// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/RuntimeState.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__RUNTIME_STATE__BUILDER_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__RUNTIME_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_sm_addin_msgs/msg/detail/runtime_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

namespace builder
{

class Init_RuntimeState_state_machines
{
public:
  explicit Init_RuntimeState_state_machines(::abb_rapid_sm_addin_msgs::msg::RuntimeState & msg)
  : msg_(msg)
  {}
  ::abb_rapid_sm_addin_msgs::msg::RuntimeState state_machines(::abb_rapid_sm_addin_msgs::msg::RuntimeState::_state_machines_type arg)
  {
    msg_.state_machines = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::RuntimeState msg_;
};

class Init_RuntimeState_header
{
public:
  Init_RuntimeState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RuntimeState_state_machines header(::abb_rapid_sm_addin_msgs::msg::RuntimeState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RuntimeState_state_machines(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::RuntimeState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::msg::RuntimeState>()
{
  return abb_rapid_sm_addin_msgs::msg::builder::Init_RuntimeState_header();
}

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__RUNTIME_STATE__BUILDER_HPP_
