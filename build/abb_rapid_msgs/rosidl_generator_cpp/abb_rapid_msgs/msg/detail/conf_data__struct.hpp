// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_msgs:msg/ConfData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__CONF_DATA__STRUCT_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__CONF_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abb_rapid_msgs__msg__ConfData __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_msgs__msg__ConfData __declspec(deprecated)
#endif

namespace abb_rapid_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ConfData_
{
  using Type = ConfData_<ContainerAllocator>;

  explicit ConfData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cf1 = 0.0f;
      this->cf4 = 0.0f;
      this->cf6 = 0.0f;
      this->cfx = 0.0f;
    }
  }

  explicit ConfData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cf1 = 0.0f;
      this->cf4 = 0.0f;
      this->cf6 = 0.0f;
      this->cfx = 0.0f;
    }
  }

  // field types and members
  using _cf1_type =
    float;
  _cf1_type cf1;
  using _cf4_type =
    float;
  _cf4_type cf4;
  using _cf6_type =
    float;
  _cf6_type cf6;
  using _cfx_type =
    float;
  _cfx_type cfx;

  // setters for named parameter idiom
  Type & set__cf1(
    const float & _arg)
  {
    this->cf1 = _arg;
    return *this;
  }
  Type & set__cf4(
    const float & _arg)
  {
    this->cf4 = _arg;
    return *this;
  }
  Type & set__cf6(
    const float & _arg)
  {
    this->cf6 = _arg;
    return *this;
  }
  Type & set__cfx(
    const float & _arg)
  {
    this->cfx = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_rapid_msgs::msg::ConfData_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_msgs::msg::ConfData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::ConfData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::ConfData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::ConfData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::ConfData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::ConfData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::ConfData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::ConfData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::ConfData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_msgs__msg__ConfData
    std::shared_ptr<abb_rapid_msgs::msg::ConfData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_msgs__msg__ConfData
    std::shared_ptr<abb_rapid_msgs::msg::ConfData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ConfData_ & other) const
  {
    if (this->cf1 != other.cf1) {
      return false;
    }
    if (this->cf4 != other.cf4) {
      return false;
    }
    if (this->cf6 != other.cf6) {
      return false;
    }
    if (this->cfx != other.cfx) {
      return false;
    }
    return true;
  }
  bool operator!=(const ConfData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ConfData_

// alias to use template instance with default allocator
using ConfData =
  abb_rapid_msgs::msg::ConfData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__CONF_DATA__STRUCT_HPP_
