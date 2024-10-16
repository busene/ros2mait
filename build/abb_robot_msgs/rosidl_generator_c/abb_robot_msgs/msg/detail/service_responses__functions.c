// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_robot_msgs:msg/ServiceResponses.idl
// generated code does not contain a copyright notice
#include "abb_robot_msgs/msg/detail/service_responses__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
abb_robot_msgs__msg__ServiceResponses__init(abb_robot_msgs__msg__ServiceResponses * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
abb_robot_msgs__msg__ServiceResponses__fini(abb_robot_msgs__msg__ServiceResponses * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
abb_robot_msgs__msg__ServiceResponses__are_equal(const abb_robot_msgs__msg__ServiceResponses * lhs, const abb_robot_msgs__msg__ServiceResponses * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
abb_robot_msgs__msg__ServiceResponses__copy(
  const abb_robot_msgs__msg__ServiceResponses * input,
  abb_robot_msgs__msg__ServiceResponses * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

abb_robot_msgs__msg__ServiceResponses *
abb_robot_msgs__msg__ServiceResponses__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__msg__ServiceResponses * msg = (abb_robot_msgs__msg__ServiceResponses *)allocator.allocate(sizeof(abb_robot_msgs__msg__ServiceResponses), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_robot_msgs__msg__ServiceResponses));
  bool success = abb_robot_msgs__msg__ServiceResponses__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_robot_msgs__msg__ServiceResponses__destroy(abb_robot_msgs__msg__ServiceResponses * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_robot_msgs__msg__ServiceResponses__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_robot_msgs__msg__ServiceResponses__Sequence__init(abb_robot_msgs__msg__ServiceResponses__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__msg__ServiceResponses * data = NULL;

  if (size) {
    data = (abb_robot_msgs__msg__ServiceResponses *)allocator.zero_allocate(size, sizeof(abb_robot_msgs__msg__ServiceResponses), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_robot_msgs__msg__ServiceResponses__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_robot_msgs__msg__ServiceResponses__fini(&data[i - 1]);
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
abb_robot_msgs__msg__ServiceResponses__Sequence__fini(abb_robot_msgs__msg__ServiceResponses__Sequence * array)
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
      abb_robot_msgs__msg__ServiceResponses__fini(&array->data[i]);
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

abb_robot_msgs__msg__ServiceResponses__Sequence *
abb_robot_msgs__msg__ServiceResponses__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__msg__ServiceResponses__Sequence * array = (abb_robot_msgs__msg__ServiceResponses__Sequence *)allocator.allocate(sizeof(abb_robot_msgs__msg__ServiceResponses__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_robot_msgs__msg__ServiceResponses__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_robot_msgs__msg__ServiceResponses__Sequence__destroy(abb_robot_msgs__msg__ServiceResponses__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_robot_msgs__msg__ServiceResponses__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_robot_msgs__msg__ServiceResponses__Sequence__are_equal(const abb_robot_msgs__msg__ServiceResponses__Sequence * lhs, const abb_robot_msgs__msg__ServiceResponses__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_robot_msgs__msg__ServiceResponses__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_robot_msgs__msg__ServiceResponses__Sequence__copy(
  const abb_robot_msgs__msg__ServiceResponses__Sequence * input,
  abb_robot_msgs__msg__ServiceResponses__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_robot_msgs__msg__ServiceResponses);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_robot_msgs__msg__ServiceResponses * data =
      (abb_robot_msgs__msg__ServiceResponses *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_robot_msgs__msg__ServiceResponses__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_robot_msgs__msg__ServiceResponses__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_robot_msgs__msg__ServiceResponses__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
