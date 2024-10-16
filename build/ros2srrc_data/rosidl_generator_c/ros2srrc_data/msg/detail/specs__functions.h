// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ros2srrc_data:msg/Specs.idl
// generated code does not contain a copyright notice

#ifndef ROS2SRRC_DATA__MSG__DETAIL__SPECS__FUNCTIONS_H_
#define ROS2SRRC_DATA__MSG__DETAIL__SPECS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ros2srrc_data/msg/rosidl_generator_c__visibility_control.h"

#include "ros2srrc_data/msg/detail/specs__struct.h"

/// Initialize msg/Specs message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ros2srrc_data__msg__Specs
 * )) before or use
 * ros2srrc_data__msg__Specs__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__msg__Specs__init(ros2srrc_data__msg__Specs * msg);

/// Finalize msg/Specs message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__msg__Specs__fini(ros2srrc_data__msg__Specs * msg);

/// Create msg/Specs message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ros2srrc_data__msg__Specs__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__msg__Specs *
ros2srrc_data__msg__Specs__create();

/// Destroy msg/Specs message.
/**
 * It calls
 * ros2srrc_data__msg__Specs__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__msg__Specs__destroy(ros2srrc_data__msg__Specs * msg);

/// Check for msg/Specs message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__msg__Specs__are_equal(const ros2srrc_data__msg__Specs * lhs, const ros2srrc_data__msg__Specs * rhs);

/// Copy a msg/Specs message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__msg__Specs__copy(
  const ros2srrc_data__msg__Specs * input,
  ros2srrc_data__msg__Specs * output);

/// Initialize array of msg/Specs messages.
/**
 * It allocates the memory for the number of elements and calls
 * ros2srrc_data__msg__Specs__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__msg__Specs__Sequence__init(ros2srrc_data__msg__Specs__Sequence * array, size_t size);

/// Finalize array of msg/Specs messages.
/**
 * It calls
 * ros2srrc_data__msg__Specs__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__msg__Specs__Sequence__fini(ros2srrc_data__msg__Specs__Sequence * array);

/// Create array of msg/Specs messages.
/**
 * It allocates the memory for the array and calls
 * ros2srrc_data__msg__Specs__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
ros2srrc_data__msg__Specs__Sequence *
ros2srrc_data__msg__Specs__Sequence__create(size_t size);

/// Destroy array of msg/Specs messages.
/**
 * It calls
 * ros2srrc_data__msg__Specs__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
void
ros2srrc_data__msg__Specs__Sequence__destroy(ros2srrc_data__msg__Specs__Sequence * array);

/// Check for msg/Specs message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__msg__Specs__Sequence__are_equal(const ros2srrc_data__msg__Specs__Sequence * lhs, const ros2srrc_data__msg__Specs__Sequence * rhs);

/// Copy an array of msg/Specs messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ros2srrc_data
bool
ros2srrc_data__msg__Specs__Sequence__copy(
  const ros2srrc_data__msg__Specs__Sequence * input,
  ros2srrc_data__msg__Specs__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROS2SRRC_DATA__MSG__DETAIL__SPECS__FUNCTIONS_H_
