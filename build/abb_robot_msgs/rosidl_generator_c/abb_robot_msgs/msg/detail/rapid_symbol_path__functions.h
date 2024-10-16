// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from abb_robot_msgs:msg/RAPIDSymbolPath.idl
// generated code does not contain a copyright notice

#ifndef ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__FUNCTIONS_H_
#define ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "abb_robot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "abb_robot_msgs/msg/detail/rapid_symbol_path__struct.h"

/// Initialize msg/RAPIDSymbolPath message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * abb_robot_msgs__msg__RAPIDSymbolPath
 * )) before or use
 * abb_robot_msgs__msg__RAPIDSymbolPath__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__msg__RAPIDSymbolPath__init(abb_robot_msgs__msg__RAPIDSymbolPath * msg);

/// Finalize msg/RAPIDSymbolPath message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
void
abb_robot_msgs__msg__RAPIDSymbolPath__fini(abb_robot_msgs__msg__RAPIDSymbolPath * msg);

/// Create msg/RAPIDSymbolPath message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * abb_robot_msgs__msg__RAPIDSymbolPath__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
abb_robot_msgs__msg__RAPIDSymbolPath *
abb_robot_msgs__msg__RAPIDSymbolPath__create();

/// Destroy msg/RAPIDSymbolPath message.
/**
 * It calls
 * abb_robot_msgs__msg__RAPIDSymbolPath__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
void
abb_robot_msgs__msg__RAPIDSymbolPath__destroy(abb_robot_msgs__msg__RAPIDSymbolPath * msg);

/// Check for msg/RAPIDSymbolPath message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__msg__RAPIDSymbolPath__are_equal(const abb_robot_msgs__msg__RAPIDSymbolPath * lhs, const abb_robot_msgs__msg__RAPIDSymbolPath * rhs);

/// Copy a msg/RAPIDSymbolPath message.
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
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__msg__RAPIDSymbolPath__copy(
  const abb_robot_msgs__msg__RAPIDSymbolPath * input,
  abb_robot_msgs__msg__RAPIDSymbolPath * output);

/// Initialize array of msg/RAPIDSymbolPath messages.
/**
 * It allocates the memory for the number of elements and calls
 * abb_robot_msgs__msg__RAPIDSymbolPath__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__msg__RAPIDSymbolPath__Sequence__init(abb_robot_msgs__msg__RAPIDSymbolPath__Sequence * array, size_t size);

/// Finalize array of msg/RAPIDSymbolPath messages.
/**
 * It calls
 * abb_robot_msgs__msg__RAPIDSymbolPath__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
void
abb_robot_msgs__msg__RAPIDSymbolPath__Sequence__fini(abb_robot_msgs__msg__RAPIDSymbolPath__Sequence * array);

/// Create array of msg/RAPIDSymbolPath messages.
/**
 * It allocates the memory for the array and calls
 * abb_robot_msgs__msg__RAPIDSymbolPath__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
abb_robot_msgs__msg__RAPIDSymbolPath__Sequence *
abb_robot_msgs__msg__RAPIDSymbolPath__Sequence__create(size_t size);

/// Destroy array of msg/RAPIDSymbolPath messages.
/**
 * It calls
 * abb_robot_msgs__msg__RAPIDSymbolPath__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
void
abb_robot_msgs__msg__RAPIDSymbolPath__Sequence__destroy(abb_robot_msgs__msg__RAPIDSymbolPath__Sequence * array);

/// Check for msg/RAPIDSymbolPath message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__msg__RAPIDSymbolPath__Sequence__are_equal(const abb_robot_msgs__msg__RAPIDSymbolPath__Sequence * lhs, const abb_robot_msgs__msg__RAPIDSymbolPath__Sequence * rhs);

/// Copy an array of msg/RAPIDSymbolPath messages.
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
ROSIDL_GENERATOR_C_PUBLIC_abb_robot_msgs
bool
abb_robot_msgs__msg__RAPIDSymbolPath__Sequence__copy(
  const abb_robot_msgs__msg__RAPIDSymbolPath__Sequence * input,
  abb_robot_msgs__msg__RAPIDSymbolPath__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ABB_ROBOT_MSGS__MSG__DETAIL__RAPID_SYMBOL_PATH__FUNCTIONS_H_
