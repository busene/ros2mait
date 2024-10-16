// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from linkpose_msgs:msg/LinkPose.idl
// generated code does not contain a copyright notice

#ifndef LINKPOSE_MSGS__MSG__DETAIL__LINK_POSE__STRUCT_HPP_
#define LINKPOSE_MSGS__MSG__DETAIL__LINK_POSE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__linkpose_msgs__msg__LinkPose __attribute__((deprecated))
#else
# define DEPRECATED__linkpose_msgs__msg__LinkPose __declspec(deprecated)
#endif

namespace linkpose_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LinkPose_
{
  using Type = LinkPose_<ContainerAllocator>;

  explicit LinkPose_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->modelname = "";
      this->linkname = "";
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->qx = 0.0;
      this->qy = 0.0;
      this->qz = 0.0;
      this->qw = 0.0;
    }
  }

  explicit LinkPose_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : modelname(_alloc),
    linkname(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->modelname = "";
      this->linkname = "";
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
  using _modelname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _modelname_type modelname;
  using _linkname_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _linkname_type linkname;
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
  Type & set__modelname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->modelname = _arg;
    return *this;
  }
  Type & set__linkname(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->linkname = _arg;
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
    linkpose_msgs::msg::LinkPose_<ContainerAllocator> *;
  using ConstRawPtr =
    const linkpose_msgs::msg::LinkPose_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<linkpose_msgs::msg::LinkPose_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<linkpose_msgs::msg::LinkPose_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      linkpose_msgs::msg::LinkPose_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<linkpose_msgs::msg::LinkPose_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      linkpose_msgs::msg::LinkPose_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<linkpose_msgs::msg::LinkPose_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<linkpose_msgs::msg::LinkPose_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<linkpose_msgs::msg::LinkPose_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__linkpose_msgs__msg__LinkPose
    std::shared_ptr<linkpose_msgs::msg::LinkPose_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__linkpose_msgs__msg__LinkPose
    std::shared_ptr<linkpose_msgs::msg::LinkPose_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LinkPose_ & other) const
  {
    if (this->modelname != other.modelname) {
      return false;
    }
    if (this->linkname != other.linkname) {
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
  bool operator!=(const LinkPose_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LinkPose_

// alias to use template instance with default allocator
using LinkPose =
  linkpose_msgs::msg::LinkPose_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace linkpose_msgs

#endif  // LINKPOSE_MSGS__MSG__DETAIL__LINK_POSE__STRUCT_HPP_
