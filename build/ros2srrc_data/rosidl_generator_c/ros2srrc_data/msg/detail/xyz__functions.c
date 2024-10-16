// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2srrc_data:msg/Xyz.idl
// generated code does not contain a copyright notice
#include "ros2srrc_data/msg/detail/xyz__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2srrc_data__msg__Xyz__init(ros2srrc_data__msg__Xyz * msg)
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
ros2srrc_data__msg__Xyz__fini(ros2srrc_data__msg__Xyz * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
ros2srrc_data__msg__Xyz__are_equal(const ros2srrc_data__msg__Xyz * lhs, const ros2srrc_data__msg__Xyz * rhs)
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
ros2srrc_data__msg__Xyz__copy(
  const ros2srrc_data__msg__Xyz * input,
  ros2srrc_data__msg__Xyz * output)
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

ros2srrc_data__msg__Xyz *
ros2srrc_data__msg__Xyz__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Xyz * msg = (ros2srrc_data__msg__Xyz *)allocator.allocate(sizeof(ros2srrc_data__msg__Xyz), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__msg__Xyz));
  bool success = ros2srrc_data__msg__Xyz__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__msg__Xyz__destroy(ros2srrc_data__msg__Xyz * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__msg__Xyz__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__msg__Xyz__Sequence__init(ros2srrc_data__msg__Xyz__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Xyz * data = NULL;

  if (size) {
    data = (ros2srrc_data__msg__Xyz *)allocator.zero_allocate(size, sizeof(ros2srrc_data__msg__Xyz), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__msg__Xyz__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__msg__Xyz__fini(&data[i - 1]);
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
ros2srrc_data__msg__Xyz__Sequence__fini(ros2srrc_data__msg__Xyz__Sequence * array)
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
      ros2srrc_data__msg__Xyz__fini(&array->data[i]);
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

ros2srrc_data__msg__Xyz__Sequence *
ros2srrc_data__msg__Xyz__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Xyz__Sequence * array = (ros2srrc_data__msg__Xyz__Sequence *)allocator.allocate(sizeof(ros2srrc_data__msg__Xyz__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__msg__Xyz__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__msg__Xyz__Sequence__destroy(ros2srrc_data__msg__Xyz__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__msg__Xyz__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__msg__Xyz__Sequence__are_equal(const ros2srrc_data__msg__Xyz__Sequence * lhs, const ros2srrc_data__msg__Xyz__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__msg__Xyz__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__msg__Xyz__Sequence__copy(
  const ros2srrc_data__msg__Xyz__Sequence * input,
  ros2srrc_data__msg__Xyz__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__msg__Xyz);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__msg__Xyz * data =
      (ros2srrc_data__msg__Xyz *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__msg__Xyz__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__msg__Xyz__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__msg__Xyz__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
