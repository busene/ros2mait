// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_msgs:msg/LoadData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__LOAD_DATA__STRUCT_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__LOAD_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cog'
#include "abb_rapid_msgs/msg/detail/pos__struct.hpp"
// Member 'aom'
#include "abb_rapid_msgs/msg/detail/orient__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__abb_rapid_msgs__msg__LoadData __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_msgs__msg__LoadData __declspec(deprecated)
#endif

namespace abb_rapid_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LoadData_
{
  using Type = LoadData_<ContainerAllocator>;

  explicit LoadData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cog(_init),
    aom(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mass = 0.0f;
      this->ix = 0.0f;
      this->iy = 0.0f;
      this->iz = 0.0f;
    }
  }

  explicit LoadData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cog(_alloc, _init),
    aom(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->mass = 0.0f;
      this->ix = 0.0f;
      this->iy = 0.0f;
      this->iz = 0.0f;
    }
  }

  // field types and members
  using _mass_type =
    float;
  _mass_type mass;
  using _cog_type =
    abb_rapid_msgs::msg::Pos_<ContainerAllocator>;
  _cog_type cog;
  using _aom_type =
    abb_rapid_msgs::msg::Orient_<ContainerAllocator>;
  _aom_type aom;
  using _ix_type =
    float;
  _ix_type ix;
  using _iy_type =
    float;
  _iy_type iy;
  using _iz_type =
    float;
  _iz_type iz;

  // setters for named parameter idiom
  Type & set__mass(
    const float & _arg)
  {
    this->mass = _arg;
    return *this;
  }
  Type & set__cog(
    const abb_rapid_msgs::msg::Pos_<ContainerAllocator> & _arg)
  {
    this->cog = _arg;
    return *this;
  }
  Type & set__aom(
    const abb_rapid_msgs::msg::Orient_<ContainerAllocator> & _arg)
  {
    this->aom = _arg;
    return *this;
  }
  Type & set__ix(
    const float & _arg)
  {
    this->ix = _arg;
    return *this;
  }
  Type & set__iy(
    const float & _arg)
  {
    this->iy = _arg;
    return *this;
  }
  Type & set__iz(
    const float & _arg)
  {
    this->iz = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_rapid_msgs::msg::LoadData_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_msgs::msg::LoadData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::LoadData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::LoadData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::LoadData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::LoadData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::LoadData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::LoadData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::LoadData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::LoadData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_msgs__msg__LoadData
    std::shared_ptr<abb_rapid_msgs::msg::LoadData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_msgs__msg__LoadData
    std::shared_ptr<abb_rapid_msgs::msg::LoadData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LoadData_ & other) const
  {
    if (this->mass != other.mass) {
      return false;
    }
    if (this->cog != other.cog) {
      return false;
    }
    if (this->aom != other.aom) {
      return false;
    }
    if (this->ix != other.ix) {
      return false;
    }
    if (this->iy != other.iy) {
      return false;
    }
    if (this->iz != other.iz) {
      return false;
    }
    return true;
  }
  bool operator!=(const LoadData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LoadData_

// alias to use template instance with default allocator
using LoadData =
  abb_rapid_msgs::msg::LoadData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__LOAD_DATA__STRUCT_HPP_
