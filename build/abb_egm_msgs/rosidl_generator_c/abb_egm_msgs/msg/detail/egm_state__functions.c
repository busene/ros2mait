// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_egm_msgs:msg/EGMState.idl
// generated code does not contain a copyright notice
#include "abb_egm_msgs/msg/detail/egm_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `egm_channels`
#include "abb_egm_msgs/msg/detail/egm_channel_state__functions.h"

bool
abb_egm_msgs__msg__EGMState__init(abb_egm_msgs__msg__EGMState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    abb_egm_msgs__msg__EGMState__fini(msg);
    return false;
  }
  // egm_channels
  if (!abb_egm_msgs__msg__EGMChannelState__Sequence__init(&msg->egm_channels, 0)) {
    abb_egm_msgs__msg__EGMState__fini(msg);
    return false;
  }
  return true;
}

void
abb_egm_msgs__msg__EGMState__fini(abb_egm_msgs__msg__EGMState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // egm_channels
  abb_egm_msgs__msg__EGMChannelState__Sequence__fini(&msg->egm_channels);
}

bool
abb_egm_msgs__msg__EGMState__are_equal(const abb_egm_msgs__msg__EGMState * lhs, const abb_egm_msgs__msg__EGMState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // egm_channels
  if (!abb_egm_msgs__msg__EGMChannelState__Sequence__are_equal(
      &(lhs->egm_channels), &(rhs->egm_channels)))
  {
    return false;
  }
  return true;
}

bool
abb_egm_msgs__msg__EGMState__copy(
  const abb_egm_msgs__msg__EGMState * input,
  abb_egm_msgs__msg__EGMState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // egm_channels
  if (!abb_egm_msgs__msg__EGMChannelState__Sequence__copy(
      &(input->egm_channels), &(output->egm_channels)))
  {
    return false;
  }
  return true;
}

abb_egm_msgs__msg__EGMState *
abb_egm_msgs__msg__EGMState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_egm_msgs__msg__EGMState * msg = (abb_egm_msgs__msg__EGMState *)allocator.allocate(sizeof(abb_egm_msgs__msg__EGMState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_egm_msgs__msg__EGMState));
  bool success = abb_egm_msgs__msg__EGMState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_egm_msgs__msg__EGMState__destroy(abb_egm_msgs__msg__EGMState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_egm_msgs__msg__EGMState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_egm_msgs__msg__EGMState__Sequence__init(abb_egm_msgs__msg__EGMState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_egm_msgs__msg__EGMState * data = NULL;

  if (size) {
    data = (abb_egm_msgs__msg__EGMState *)allocator.zero_allocate(size, sizeof(abb_egm_msgs__msg__EGMState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_egm_msgs__msg__EGMState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_egm_msgs__msg__EGMState__fini(&data[i - 1]);
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
abb_egm_msgs__msg__EGMState__Sequence__fini(abb_egm_msgs__msg__EGMState__Sequence * array)
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
      abb_egm_msgs__msg__EGMState__fini(&array->data[i]);
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

abb_egm_msgs__msg__EGMState__Sequence *
abb_egm_msgs__msg__EGMState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_egm_msgs__msg__EGMState__Sequence * array = (abb_egm_msgs__msg__EGMState__Sequence *)allocator.allocate(sizeof(abb_egm_msgs__msg__EGMState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_egm_msgs__msg__EGMState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_egm_msgs__msg__EGMState__Sequence__destroy(abb_egm_msgs__msg__EGMState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_egm_msgs__msg__EGMState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_egm_msgs__msg__EGMState__Sequence__are_equal(const abb_egm_msgs__msg__EGMState__Sequence * lhs, const abb_egm_msgs__msg__EGMState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_egm_msgs__msg__EGMState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_egm_msgs__msg__EGMState__Sequence__copy(
  const abb_egm_msgs__msg__EGMState__Sequence * input,
  abb_egm_msgs__msg__EGMState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_egm_msgs__msg__EGMState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_egm_msgs__msg__EGMState * data =
      (abb_egm_msgs__msg__EGMState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_egm_msgs__msg__EGMState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_egm_msgs__msg__EGMState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_egm_msgs__msg__EGMState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
