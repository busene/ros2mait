// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_rapid_msgs:msg/Pose.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `trans`
#include "abb_rapid_msgs/msg/detail/pos__functions.h"
// Member `rot`
#include "abb_rapid_msgs/msg/detail/orient__functions.h"

bool
abb_rapid_msgs__msg__Pose__init(abb_rapid_msgs__msg__Pose * msg)
{
  if (!msg) {
    return false;
  }
  // trans
  if (!abb_rapid_msgs__msg__Pos__init(&msg->trans)) {
    abb_rapid_msgs__msg__Pose__fini(msg);
    return false;
  }
  // rot
  if (!abb_rapid_msgs__msg__Orient__init(&msg->rot)) {
    abb_rapid_msgs__msg__Pose__fini(msg);
    return false;
  }
  return true;
}

void
abb_rapid_msgs__msg__Pose__fini(abb_rapid_msgs__msg__Pose * msg)
{
  if (!msg) {
    return;
  }
  // trans
  abb_rapid_msgs__msg__Pos__fini(&msg->trans);
  // rot
  abb_rapid_msgs__msg__Orient__fini(&msg->rot);
}

bool
abb_rapid_msgs__msg__Pose__are_equal(const abb_rapid_msgs__msg__Pose * lhs, const abb_rapid_msgs__msg__Pose * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // trans
  if (!abb_rapid_msgs__msg__Pos__are_equal(
      &(lhs->trans), &(rhs->trans)))
  {
    return false;
  }
  // rot
  if (!abb_rapid_msgs__msg__Orient__are_equal(
      &(lhs->rot), &(rhs->rot)))
  {
    return false;
  }
  return true;
}

bool
abb_rapid_msgs__msg__Pose__copy(
  const abb_rapid_msgs__msg__Pose * input,
  abb_rapid_msgs__msg__Pose * output)
{
  if (!input || !output) {
    return false;
  }
  // trans
  if (!abb_rapid_msgs__msg__Pos__copy(
      &(input->trans), &(output->trans)))
  {
    return false;
  }
  // rot
  if (!abb_rapid_msgs__msg__Orient__copy(
      &(input->rot), &(output->rot)))
  {
    return false;
  }
  return true;
}

abb_rapid_msgs__msg__Pose *
abb_rapid_msgs__msg__Pose__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__Pose * msg = (abb_rapid_msgs__msg__Pose *)allocator.allocate(sizeof(abb_rapid_msgs__msg__Pose), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_rapid_msgs__msg__Pose));
  bool success = abb_rapid_msgs__msg__Pose__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_rapid_msgs__msg__Pose__destroy(abb_rapid_msgs__msg__Pose * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_rapid_msgs__msg__Pose__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_rapid_msgs__msg__Pose__Sequence__init(abb_rapid_msgs__msg__Pose__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__Pose * data = NULL;

  if (size) {
    data = (abb_rapid_msgs__msg__Pose *)allocator.zero_allocate(size, sizeof(abb_rapid_msgs__msg__Pose), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_rapid_msgs__msg__Pose__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_rapid_msgs__msg__Pose__fini(&data[i - 1]);
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
abb_rapid_msgs__msg__Pose__Sequence__fini(abb_rapid_msgs__msg__Pose__Sequence * array)
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
      abb_rapid_msgs__msg__Pose__fini(&array->data[i]);
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

abb_rapid_msgs__msg__Pose__Sequence *
abb_rapid_msgs__msg__Pose__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__Pose__Sequence * array = (abb_rapid_msgs__msg__Pose__Sequence *)allocator.allocate(sizeof(abb_rapid_msgs__msg__Pose__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_rapid_msgs__msg__Pose__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_rapid_msgs__msg__Pose__Sequence__destroy(abb_rapid_msgs__msg__Pose__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_rapid_msgs__msg__Pose__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_rapid_msgs__msg__Pose__Sequence__are_equal(const abb_rapid_msgs__msg__Pose__Sequence * lhs, const abb_rapid_msgs__msg__Pose__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_rapid_msgs__msg__Pose__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_rapid_msgs__msg__Pose__Sequence__copy(
  const abb_rapid_msgs__msg__Pose__Sequence * input,
  abb_rapid_msgs__msg__Pose__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_rapid_msgs__msg__Pose);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_rapid_msgs__msg__Pose * data =
      (abb_rapid_msgs__msg__Pose *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_rapid_msgs__msg__Pose__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_rapid_msgs__msg__Pose__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_rapid_msgs__msg__Pose__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
