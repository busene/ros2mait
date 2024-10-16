// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from objectpose_msgs:msg/ObjectPose.idl
// generated code does not contain a copyright notice

#ifndef OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__FUNCTIONS_H_
#define OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "objectpose_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "objectpose_msgs/msg/detail/object_pose__struct.h"

/// Initialize msg/ObjectPose message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * objectpose_msgs__msg__ObjectPose
 * )) before or use
 * objectpose_msgs__msg__ObjectPose__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_objectpose_msgs
bool
objectpose_msgs__msg__ObjectPose__init(objectpose_msgs__msg__ObjectPose * msg);

/// Finalize msg/ObjectPose message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_objectpose_msgs
void
objectpose_msgs__msg__ObjectPose__fini(objectpose_msgs__msg__ObjectPose * msg);

/// Create msg/ObjectPose message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * objectpose_msgs__msg__ObjectPose__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_objectpose_msgs
objectpose_msgs__msg__ObjectPose *
objectpose_msgs__msg__ObjectPose__create();

/// Destroy msg/ObjectPose message.
/**
 * It calls
 * objectpose_msgs__msg__ObjectPose__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_objectpose_msgs
void
objectpose_msgs__msg__ObjectPose__destroy(objectpose_msgs__msg__ObjectPose * msg);

/// Check for msg/ObjectPose message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_objectpose_msgs
bool
objectpose_msgs__msg__ObjectPose__are_equal(const objectpose_msgs__msg__ObjectPose * lhs, const objectpose_msgs__msg__ObjectPose * rhs);

/// Copy a msg/ObjectPose message.
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
ROSIDL_GENERATOR_C_PUBLIC_objectpose_msgs
bool
objectpose_msgs__msg__ObjectPose__copy(
  const objectpose_msgs__msg__ObjectPose * input,
  objectpose_msgs__msg__ObjectPose * output);

/// Initialize array of msg/ObjectPose messages.
/**
 * It allocates the memory for the number of elements and calls
 * objectpose_msgs__msg__ObjectPose__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_objectpose_msgs
bool
objectpose_msgs__msg__ObjectPose__Sequence__init(objectpose_msgs__msg__ObjectPose__Sequence * array, size_t size);

/// Finalize array of msg/ObjectPose messages.
/**
 * It calls
 * objectpose_msgs__msg__ObjectPose__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_objectpose_msgs
void
objectpose_msgs__msg__ObjectPose__Sequence__fini(objectpose_msgs__msg__ObjectPose__Sequence * array);

/// Create array of msg/ObjectPose messages.
/**
 * It allocates the memory for the array and calls
 * objectpose_msgs__msg__ObjectPose__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_objectpose_msgs
objectpose_msgs__msg__ObjectPose__Sequence *
objectpose_msgs__msg__ObjectPose__Sequence__create(size_t size);

/// Destroy array of msg/ObjectPose messages.
/**
 * It calls
 * objectpose_msgs__msg__ObjectPose__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_objectpose_msgs
void
objectpose_msgs__msg__ObjectPose__Sequence__destroy(objectpose_msgs__msg__ObjectPose__Sequence * array);

/// Check for msg/ObjectPose message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_objectpose_msgs
bool
objectpose_msgs__msg__ObjectPose__Sequence__are_equal(const objectpose_msgs__msg__ObjectPose__Sequence * lhs, const objectpose_msgs__msg__ObjectPose__Sequence * rhs);

/// Copy an array of msg/ObjectPose messages.
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
ROSIDL_GENERATOR_C_PUBLIC_objectpose_msgs
bool
objectpose_msgs__msg__ObjectPose__Sequence__copy(
  const objectpose_msgs__msg__ObjectPose__Sequence * input,
  objectpose_msgs__msg__ObjectPose__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OBJECTPOSE_MSGS__MSG__DETAIL__OBJECT_POSE__FUNCTIONS_H_
