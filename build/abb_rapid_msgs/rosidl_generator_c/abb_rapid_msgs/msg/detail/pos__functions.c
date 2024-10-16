// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_rapid_msgs:msg/Pos.idl
// generated code does not contain a copyright notice
#include "abb_rapid_msgs/msg/detail/pos__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
abb_rapid_msgs__msg__Pos__init(abb_rapid_msgs__msg__Pos * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
abb_rapid_msgs__msg__Pos__fini(abb_rapid_msgs__msg__Pos * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
abb_rapid_msgs__msg__Pos__are_equal(const abb_rapid_msgs__msg__Pos * lhs, const abb_rapid_msgs__msg__Pos * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
abb_rapid_msgs__msg__Pos__copy(
  const abb_rapid_msgs__msg__Pos * input,
  abb_rapid_msgs__msg__Pos * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

abb_rapid_msgs__msg__Pos *
abb_rapid_msgs__msg__Pos__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__Pos * msg = (abb_rapid_msgs__msg__Pos *)allocator.allocate(sizeof(abb_rapid_msgs__msg__Pos), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_rapid_msgs__msg__Pos));
  bool success = abb_rapid_msgs__msg__Pos__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_rapid_msgs__msg__Pos__destroy(abb_rapid_msgs__msg__Pos * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_rapid_msgs__msg__Pos__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_rapid_msgs__msg__Pos__Sequence__init(abb_rapid_msgs__msg__Pos__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__Pos * data = NULL;

  if (size) {
    data = (abb_rapid_msgs__msg__Pos *)allocator.zero_allocate(size, sizeof(abb_rapid_msgs__msg__Pos), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_rapid_msgs__msg__Pos__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_rapid_msgs__msg__Pos__fini(&data[i - 1]);
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
abb_rapid_msgs__msg__Pos__Sequence__fini(abb_rapid_msgs__msg__Pos__Sequence * array)
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
      abb_rapid_msgs__msg__Pos__fini(&array->data[i]);
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

abb_rapid_msgs__msg__Pos__Sequence *
abb_rapid_msgs__msg__Pos__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_msgs__msg__Pos__Sequence * array = (abb_rapid_msgs__msg__Pos__Sequence *)allocator.allocate(sizeof(abb_rapid_msgs__msg__Pos__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_rapid_msgs__msg__Pos__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_rapid_msgs__msg__Pos__Sequence__destroy(abb_rapid_msgs__msg__Pos__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_rapid_msgs__msg__Pos__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_rapid_msgs__msg__Pos__Sequence__are_equal(const abb_rapid_msgs__msg__Pos__Sequence * lhs, const abb_rapid_msgs__msg__Pos__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_rapid_msgs__msg__Pos__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_rapid_msgs__msg__Pos__Sequence__copy(
  const abb_rapid_msgs__msg__Pos__Sequence * input,
  abb_rapid_msgs__msg__Pos__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_rapid_msgs__msg__Pos);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_rapid_msgs__msg__Pos * data =
      (abb_rapid_msgs__msg__Pos *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_rapid_msgs__msg__Pos__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_rapid_msgs__msg__Pos__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_rapid_msgs__msg__Pos__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
