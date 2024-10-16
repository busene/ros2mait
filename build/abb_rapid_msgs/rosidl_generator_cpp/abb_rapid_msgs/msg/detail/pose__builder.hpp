// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from abb_rapid_msgs:msg/Pose.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "abb_rapid_msgs/msg/detail/pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace abb_rapid_msgs
{

namespace msg
{

namespace builder
{

class Init_Pose_rot
{
public:
  explicit Init_Pose_rot(::abb_rapid_msgs::msg::Pose & msg)
  : msg_(msg)
  {}
  ::abb_rapid_msgs::msg::Pose rot(::abb_rapid_msgs::msg::Pose::_rot_type arg)
  {
    msg_.rot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::abb_rapid_msgs::msg::Pose msg_;
};

class Init_Pose_trans
{
public:
  Init_Pose_trans()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Pose_rot trans(::abb_rapid_msgs::msg::Pose::_trans_type arg)
  {
    msg_.trans = std::move(arg);
    return Init_Pose_rot(msg_);
  }

private:
  ::abb_rapid_msgs::msg::Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::abb_rapid_msgs::msg::Pose>()
{
  return abb_rapid_msgs::msg::builder::Init_Pose_trans();
}

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__POSE__BUILDER_HPP_
