// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from linkattacher_msgs:srv/AttachLink.idl
// generated code does not contain a copyright notice

#ifndef LINKATTACHER_MSGS__SRV__DETAIL__ATTACH_LINK__BUILDER_HPP_
#define LINKATTACHER_MSGS__SRV__DETAIL__ATTACH_LINK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "linkattacher_msgs/srv/detail/attach_link__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace linkattacher_msgs
{

namespace srv
{

namespace builder
{

class Init_AttachLink_Request_link2_name
{
public:
  explicit Init_AttachLink_Request_link2_name(::linkattacher_msgs::srv::AttachLink_Request & msg)
  : msg_(msg)
  {}
  ::linkattacher_msgs::srv::AttachLink_Request link2_name(::linkattacher_msgs::srv::AttachLink_Request::_link2_name_type arg)
  {
    msg_.link2_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::linkattacher_msgs::srv::AttachLink_Request msg_;
};

class Init_AttachLink_Request_model2_name
{
public:
  explicit Init_AttachLink_Request_model2_name(::linkattacher_msgs::srv::AttachLink_Request & msg)
  : msg_(msg)
  {}
  Init_AttachLink_Request_link2_name model2_name(::linkattacher_msgs::srv::AttachLink_Request::_model2_name_type arg)
  {
    msg_.model2_name = std::move(arg);
    return Init_AttachLink_Request_link2_name(msg_);
  }

private:
  ::linkattacher_msgs::srv::AttachLink_Request msg_;
};

class Init_AttachLink_Request_link1_name
{
public:
  explicit Init_AttachLink_Request_link1_name(::linkattacher_msgs::srv::AttachLink_Request & msg)
  : msg_(msg)
  {}
  Init_AttachLink_Request_model2_name link1_name(::linkattacher_msgs::srv::AttachLink_Request::_link1_name_type arg)
  {
    msg_.link1_name = std::move(arg);
    return Init_AttachLink_Request_model2_name(msg_);
  }

private:
  ::linkattacher_msgs::srv::AttachLink_Request msg_;
};

class Init_AttachLink_Request_model1_name
{
public:
  Init_AttachLink_Request_model1_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttachLink_Request_link1_name model1_name(::linkattacher_msgs::srv::AttachLink_Request::_model1_name_type arg)
  {
    msg_.model1_name = std::move(arg);
    return Init_AttachLink_Request_link1_name(msg_);
  }

private:
  ::linkattacher_msgs::srv::AttachLink_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::linkattacher_msgs::srv::AttachLink_Request>()
{
  return linkattacher_msgs::srv::builder::Init_AttachLink_Request_model1_name();
}

}  // namespace linkattacher_msgs


namespace linkattacher_msgs
{

namespace srv
{

namespace builder
{

class Init_AttachLink_Response_message
{
public:
  explicit Init_AttachLink_Response_message(::linkattacher_msgs::srv::AttachLink_Response & msg)
  : msg_(msg)
  {}
  ::linkattacher_msgs::srv::AttachLink_Response message(::linkattacher_msgs::srv::AttachLink_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::linkattacher_msgs::srv::AttachLink_Response msg_;
};

class Init_AttachLink_Response_success
{
public:
  Init_AttachLink_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AttachLink_Response_message success(::linkattacher_msgs::srv::AttachLink_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_AttachLink_Response_message(msg_);
  }

private:
  ::linkattacher_msgs::srv::AttachLink_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::linkattacher_msgs::srv::AttachLink_Response>()
{
  return linkattacher_msgs::srv::builder::Init_AttachLink_Response_success();
}

}  // namespace linkattacher_msgs

#endif  // LINKATTACHER_MSGS__SRV__DETAIL__ATTACH_LINK__BUILDER_HPP_
