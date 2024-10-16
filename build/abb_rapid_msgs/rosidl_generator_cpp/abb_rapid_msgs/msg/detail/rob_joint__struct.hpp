// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_msgs:msg/RobJoint.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__ROB_JOINT__STRUCT_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__ROB_JOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abb_rapid_msgs__msg__RobJoint __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_msgs__msg__RobJoint __declspec(deprecated)
#endif

namespace abb_rapid_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RobJoint_
{
  using Type = RobJoint_<ContainerAllocator>;

  explicit RobJoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rax_1 = 0.0f;
      this->rax_2 = 0.0f;
      this->rax_3 = 0.0f;
      this->rax_4 = 0.0f;
      this->rax_5 = 0.0f;
      this->rax_6 = 0.0f;
    }
  }

  explicit RobJoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->rax_1 = 0.0f;
      this->rax_2 = 0.0f;
      this->rax_3 = 0.0f;
      this->rax_4 = 0.0f;
      this->rax_5 = 0.0f;
      this->rax_6 = 0.0f;
    }
  }

  // field types and members
  using _rax_1_type =
    float;
  _rax_1_type rax_1;
  using _rax_2_type =
    float;
  _rax_2_type rax_2;
  using _rax_3_type =
    float;
  _rax_3_type rax_3;
  using _rax_4_type =
    float;
  _rax_4_type rax_4;
  using _rax_5_type =
    float;
  _rax_5_type rax_5;
  using _rax_6_type =
    float;
  _rax_6_type rax_6;

  // setters for named parameter idiom
  Type & set__rax_1(
    const float & _arg)
  {
    this->rax_1 = _arg;
    return *this;
  }
  Type & set__rax_2(
    const float & _arg)
  {
    this->rax_2 = _arg;
    return *this;
  }
  Type & set__rax_3(
    const float & _arg)
  {
    this->rax_3 = _arg;
    return *this;
  }
  Type & set__rax_4(
    const float & _arg)
  {
    this->rax_4 = _arg;
    return *this;
  }
  Type & set__rax_5(
    const float & _arg)
  {
    this->rax_5 = _arg;
    return *this;
  }
  Type & set__rax_6(
    const float & _arg)
  {
    this->rax_6 = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_rapid_msgs::msg::RobJoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_msgs::msg::RobJoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::RobJoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::RobJoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::RobJoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::RobJoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::RobJoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::RobJoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::RobJoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::RobJoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_msgs__msg__RobJoint
    std::shared_ptr<abb_rapid_msgs::msg::RobJoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_msgs__msg__RobJoint
    std::shared_ptr<abb_rapid_msgs::msg::RobJoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RobJoint_ & other) const
  {
    if (this->rax_1 != other.rax_1) {
      return false;
    }
    if (this->rax_2 != other.rax_2) {
      return false;
    }
    if (this->rax_3 != other.rax_3) {
      return false;
    }
    if (this->rax_4 != other.rax_4) {
      return false;
    }
    if (this->rax_5 != other.rax_5) {
      return false;
    }
    if (this->rax_6 != other.rax_6) {
      return false;
    }
    return true;
  }
  bool operator!=(const RobJoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RobJoint_

// alias to use template instance with default allocator
using RobJoint =
  abb_rapid_msgs::msg::RobJoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__ROB_JOINT__STRUCT_HPP_
