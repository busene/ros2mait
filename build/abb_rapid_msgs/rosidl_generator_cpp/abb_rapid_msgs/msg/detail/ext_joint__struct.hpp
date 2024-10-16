// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_msgs:msg/ExtJoint.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__EXT_JOINT__STRUCT_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__EXT_JOINT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abb_rapid_msgs__msg__ExtJoint __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_msgs__msg__ExtJoint __declspec(deprecated)
#endif

namespace abb_rapid_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExtJoint_
{
  using Type = ExtJoint_<ContainerAllocator>;

  explicit ExtJoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eax_a = 0.0f;
      this->eax_b = 0.0f;
      this->eax_c = 0.0f;
      this->eax_d = 0.0f;
      this->eax_e = 0.0f;
      this->eax_f = 0.0f;
    }
  }

  explicit ExtJoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->eax_a = 0.0f;
      this->eax_b = 0.0f;
      this->eax_c = 0.0f;
      this->eax_d = 0.0f;
      this->eax_e = 0.0f;
      this->eax_f = 0.0f;
    }
  }

  // field types and members
  using _eax_a_type =
    float;
  _eax_a_type eax_a;
  using _eax_b_type =
    float;
  _eax_b_type eax_b;
  using _eax_c_type =
    float;
  _eax_c_type eax_c;
  using _eax_d_type =
    float;
  _eax_d_type eax_d;
  using _eax_e_type =
    float;
  _eax_e_type eax_e;
  using _eax_f_type =
    float;
  _eax_f_type eax_f;

  // setters for named parameter idiom
  Type & set__eax_a(
    const float & _arg)
  {
    this->eax_a = _arg;
    return *this;
  }
  Type & set__eax_b(
    const float & _arg)
  {
    this->eax_b = _arg;
    return *this;
  }
  Type & set__eax_c(
    const float & _arg)
  {
    this->eax_c = _arg;
    return *this;
  }
  Type & set__eax_d(
    const float & _arg)
  {
    this->eax_d = _arg;
    return *this;
  }
  Type & set__eax_e(
    const float & _arg)
  {
    this->eax_e = _arg;
    return *this;
  }
  Type & set__eax_f(
    const float & _arg)
  {
    this->eax_f = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_msgs__msg__ExtJoint
    std::shared_ptr<abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_msgs__msg__ExtJoint
    std::shared_ptr<abb_rapid_msgs::msg::ExtJoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExtJoint_ & other) const
  {
    if (this->eax_a != other.eax_a) {
      return false;
    }
    if (this->eax_b != other.eax_b) {
      return false;
    }
    if (this->eax_c != other.eax_c) {
      return false;
    }
    if (this->eax_d != other.eax_d) {
      return false;
    }
    if (this->eax_e != other.eax_e) {
      return false;
    }
    if (this->eax_f != other.eax_f) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExtJoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExtJoint_

// alias to use template instance with default allocator
using ExtJoint =
  abb_rapid_msgs::msg::ExtJoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__EXT_JOINT__STRUCT_HPP_
