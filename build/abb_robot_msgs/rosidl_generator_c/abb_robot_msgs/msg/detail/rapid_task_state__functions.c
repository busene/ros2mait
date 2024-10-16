// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_robot_msgs:msg/RAPIDTaskState.idl
// generated code does not contain a copyright notice
#include "abb_robot_msgs/msg/detail/rapid_task_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
abb_robot_msgs__msg__RAPIDTaskState__init(abb_robot_msgs__msg__RAPIDTaskState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    abb_robot_msgs__msg__RAPIDTaskState__fini(msg);
    return false;
  }
  // activated
  // execution_state
  // motion_task
  return true;
}

void
abb_robot_msgs__msg__RAPIDTaskState__fini(abb_robot_msgs__msg__RAPIDTaskState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // activated
  // execution_state
  // motion_task
}

bool
abb_robot_msgs__msg__RAPIDTaskState__are_equal(const abb_robot_msgs__msg__RAPIDTaskState * lhs, const abb_robot_msgs__msg__RAPIDTaskState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // activated
  if (lhs->activated != rhs->activated) {
    return false;
  }
  // execution_state
  if (lhs->execution_state != rhs->execution_state) {
    return false;
  }
  // motion_task
  if (lhs->motion_task != rhs->motion_task) {
    return false;
  }
  return true;
}

bool
abb_robot_msgs__msg__RAPIDTaskState__copy(
  const abb_robot_msgs__msg__RAPIDTaskState * input,
  abb_robot_msgs__msg__RAPIDTaskState * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // activated
  output->activated = input->activated;
  // execution_state
  output->execution_state = input->execution_state;
  // motion_task
  output->motion_task = input->motion_task;
  return true;
}

abb_robot_msgs__msg__RAPIDTaskState *
abb_robot_msgs__msg__RAPIDTaskState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__msg__RAPIDTaskState * msg = (abb_robot_msgs__msg__RAPIDTaskState *)allocator.allocate(sizeof(abb_robot_msgs__msg__RAPIDTaskState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_robot_msgs__msg__RAPIDTaskState));
  bool success = abb_robot_msgs__msg__RAPIDTaskState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_robot_msgs__msg__RAPIDTaskState__destroy(abb_robot_msgs__msg__RAPIDTaskState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_robot_msgs__msg__RAPIDTaskState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_robot_msgs__msg__RAPIDTaskState__Sequence__init(abb_robot_msgs__msg__RAPIDTaskState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__msg__RAPIDTaskState * data = NULL;

  if (size) {
    data = (abb_robot_msgs__msg__RAPIDTaskState *)allocator.zero_allocate(size, sizeof(abb_robot_msgs__msg__RAPIDTaskState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_robot_msgs__msg__RAPIDTaskState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_robot_msgs__msg__RAPIDTaskState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
abb_robot_msgs__msg__RAPIDTaskState__Sequence__fini(abb_robot_msgs__msg__RAPIDTaskState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      abb_robot_msgs__msg__RAPIDTaskState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

abb_robot_msgs__msg__RAPIDTaskState__Sequence *
abb_robot_msgs__msg__RAPIDTaskState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__msg__RAPIDTaskState__Sequence * array = (abb_robot_msgs__msg__RAPIDTaskState__Sequence *)allocator.allocate(sizeof(abb_robot_msgs__msg__RAPIDTaskState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_robot_msgs__msg__RAPIDTaskState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_robot_msgs__msg__RAPIDTaskState__Sequence__destroy(abb_robot_msgs__msg__RAPIDTaskState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_robot_msgs__msg__RAPIDTaskState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_robot_msgs__msg__RAPIDTaskState__Sequence__are_equal(const abb_robot_msgs__msg__RAPIDTaskState__Sequence * lhs, const abb_robot_msgs__msg__RAPIDTaskState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_robot_msgs__msg__RAPIDTaskState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_robot_msgs__msg__RAPIDTaskState__Sequence__copy(
  const abb_robot_msgs__msg__RAPIDTaskState__Sequence * input,
  abb_robot_msgs__msg__RAPIDTaskState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_robot_msgs__msg__RAPIDTaskState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_robot_msgs__msg__RAPIDTaskState * data =
      (abb_robot_msgs__msg__RAPIDTaskState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_robot_msgs__msg__RAPIDTaskState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_robot_msgs__msg__RAPIDTaskState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_robot_msgs__msg__RAPIDTaskState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
