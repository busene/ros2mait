// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_egm_msgs:msg/EGMState.idl
// generated code does not contain a copyright notice

#ifndef ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__BUILDER_HPP_
#define ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_egm_msgs/msg/detail/egm_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_egm_msgs
{

namespace msg
{

namespace builder
{

class Init_EGMState_egm_channels
{
public:
  explicit Init_EGMState_egm_channels(::abb_egm_msgs::msg::EGMState & msg)
  : msg_(msg)
  {}
  ::abb_egm_msgs::msg::EGMState egm_channels(::abb_egm_msgs::msg::EGMState::_egm_channels_type arg)
  {
    msg_.egm_channels = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_egm_msgs::msg::EGMState msg_;
};

class Init_EGMState_header
{
public:
  Init_EGMState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EGMState_egm_channels header(::abb_egm_msgs::msg::EGMState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EGMState_egm_channels(msg_);
  }

private:
  ::abb_egm_msgs::msg::EGMState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_egm_msgs::msg::EGMState>()
{
  return abb_egm_msgs::msg::builder::Init_EGMState_header();
}

}  // namespace abb_egm_msgs

#endif  // ABB_EGM_MSGS__MSG__DETAIL__EGM_STATE__BUILDER_HPP_
