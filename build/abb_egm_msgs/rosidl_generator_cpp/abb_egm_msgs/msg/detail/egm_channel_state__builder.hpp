// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_egm_msgs:msg/EGMChannelState.idl
// generated code does not contain a copyright notice

#ifndef ABB_EGM_MSGS__MSG__DETAIL__EGM_CHANNEL_STATE__BUILDER_HPP_
#define ABB_EGM_MSGS__MSG__DETAIL__EGM_CHANNEL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_egm_msgs/msg/detail/egm_channel_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_egm_msgs
{

namespace msg
{

namespace builder
{

class Init_EGMChannelState_utilization_rate
{
public:
  explicit Init_EGMChannelState_utilization_rate(::abb_egm_msgs::msg::EGMChannelState & msg)
  : msg_(msg)
  {}
  ::abb_egm_msgs::msg::EGMChannelState utilization_rate(::abb_egm_msgs::msg::EGMChannelState::_utilization_rate_type arg)
  {
    msg_.utilization_rate = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_egm_msgs::msg::EGMChannelState msg_;
};

class Init_EGMChannelState_rapid_execution_state
{
public:
  explicit Init_EGMChannelState_rapid_execution_state(::abb_egm_msgs::msg::EGMChannelState & msg)
  : msg_(msg)
  {}
  Init_EGMChannelState_utilization_rate rapid_execution_state(::abb_egm_msgs::msg::EGMChannelState::_rapid_execution_state_type arg)
  {
    msg_.rapid_execution_state = std::move(arg);
    return Init_EGMChannelState_utilization_rate(msg_);
  }

private:
  ::abb_egm_msgs::msg::EGMChannelState msg_;
};

class Init_EGMChannelState_motor_state
{
public:
  explicit Init_EGMChannelState_motor_state(::abb_egm_msgs::msg::EGMChannelState & msg)
  : msg_(msg)
  {}
  Init_EGMChannelState_rapid_execution_state motor_state(::abb_egm_msgs::msg::EGMChannelState::_motor_state_type arg)
  {
    msg_.motor_state = std::move(arg);
    return Init_EGMChannelState_rapid_execution_state(msg_);
  }

private:
  ::abb_egm_msgs::msg::EGMChannelState msg_;
};

class Init_EGMChannelState_egm_client_state
{
public:
  explicit Init_EGMChannelState_egm_client_state(::abb_egm_msgs::msg::EGMChannelState & msg)
  : msg_(msg)
  {}
  Init_EGMChannelState_motor_state egm_client_state(::abb_egm_msgs::msg::EGMChannelState::_egm_client_state_type arg)
  {
    msg_.egm_client_state = std::move(arg);
    return Init_EGMChannelState_motor_state(msg_);
  }

private:
  ::abb_egm_msgs::msg::EGMChannelState msg_;
};

class Init_EGMChannelState_egm_convergence_met
{
public:
  explicit Init_EGMChannelState_egm_convergence_met(::abb_egm_msgs::msg::EGMChannelState & msg)
  : msg_(msg)
  {}
  Init_EGMChannelState_egm_client_state egm_convergence_met(::abb_egm_msgs::msg::EGMChannelState::_egm_convergence_met_type arg)
  {
    msg_.egm_convergence_met = std::move(arg);
    return Init_EGMChannelState_egm_client_state(msg_);
  }

private:
  ::abb_egm_msgs::msg::EGMChannelState msg_;
};

class Init_EGMChannelState_active
{
public:
  explicit Init_EGMChannelState_active(::abb_egm_msgs::msg::EGMChannelState & msg)
  : msg_(msg)
  {}
  Init_EGMChannelState_egm_convergence_met active(::abb_egm_msgs::msg::EGMChannelState::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_EGMChannelState_egm_convergence_met(msg_);
  }

private:
  ::abb_egm_msgs::msg::EGMChannelState msg_;
};

class Init_EGMChannelState_name
{
public:
  Init_EGMChannelState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EGMChannelState_active name(::abb_egm_msgs::msg::EGMChannelState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_EGMChannelState_active(msg_);
  }

private:
  ::abb_egm_msgs::msg::EGMChannelState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_egm_msgs::msg::EGMChannelState>()
{
  return abb_egm_msgs::msg::builder::Init_EGMChannelState_name();
}

}  // namespace abb_egm_msgs

#endif  // ABB_EGM_MSGS__MSG__DETAIL__EGM_CHANNEL_STATE__BUILDER_HPP_
