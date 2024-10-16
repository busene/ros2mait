// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2srrc_data:msg/Action.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__ACTION__STRUCT_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__ACTION__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'movej'
#include "ros2srrc_data/msg/detail/joints__struct.hpp"
// Member 'mover'
#include "ros2srrc_data/msg/detail/joint__struct.hpp"
// Member 'movel'
// Member 'movexyz'
#include "ros2srrc_data/msg/detail/xyz__struct.hpp"
// Member 'movexyzw'
// Member 'moverp'
#include "ros2srrc_data/msg/detail/xyzypr__struct.hpp"
// Member 'moveypr'
// Member 'moverot'
#include "ros2srrc_data/msg/detail/ypr__struct.hpp"
// Member 'attach'
// Member 'detach'
#include "ros2srrc_data/msg/detail/linkattacher__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros2srrc_data__msg__Action __attribute__((deprecated))
#else
# define DEPRECATED__ros2srrc_data__msg__Action __declspec(deprecated)
#endif

namespace ros2srrc_data
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Action_
{
  using Type = Action_<ContainerAllocator>;

  explicit Action_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : movej(_init),
    mover(_init),
    movel(_init),
    movexyzw(_init),
    movexyz(_init),
    moveypr(_init),
    moverot(_init),
    moverp(_init),
    attach(_init),
    detach(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->speed = 0.0;
      this->moveg = 0.0;
    }
  }

  explicit Action_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : action(_alloc),
    movej(_alloc, _init),
    mover(_alloc, _init),
    movel(_alloc, _init),
    movexyzw(_alloc, _init),
    movexyz(_alloc, _init),
    moveypr(_alloc, _init),
    moverot(_alloc, _init),
    moverp(_alloc, _init),
    attach(_alloc, _init),
    detach(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->action = "";
      this->speed = 0.0;
      this->moveg = 0.0;
    }
  }

  // field types and members
  using _action_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _action_type action;
  using _speed_type =
    double;
  _speed_type speed;
  using _movej_type =
    ros2srrc_data::msg::Joints_<ContainerAllocator>;
  _movej_type movej;
  using _mover_type =
    ros2srrc_data::msg::Joint_<ContainerAllocator>;
  _mover_type mover;
  using _movel_type =
    ros2srrc_data::msg::Xyz_<ContainerAllocator>;
  _movel_type movel;
  using _movexyzw_type =
    ros2srrc_data::msg::Xyzypr_<ContainerAllocator>;
  _movexyzw_type movexyzw;
  using _movexyz_type =
    ros2srrc_data::msg::Xyz_<ContainerAllocator>;
  _movexyz_type movexyz;
  using _moveypr_type =
    ros2srrc_data::msg::Ypr_<ContainerAllocator>;
  _moveypr_type moveypr;
  using _moverot_type =
    ros2srrc_data::msg::Ypr_<ContainerAllocator>;
  _moverot_type moverot;
  using _moverp_type =
    ros2srrc_data::msg::Xyzypr_<ContainerAllocator>;
  _moverp_type moverp;
  using _moveg_type =
    double;
  _moveg_type moveg;
  using _attach_type =
    ros2srrc_data::msg::Linkattacher_<ContainerAllocator>;
  _attach_type attach;
  using _detach_type =
    ros2srrc_data::msg::Linkattacher_<ContainerAllocator>;
  _detach_type detach;

  // setters for named parameter idiom
  Type & set__action(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->action = _arg;
    return *this;
  }
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__movej(
    const ros2srrc_data::msg::Joints_<ContainerAllocator> & _arg)
  {
    this->movej = _arg;
    return *this;
  }
  Type & set__mover(
    const ros2srrc_data::msg::Joint_<ContainerAllocator> & _arg)
  {
    this->mover = _arg;
    return *this;
  }
  Type & set__movel(
    const ros2srrc_data::msg::Xyz_<ContainerAllocator> & _arg)
  {
    this->movel = _arg;
    return *this;
  }
  Type & set__movexyzw(
    const ros2srrc_data::msg::Xyzypr_<ContainerAllocator> & _arg)
  {
    this->movexyzw = _arg;
    return *this;
  }
  Type & set__movexyz(
    const ros2srrc_data::msg::Xyz_<ContainerAllocator> & _arg)
  {
    this->movexyz = _arg;
    return *this;
  }
  Type & set__moveypr(
    const ros2srrc_data::msg::Ypr_<ContainerAllocator> & _arg)
  {
    this->moveypr = _arg;
    return *this;
  }
  Type & set__moverot(
    const ros2srrc_data::msg::Ypr_<ContainerAllocator> & _arg)
  {
    this->moverot = _arg;
    return *this;
  }
  Type & set__moverp(
    const ros2srrc_data::msg::Xyzypr_<ContainerAllocator> & _arg)
  {
    this->moverp = _arg;
    return *this;
  }
  Type & set__moveg(
    const double & _arg)
  {
    this->moveg = _arg;
    return *this;
  }
  Type & set__attach(
    const ros2srrc_data::msg::Linkattacher_<ContainerAllocator> & _arg)
  {
    this->attach = _arg;
    return *this;
  }
  Type & set__detach(
    const ros2srrc_data::msg::Linkattacher_<ContainerAllocator> & _arg)
  {
    this->detach = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2srrc_data::msg::Action_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2srrc_data::msg::Action_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2srrc_data::msg::Action_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2srrc_data::msg::Action_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::msg::Action_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::msg::Action_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::msg::Action_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::msg::Action_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2srrc_data::msg::Action_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2srrc_data::msg::Action_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2srrc_data__msg__Action
    std::shared_ptr<ros2srrc_data::msg::Action_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2srrc_data__msg__Action
    std::shared_ptr<ros2srrc_data::msg::Action_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Action_ & other) const
  {
    if (this->action != other.action) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->movej != other.movej) {
      return false;
    }
    if (this->mover != other.mover) {
      return false;
    }
    if (this->movel != other.movel) {
      return false;
    }
    if (this->movexyzw != other.movexyzw) {
      return false;
    }
    if (this->movexyz != other.movexyz) {
      return false;
    }
    if (this->moveypr != other.moveypr) {
      return false;
    }
    if (this->moverot != other.moverot) {
      return false;
    }
    if (this->moverp != other.moverp) {
      return false;
    }
    if (this->moveg != other.moveg) {
      return false;
    }
    if (this->attach != other.attach) {
      return false;
    }
    if (this->detach != other.detach) {
      return false;
    }
    return true;
  }
  bool operator!=(const Action_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Action_

// alias to use template instance with default allocator
using Action =
  ros2srrc_data::msg::Action_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__ACTION__STRUCT_HPP_
