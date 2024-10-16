// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_rapid_msgs:msg/Orient.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/orient__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
abb_rapid_msgs__msg__Orient__init(abb_rapid_msgs__msg__Orient * msg)
{
  if (!msg) {
    return false;
  }
  // q1
  // q2
  // q3
  // q4
  return true;
}

void
abb_rapid_msgs__msg__Orient__fini(abb_rapid_msgs__msg__Orient * msg)
{
  if (!msg) {
    return;
  }
  // q1
  // q2
  // q3
  // q4
}

bool
abb_rapid_msgs__msg__Orient__are_equal(const abb_rapid_msgs__msg__Orient * lhs, const abb_rapid_msgs__msg__Orient * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // q1
  if (lhs->q1 != rhs->q1) {
    return false;
  }
  // q2
  if (lhs->q2 != rhs->q2) {
    return false;
  }
  // q3
  if (lhs->q3 != rhs->q3) {
    return false;
  }
  // q4
  if (lhs->q4 != rhs->q4) {
    return false;
  }
  return true;
}

bool
abb_rapid_msgs__msg__Orient__copy(
  const abb_rapid_msgs__msg__Orient * input,
  abb_rapid_msgs__msg__Orient * output)
{
  if (!input || !output) {
    return false;
  }
  // q1
  output->q1 = input->q1;
  // q2
  output->q2 = input->q2;
  // q3
  output->q3 = input->q3;
  // q4
  output->q4 = input->q4;
  return true;
}

abb_rapid_msgs__msg__Orient *
abb_rapid_msgs__msg__Orient__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__Orient * msg = (abb_rapid_msgs__msg__Orient *)allocator.allocate(sizeof(abb_rapid_msgs__msg__Orient), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_rapid_msgs__msg__Orient));
  bool success = abb_rapid_msgs__msg__Orient__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_rapid_msgs__msg__Orient__destroy(abb_rapid_msgs__msg__Orient * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_rapid_msgs__msg__Orient__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_rapid_msgs__msg__Orient__Sequence__init(abb_rapid_msgs__msg__Orient__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__Orient * data = NULL;

  if (size) {
    data = (abb_rapid_msgs__msg__Orient *)allocator.zero_allocate(size, sizeof(abb_rapid_msgs__msg__Orient), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_rapid_msgs__msg__Orient__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_rapid_msgs__msg__Orient__fini(&data[i - 1]);
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
abb_rapid_msgs__msg__Orient__Sequence__fini(abb_rapid_msgs__msg__Orient__Sequence * array)
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
      abb_rapid_msgs__msg__Orient__fini(&array->data[i]);
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

abb_rapid_msgs__msg__Orient__Sequence *
abb_rapid_msgs__msg__Orient__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__Orient__Sequence * array = (abb_rapid_msgs__msg__Orient__Sequence *)allocator.allocate(sizeof(abb_rapid_msgs__msg__Orient__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_rapid_msgs__msg__Orient__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_rapid_msgs__msg__Orient__Sequence__destroy(abb_rapid_msgs__msg__Orient__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_rapid_msgs__msg__Orient__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_rapid_msgs__msg__Orient__Sequence__are_equal(const abb_rapid_msgs__msg__Orient__Sequence * lhs, const abb_rapid_msgs__msg__Orient__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_rapid_msgs__msg__Orient__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_rapid_msgs__msg__Orient__Sequence__copy(
  const abb_rapid_msgs__msg__Orient__Sequence * input,
  abb_rapid_msgs__msg__Orient__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_rapid_msgs__msg__Orient);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_rapid_msgs__msg__Orient * data =
      (abb_rapid_msgs__msg__Orient *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_rapid_msgs__msg__Orient__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_rapid_msgs__msg__Orient__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_rapid_msgs__msg__Orient__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
