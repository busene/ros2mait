// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_rapid_msgs:msg/WObjData.idl
// generated code does not contain a copyright notice

#ifndef ABB_RAPID_MSGS__MSG__DETAIL__W_OBJ_DATA__STRUCT_HPP_
#define ABB_RAPID_MSGS__MSG__DETAIL__W_OBJ_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'uframe'
// Member 'oframe'
#include "abb_rapid_msgs/msg/detail/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__abb_rapid_msgs__msg__WObjData __attribute__((deprecated))
#else
# define DEPRECATED__abb_rapid_msgs__msg__WObjData __declspec(deprecated)
#endif

namespace abb_rapid_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WObjData_
{
  using Type = WObjData_<ContainerAllocator>;

  explicit WObjData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : uframe(_init),
    oframe(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robhold = false;
      this->ufprog = false;
      this->ufmec = "";
    }
  }

  explicit WObjData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : ufmec(_alloc),
    uframe(_alloc, _init),
    oframe(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->robhold = false;
      this->ufprog = false;
      this->ufmec = "";
    }
  }

  // field types and members
  using _robhold_type =
    bool;
  _robhold_type robhold;
  using _ufprog_type =
    bool;
  _ufprog_type ufprog;
  using _ufmec_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _ufmec_type ufmec;
  using _uframe_type =
    abb_rapid_msgs::msg::Pose_<ContainerAllocator>;
  _uframe_type uframe;
  using _oframe_type =
    abb_rapid_msgs::msg::Pose_<ContainerAllocator>;
  _oframe_type oframe;

  // setters for named parameter idiom
  Type & set__robhold(
    const bool & _arg)
  {
    this->robhold = _arg;
    return *this;
  }
  Type & set__ufprog(
    const bool & _arg)
  {
    this->ufprog = _arg;
    return *this;
  }
  Type & set__ufmec(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->ufmec = _arg;
    return *this;
  }
  Type & set__uframe(
    const abb_rapid_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->uframe = _arg;
    return *this;
  }
  Type & set__oframe(
    const abb_rapid_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->oframe = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_rapid_msgs::msg::WObjData_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_rapid_msgs::msg::WObjData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::WObjData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_rapid_msgs::msg::WObjData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::WObjData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::WObjData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_rapid_msgs::msg::WObjData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_rapid_msgs::msg::WObjData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::WObjData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_rapid_msgs::msg::WObjData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_rapid_msgs__msg__WObjData
    std::shared_ptr<abb_rapid_msgs::msg::WObjData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_rapid_msgs__msg__WObjData
    std::shared_ptr<abb_rapid_msgs::msg::WObjData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WObjData_ & other) const
  {
    if (this->robhold != other.robhold) {
      return false;
    }
    if (this->ufprog != other.ufprog) {
      return false;
    }
    if (this->ufmec != other.ufmec) {
      return false;
    }
    if (this->uframe != other.uframe) {
      return false;
    }
    if (this->oframe != other.oframe) {
      return false;
    }
    return true;
  }
  bool operator!=(const WObjData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WObjData_

// alias to use template instance with default allocator
using WObjData =
  abb_rapid_msgs::msg::WObjData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace abb_rapid_msgs

#endif  // ABB_RAPID_MSGS__MSG__DETAIL__W_OBJ_DATA__STRUCT_HPP_
