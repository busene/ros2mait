// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2srrc_data:msg/Linkattacher.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__LINKATTACHER__BUILDER_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__LINKATTACHER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2srrc_data/msg/detail/linkattacher__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2srrc_data
{

namespace msg
{

namespace builder
{

class Init_Linkattacher_link2_name
{
public:
  explicit Init_Linkattacher_link2_name(::ros2srrc_data::msg::Linkattacher & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::msg::Linkattacher link2_name(::ros2srrc_data::msg::Linkattacher::_link2_name_type arg)
  {
    msg_.link2_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::msg::Linkattacher msg_;
};

class Init_Linkattacher_model2_name
{
public:
  explicit Init_Linkattacher_model2_name(::ros2srrc_data::msg::Linkattacher & msg)
  : msg_(msg)
  {}
  Init_Linkattacher_link2_name model2_name(::ros2srrc_data::msg::Linkattacher::_model2_name_type arg)
  {
    msg_.model2_name = std::move(arg);
    return Init_Linkattacher_link2_name(msg_);
  }

private:
  ::ros2srrc_data::msg::Linkattacher msg_;
};

class Init_Linkattacher_link1_name
{
public:
  explicit Init_Linkattacher_link1_name(::ros2srrc_data::msg::Linkattacher & msg)
  : msg_(msg)
  {}
  Init_Linkattacher_model2_name link1_name(::ros2srrc_data::msg::Linkattacher::_link1_name_type arg)
  {
    msg_.link1_name = std::move(arg);
    return Init_Linkattacher_model2_name(msg_);
  }

private:
  ::ros2srrc_data::msg::Linkattacher msg_;
};

class Init_Linkattacher_model1_name
{
public:
  Init_Linkattacher_model1_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Linkattacher_link1_name model1_name(::ros2srrc_data::msg::Linkattacher::_model1_name_type arg)
  {
    msg_.model1_name = std::move(arg);
    return Init_Linkattacher_link1_name(msg_);
  }

private:
  ::ros2srrc_data::msg::Linkattacher msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::msg::Linkattacher>()
{
  return ros2srrc_data::msg::builder::Init_Linkattacher_model1_name();
}

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__LINKATTACHER__BUILDER_HPP_
