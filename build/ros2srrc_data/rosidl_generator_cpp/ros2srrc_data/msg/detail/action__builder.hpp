// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros2srrc_data:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__ACTION__BUILDER_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros2srrc_data/msg/detail/action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros2srrc_data
{

namespace msg
{

namespace builder
{

class Init_Action_detach
{
public:
  explicit Init_Action_detach(::ros2srrc_data::msg::Action & msg)
  : msg_(msg)
  {}
  ::ros2srrc_data::msg::Action detach(::ros2srrc_data::msg::Action::_detach_type arg)
  {
    msg_.detach = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros2srrc_data::msg::Action msg_;
};

class Init_Action_attach
{
public:
  explicit Init_Action_attach(::ros2srrc_data::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_detach attach(::ros2srrc_data::msg::Action::_attach_type arg)
  {
    msg_.attach = std::move(arg);
    return Init_Action_detach(msg_);
  }

private:
  ::ros2srrc_data::msg::Action msg_;
};

class Init_Action_moveg
{
public:
  explicit Init_Action_moveg(::ros2srrc_data::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_attach moveg(::ros2srrc_data::msg::Action::_moveg_type arg)
  {
    msg_.moveg = std::move(arg);
    return Init_Action_attach(msg_);
  }

private:
  ::ros2srrc_data::msg::Action msg_;
};

class Init_Action_moverp
{
public:
  explicit Init_Action_moverp(::ros2srrc_data::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_moveg moverp(::ros2srrc_data::msg::Action::_moverp_type arg)
  {
    msg_.moverp = std::move(arg);
    return Init_Action_moveg(msg_);
  }

private:
  ::ros2srrc_data::msg::Action msg_;
};

class Init_Action_moverot
{
public:
  explicit Init_Action_moverot(::ros2srrc_data::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_moverp moverot(::ros2srrc_data::msg::Action::_moverot_type arg)
  {
    msg_.moverot = std::move(arg);
    return Init_Action_moverp(msg_);
  }

private:
  ::ros2srrc_data::msg::Action msg_;
};

class Init_Action_moveypr
{
public:
  explicit Init_Action_moveypr(::ros2srrc_data::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_moverot moveypr(::ros2srrc_data::msg::Action::_moveypr_type arg)
  {
    msg_.moveypr = std::move(arg);
    return Init_Action_moverot(msg_);
  }

private:
  ::ros2srrc_data::msg::Action msg_;
};

class Init_Action_movexyz
{
public:
  explicit Init_Action_movexyz(::ros2srrc_data::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_moveypr movexyz(::ros2srrc_data::msg::Action::_movexyz_type arg)
  {
    msg_.movexyz = std::move(arg);
    return Init_Action_moveypr(msg_);
  }

private:
  ::ros2srrc_data::msg::Action msg_;
};

class Init_Action_movexyzw
{
public:
  explicit Init_Action_movexyzw(::ros2srrc_data::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_movexyz movexyzw(::ros2srrc_data::msg::Action::_movexyzw_type arg)
  {
    msg_.movexyzw = std::move(arg);
    return Init_Action_movexyz(msg_);
  }

private:
  ::ros2srrc_data::msg::Action msg_;
};

class Init_Action_movel
{
public:
  explicit Init_Action_movel(::ros2srrc_data::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_movexyzw movel(::ros2srrc_data::msg::Action::_movel_type arg)
  {
    msg_.movel = std::move(arg);
    return Init_Action_movexyzw(msg_);
  }

private:
  ::ros2srrc_data::msg::Action msg_;
};

class Init_Action_mover
{
public:
  explicit Init_Action_mover(::ros2srrc_data::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_movel mover(::ros2srrc_data::msg::Action::_mover_type arg)
  {
    msg_.mover = std::move(arg);
    return Init_Action_movel(msg_);
  }

private:
  ::ros2srrc_data::msg::Action msg_;
};

class Init_Action_movej
{
public:
  explicit Init_Action_movej(::ros2srrc_data::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_mover movej(::ros2srrc_data::msg::Action::_movej_type arg)
  {
    msg_.movej = std::move(arg);
    return Init_Action_mover(msg_);
  }

private:
  ::ros2srrc_data::msg::Action msg_;
};

class Init_Action_speed
{
public:
  explicit Init_Action_speed(::ros2srrc_data::msg::Action & msg)
  : msg_(msg)
  {}
  Init_Action_movej speed(::ros2srrc_data::msg::Action::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_Action_movej(msg_);
  }

private:
  ::ros2srrc_data::msg::Action msg_;
};

class Init_Action_action
{
public:
  Init_Action_action()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Action_speed action(::ros2srrc_data::msg::Action::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_Action_speed(msg_);
  }

private:
  ::ros2srrc_data::msg::Action msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros2srrc_data::msg::Action>()
{
  return ros2srrc_data::msg::builder::Init_Action_action();
}

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__ACTION__BUILDER_HPP_
