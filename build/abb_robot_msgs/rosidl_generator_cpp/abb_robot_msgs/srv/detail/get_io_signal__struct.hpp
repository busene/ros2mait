// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from abb_robot_msgs:srv/GetIOSignal.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__SRV__DETAIL__GET_IO_SIGNAL__STRUCT_HPP_
#define ABB_ROBOT_MSGS__SRV__DETAIL__GET_IO_SIGNAL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__abb_robot_msgs__srv__GetIOSignal_Request __attribute__((deprecated))
#else
# define DEPRECATED__abb_robot_msgs__srv__GetIOSignal_Request __declspec(deprecated)
#endif

namespace abb_robot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetIOSignal_Request_
{
  using Type = GetIOSignal_Request_<ContainerAllocator>;

  explicit GetIOSignal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal = "";
    }
  }

  explicit GetIOSignal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : signal(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->signal = "";
    }
  }

  // field types and members
  using _signal_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _signal_type signal;

  // setters for named parameter idiom
  Type & set__signal(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->signal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_robot_msgs::srv::GetIOSignal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_robot_msgs::srv::GetIOSignal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_robot_msgs::srv::GetIOSignal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_robot_msgs::srv::GetIOSignal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_robot_msgs::srv::GetIOSignal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_robot_msgs::srv::GetIOSignal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_robot_msgs::srv::GetIOSignal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_robot_msgs::srv::GetIOSignal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_robot_msgs::srv::GetIOSignal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_robot_msgs::srv::GetIOSignal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_robot_msgs__srv__GetIOSignal_Request
    std::shared_ptr<abb_robot_msgs::srv::GetIOSignal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_robot_msgs__srv__GetIOSignal_Request
    std::shared_ptr<abb_robot_msgs::srv::GetIOSignal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetIOSignal_Request_ & other) const
  {
    if (this->signal != other.signal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetIOSignal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetIOSignal_Request_

// alias to use template instance with default allocator
using GetIOSignal_Request =
  abb_robot_msgs::srv::GetIOSignal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace abb_robot_msgs


#ifndef _WIN32
# define DEPRECATED__abb_robot_msgs__srv__GetIOSignal_Response __attribute__((deprecated))
#else
# define DEPRECATED__abb_robot_msgs__srv__GetIOSignal_Response __declspec(deprecated)
#endif

namespace abb_robot_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetIOSignal_Response_
{
  using Type = GetIOSignal_Response_<ContainerAllocator>;

  explicit GetIOSignal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = "";
      this->result_code = 0;
      this->message = "";
    }
  }

  explicit GetIOSignal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : value(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->value = "";
      this->result_code = 0;
      this->message = "";
    }
  }

  // field types and members
  using _value_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _value_type value;
  using _result_code_type =
    uint16_t;
  _result_code_type result_code;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__value(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->value = _arg;
    return *this;
  }
  Type & set__result_code(
    const uint16_t & _arg)
  {
    this->result_code = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    abb_robot_msgs::srv::GetIOSignal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const abb_robot_msgs::srv::GetIOSignal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<abb_robot_msgs::srv::GetIOSignal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<abb_robot_msgs::srv::GetIOSignal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      abb_robot_msgs::srv::GetIOSignal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<abb_robot_msgs::srv::GetIOSignal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      abb_robot_msgs::srv::GetIOSignal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<abb_robot_msgs::srv::GetIOSignal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<abb_robot_msgs::srv::GetIOSignal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<abb_robot_msgs::srv::GetIOSignal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__abb_robot_msgs__srv__GetIOSignal_Response
    std::shared_ptr<abb_robot_msgs::srv::GetIOSignal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__abb_robot_msgs__srv__GetIOSignal_Response
    std::shared_ptr<abb_robot_msgs::srv::GetIOSignal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetIOSignal_Response_ & other) const
  {
    if (this->value != other.value) {
      return false;
    }
    if (this->result_code != other.result_code) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetIOSignal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetIOSignal_Response_

// alias to use template instance with default allocator
using GetIOSignal_Response =
  abb_robot_msgs::srv::GetIOSignal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace abb_robot_msgs

namespace abb_robot_msgs
{

namespace srv
{

struct GetIOSignal
{
  using Request = abb_robot_msgs::srv::GetIOSignal_Request;
  using Response = abb_robot_msgs::srv::GetIOSignal_Response;
};

}  // namespace srv

}  // namespace abb_robot_msgs

#endif  // ABB_ROBOT_MSGS__SRV__DETAIL__GET_IO_SIGNAL__STRUCT_HPP_
