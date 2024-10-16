// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from linkpose_msgs:msg/LinkPose.idl
// generated code does not contain a copyright notice

#ifndef LINKPOSE_MSGS__MSG__DETAIL__LINK_POSE__BUILDER_HPP_
#define LINKPOSE_MSGS__MSG__DETAIL__LINK_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "linkpose_msgs/msg/detail/link_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace linkpose_msgs
{

namespace msg
{

namespace builder
{

class Init_LinkPose_qw
{
public:
  explicit Init_LinkPose_qw(::linkpose_msgs::msg::LinkPose & msg)
  : msg_(msg)
  {}
  ::linkpose_msgs::msg::LinkPose qw(::linkpose_msgs::msg::LinkPose::_qw_type arg)
  {
    msg_.qw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::linkpose_msgs::msg::LinkPose msg_;
};

class Init_LinkPose_qz
{
public:
  explicit Init_LinkPose_qz(::linkpose_msgs::msg::LinkPose & msg)
  : msg_(msg)
  {}
  Init_LinkPose_qw qz(::linkpose_msgs::msg::LinkPose::_qz_type arg)
  {
    msg_.qz = std::move(arg);
    return Init_LinkPose_qw(msg_);
  }

private:
  ::linkpose_msgs::msg::LinkPose msg_;
};

class Init_LinkPose_qy
{
public:
  explicit Init_LinkPose_qy(::linkpose_msgs::msg::LinkPose & msg)
  : msg_(msg)
  {}
  Init_LinkPose_qz qy(::linkpose_msgs::msg::LinkPose::_qy_type arg)
  {
    msg_.qy = std::move(arg);
    return Init_LinkPose_qz(msg_);
  }

private:
  ::linkpose_msgs::msg::LinkPose msg_;
};

class Init_LinkPose_qx
{
public:
  explicit Init_LinkPose_qx(::linkpose_msgs::msg::LinkPose & msg)
  : msg_(msg)
  {}
  Init_LinkPose_qy qx(::linkpose_msgs::msg::LinkPose::_qx_type arg)
  {
    msg_.qx = std::move(arg);
    return Init_LinkPose_qy(msg_);
  }

private:
  ::linkpose_msgs::msg::LinkPose msg_;
};

class Init_LinkPose_z
{
public:
  explicit Init_LinkPose_z(::linkpose_msgs::msg::LinkPose & msg)
  : msg_(msg)
  {}
  Init_LinkPose_qx z(::linkpose_msgs::msg::LinkPose::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_LinkPose_qx(msg_);
  }

private:
  ::linkpose_msgs::msg::LinkPose msg_;
};

class Init_LinkPose_y
{
public:
  explicit Init_LinkPose_y(::linkpose_msgs::msg::LinkPose & msg)
  : msg_(msg)
  {}
  Init_LinkPose_z y(::linkpose_msgs::msg::LinkPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_LinkPose_z(msg_);
  }

private:
  ::linkpose_msgs::msg::LinkPose msg_;
};

class Init_LinkPose_x
{
public:
  explicit Init_LinkPose_x(::linkpose_msgs::msg::LinkPose & msg)
  : msg_(msg)
  {}
  Init_LinkPose_y x(::linkpose_msgs::msg::LinkPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_LinkPose_y(msg_);
  }

private:
  ::linkpose_msgs::msg::LinkPose msg_;
};

class Init_LinkPose_linkname
{
public:
  explicit Init_LinkPose_linkname(::linkpose_msgs::msg::LinkPose & msg)
  : msg_(msg)
  {}
  Init_LinkPose_x linkname(::linkpose_msgs::msg::LinkPose::_linkname_type arg)
  {
    msg_.linkname = std::move(arg);
    return Init_LinkPose_x(msg_);
  }

private:
  ::linkpose_msgs::msg::LinkPose msg_;
};

class Init_LinkPose_modelname
{
public:
  Init_LinkPose_modelname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LinkPose_linkname modelname(::linkpose_msgs::msg::LinkPose::_modelname_type arg)
  {
    msg_.modelname = std::move(arg);
    return Init_LinkPose_linkname(msg_);
  }

private:
  ::linkpose_msgs::msg::LinkPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::linkpose_msgs::msg::LinkPose>()
{
  return linkpose_msgs::msg::builder::Init_LinkPose_modelname();
}

}  // namespace linkpose_msgs

#endif  // LINKPOSE_MSGS__MSG__DETAIL__LINK_POSE__BUILDER_HPP_
