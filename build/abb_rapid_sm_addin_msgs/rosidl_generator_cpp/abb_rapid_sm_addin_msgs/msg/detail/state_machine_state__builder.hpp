// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_sm_addin_msgs:msg/StateMachineState.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__STATE_MACHINE_STATE__BUILDER_HPP_
#define ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__STATE_MACHINE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_sm_addin_msgs/msg/detail/state_machine_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_sm_addin_msgs
{

namespace msg
{

namespace builder
{

class Init_StateMachineState_egm_action
{
public:
  explicit Init_StateMachineState_egm_action(::abb_rapid_sm_addin_msgs::msg::StateMachineState & msg)
  : msg_(msg)
  {}
  ::abb_rapid_sm_addin_msgs::msg::StateMachineState egm_action(::abb_rapid_sm_addin_msgs::msg::StateMachineState::_egm_action_type arg)
  {
    msg_.egm_action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::StateMachineState msg_;
};

class Init_StateMachineState_sm_state
{
public:
  explicit Init_StateMachineState_sm_state(::abb_rapid_sm_addin_msgs::msg::StateMachineState & msg)
  : msg_(msg)
  {}
  Init_StateMachineState_egm_action sm_state(::abb_rapid_sm_addin_msgs::msg::StateMachineState::_sm_state_type arg)
  {
    msg_.sm_state = std::move(arg);
    return Init_StateMachineState_egm_action(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::StateMachineState msg_;
};

class Init_StateMachineState_rapid_task
{
public:
  Init_StateMachineState_rapid_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateMachineState_sm_state rapid_task(::abb_rapid_sm_addin_msgs::msg::StateMachineState::_rapid_task_type arg)
  {
    msg_.rapid_task = std::move(arg);
    return Init_StateMachineState_sm_state(msg_);
  }

private:
  ::abb_rapid_sm_addin_msgs::msg::StateMachineState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_sm_addin_msgs::msg::StateMachineState>()
{
  return abb_rapid_sm_addin_msgs::msg::builder::Init_StateMachineState_rapid_task();
}

}  // namespace abb_rapid_sm_addin_msgs

#endif  // ABB_RAPID_SM_ADDIN_MSGS__MSG__DETAIL__STATE_MACHINE_STATE__BUILDER_HPP_
