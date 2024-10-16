// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from objectpose_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice

#ifndef OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__STRUCT_HPP_
#define OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__objectpose_msgs__msg__ObjectPose __attribute__((deprecated))
#else
# define DEPRECATED__objectpose_msgs__msg__ObjectPose __declspec(deprecated)
#endif

namespace objectpose_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ObjectPose_
{
  using Type = ObjectPose_<ContainerAllocator>;

  explicit ObjectPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->objectname = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->qx = 0.0;
      this->qy = 0.0;
      this->qz = 0.0;
      this->qw = 0.0;
    }
  }

  explicit ObjectPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : objectname(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->objectname = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->qx = 0.0;
      this->qy = 0.0;
      this->qz = 0.0;
      this->qw = 0.0;
    }
  }

  // field types and members
  using _objectname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _objectname_type objectname;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _qx_type =
    double;
  _qx_type qx;
  using _qy_type =
    double;
  _qy_type qy;
  using _qz_type =
    double;
  _qz_type qz;
  using _qw_type =
    double;
  _qw_type qw;

  // setters for named parameter idiom
  Type & set__objectname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->objectname = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__qx(
    const double & _arg)
  {
    this->qx = _arg;
    return *this;
  }
  Type & set__qy(
    const double & _arg)
  {
    this->qy = _arg;
    return *this;
  }
  Type & set__qz(
    const double & _arg)
  {
    this->qz = _arg;
    return *this;
  }
  Type & set__qw(
    const double & _arg)
  {
    this->qw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    objectpose_msgs::msg::ObjectPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const objectpose_msgs::msg::ObjectPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<objectpose_msgs::msg::ObjectPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<objectpose_msgs::msg::ObjectPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      objectpose_msgs::msg::ObjectPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<objectpose_msgs::msg::ObjectPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      objectpose_msgs::msg::ObjectPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<objectpose_msgs::msg::ObjectPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<objectpose_msgs::msg::ObjectPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<objectpose_msgs::msg::ObjectPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__objectpose_msgs__msg__ObjectPose
    std::shared_ptr<objectpose_msgs::msg::ObjectPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__objectpose_msgs__msg__ObjectPose
    std::shared_ptr<objectpose_msgs::msg::ObjectPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ObjectPose_ & other) const
  {
    if (this->objectname != other.objectname) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->qx != other.qx) {
      return false;
    }
    if (this->qy != other.qy) {
      return false;
    }
    if (this->qz != other.qz) {
      return false;
    }
    if (this->qw != other.qw) {
      return false;
    }
    return true;
  }
  bool operator!=(const ObjectPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ObjectPose_

// alias to use template instance with default allocator
using ObjectPose =
  objectpose_msgs::msg::ObjectPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace objectpose_msgs

#endif  // OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__STRUCT_HPP_
