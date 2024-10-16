// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2srrc_data:msg/Ypr.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__YPR__STRUCT_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__YPR__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2srrc_data__msg__Ypr __attribute__((deprecated))
#else
# define DEPRECATED__ros2srrc_data__msg__Ypr __declspec(deprecated)
#endif

namespace ros2srrc_data
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Ypr_
{
  using Type = Ypr_<ContainerAllocator>;

  explicit Ypr_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
    }
  }

  explicit Ypr_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0;
      this->pitch = 0.0;
      this->roll = 0.0;
    }
  }

  // field types and members
  using _yaw_type =
    double;
  _yaw_type yaw;
  using _pitch_type =
    double;
  _pitch_type pitch;
  using _roll_type =
    double;
  _roll_type roll;

  // setters for named parameter idiom
  Type & set__yaw(
    const double & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__pitch(
    const double & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__roll(
    const double & _arg)
  {
    this->roll = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2srrc_data::msg::Ypr_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2srrc_data::msg::Ypr_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2srrc_data::msg::Ypr_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2srrc_data::msg::Ypr_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::msg::Ypr_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::msg::Ypr_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::msg::Ypr_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::msg::Ypr_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2srrc_data::msg::Ypr_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2srrc_data::msg::Ypr_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2srrc_data__msg__Ypr
    std::shared_ptr<ros2srrc_data::msg::Ypr_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2srrc_data__msg__Ypr
    std::shared_ptr<ros2srrc_data::msg::Ypr_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Ypr_ & other) const
  {
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    return true;
  }
  bool operator!=(const Ypr_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Ypr_

// alias to use template instance with default allocator
using Ypr =
  ros2srrc_data::msg::Ypr_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__YPR__STRUCT_HPP_
