// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros2srrc_data:msg/Joint.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__JOINT__STRUCT_HPP_
#define ROS2SRRC_DATA__MSG__DETAIL__JOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ros2srrc_data__msg__Joint __attribute__((deprecated))
#else
# define DEPRECATED__ros2srrc_data__msg__Joint __declspec(deprecated)
#endif

namespace ros2srrc_data
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Joint_
{
  using Type = Joint_<ContainerAllocator>;

  explicit Joint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint = "";
      this->value = 0.0;
    }
  }

  explicit Joint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : joint(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->joint = "";
      this->value = 0.0;
    }
  }

  // field types and members
  using _joint_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _joint_type joint;
  using _value_type =
    double;
  _value_type value;

  // setters for named parameter idiom
  Type & set__joint(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->joint = _arg;
    return *this;
  }
  Type & set__value(
    const double & _arg)
  {
    this->value = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros2srrc_data::msg::Joint_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros2srrc_data::msg::Joint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros2srrc_data::msg::Joint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros2srrc_data::msg::Joint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::msg::Joint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::msg::Joint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros2srrc_data::msg::Joint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros2srrc_data::msg::Joint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros2srrc_data::msg::Joint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros2srrc_data::msg::Joint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros2srrc_data__msg__Joint
    std::shared_ptr<ros2srrc_data::msg::Joint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros2srrc_data__msg__Joint
    std::shared_ptr<ros2srrc_data::msg::Joint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Joint_ & other) const
  {
    if (this->joint != other.joint) {
      return false;
    }
    if (this->value != other.value) {
      return false;
    }
    return true;
  }
  bool operator!=(const Joint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Joint_

// alias to use template instance with default allocator
using Joint =
  ros2srrc_data::msg::Joint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros2srrc_data

#endif  // ROS2SRRC_DATA__MSG__DETAIL__JOINT__STRUCT_HPP_
