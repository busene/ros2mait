// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from objectpose_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice

#ifndef OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__BUILDER_HPP_
#define OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "objectpose_msgs/msg/detail/object_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace objectpose_msgs
{

namespace msg
{

namespace builder
{

class Init_ObjectPose_qw
{
public:
  explicit Init_ObjectPose_qw(::objectpose_msgs::msg::ObjectPose & msg)
  : msg_(msg)
  {}
  ::objectpose_msgs::msg::ObjectPose qw(::objectpose_msgs::msg::ObjectPose::_qw_type arg)
  {
    msg_.qw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::objectpose_msgs::msg::ObjectPose msg_;
};

class Init_ObjectPose_qz
{
public:
  explicit Init_ObjectPose_qz(::objectpose_msgs::msg::ObjectPose & msg)
  : msg_(msg)
  {}
  Init_ObjectPose_qw qz(::objectpose_msgs::msg::ObjectPose::_qz_type arg)
  {
    msg_.qz = std::move(arg);
    return Init_ObjectPose_qw(msg_);
  }

private:
  ::objectpose_msgs::msg::ObjectPose msg_;
};

class Init_ObjectPose_qy
{
public:
  explicit Init_ObjectPose_qy(::objectpose_msgs::msg::ObjectPose & msg)
  : msg_(msg)
  {}
  Init_ObjectPose_qz qy(::objectpose_msgs::msg::ObjectPose::_qy_type arg)
  {
    msg_.qy = std::move(arg);
    return Init_ObjectPose_qz(msg_);
  }

private:
  ::objectpose_msgs::msg::ObjectPose msg_;
};

class Init_ObjectPose_qx
{
public:
  explicit Init_ObjectPose_qx(::objectpose_msgs::msg::ObjectPose & msg)
  : msg_(msg)
  {}
  Init_ObjectPose_qy qx(::objectpose_msgs::msg::ObjectPose::_qx_type arg)
  {
    msg_.qx = std::move(arg);
    return Init_ObjectPose_qy(msg_);
  }

private:
  ::objectpose_msgs::msg::ObjectPose msg_;
};

class Init_ObjectPose_z
{
public:
  explicit Init_ObjectPose_z(::objectpose_msgs::msg::ObjectPose & msg)
  : msg_(msg)
  {}
  Init_ObjectPose_qx z(::objectpose_msgs::msg::ObjectPose::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_ObjectPose_qx(msg_);
  }

private:
  ::objectpose_msgs::msg::ObjectPose msg_;
};

class Init_ObjectPose_y
{
public:
  explicit Init_ObjectPose_y(::objectpose_msgs::msg::ObjectPose & msg)
  : msg_(msg)
  {}
  Init_ObjectPose_z y(::objectpose_msgs::msg::ObjectPose::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ObjectPose_z(msg_);
  }

private:
  ::objectpose_msgs::msg::ObjectPose msg_;
};

class Init_ObjectPose_x
{
public:
  explicit Init_ObjectPose_x(::objectpose_msgs::msg::ObjectPose & msg)
  : msg_(msg)
  {}
  Init_ObjectPose_y x(::objectpose_msgs::msg::ObjectPose::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ObjectPose_y(msg_);
  }

private:
  ::objectpose_msgs::msg::ObjectPose msg_;
};

class Init_ObjectPose_objectname
{
public:
  Init_ObjectPose_objectname()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObjectPose_x objectname(::objectpose_msgs::msg::ObjectPose::_objectname_type arg)
  {
    msg_.objectname = std::move(arg);
    return Init_ObjectPose_x(msg_);
  }

private:
  ::objectpose_msgs::msg::ObjectPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::objectpose_msgs::msg::ObjectPose>()
{
  return objectpose_msgs::msg::builder::Init_ObjectPose_objectname();
}

}  // namespace objectpose_msgs

#endif  // OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__BUILDER_HPP_
