// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2srrc_data:msg/Joints.idl
// generated code does not contain a copyright notice
#include "ros2srrc_data/msg/detail/joints__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ros2srrc_data__msg__Joints__init(ros2srrc_data__msg__Joints * msg)
{
  if (!msg) {
    return false;
  }
  // joint1
  // joint2
  // joint3
  // joint4
  // joint5
  // joint6
  // joint7
  return true;
}

void
ros2srrc_data__msg__Joints__fini(ros2srrc_data__msg__Joints * msg)
{
  if (!msg) {
    return;
  }
  // joint1
  // joint2
  // joint3
  // joint4
  // joint5
  // joint6
  // joint7
}

bool
ros2srrc_data__msg__Joints__are_equal(const ros2srrc_data__msg__Joints * lhs, const ros2srrc_data__msg__Joints * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint1
  if (lhs->joint1 != rhs->joint1) {
    return false;
  }
  // joint2
  if (lhs->joint2 != rhs->joint2) {
    return false;
  }
  // joint3
  if (lhs->joint3 != rhs->joint3) {
    return false;
  }
  // joint4
  if (lhs->joint4 != rhs->joint4) {
    return false;
  }
  // joint5
  if (lhs->joint5 != rhs->joint5) {
    return false;
  }
  // joint6
  if (lhs->joint6 != rhs->joint6) {
    return false;
  }
  // joint7
  if (lhs->joint7 != rhs->joint7) {
    return false;
  }
  return true;
}

bool
ros2srrc_data__msg__Joints__copy(
  const ros2srrc_data__msg__Joints * input,
  ros2srrc_data__msg__Joints * output)
{
  if (!input || !output) {
    return false;
  }
  // joint1
  output->joint1 = input->joint1;
  // joint2
  output->joint2 = input->joint2;
  // joint3
  output->joint3 = input->joint3;
  // joint4
  output->joint4 = input->joint4;
  // joint5
  output->joint5 = input->joint5;
  // joint6
  output->joint6 = input->joint6;
  // joint7
  output->joint7 = input->joint7;
  return true;
}

ros2srrc_data__msg__Joints *
ros2srrc_data__msg__Joints__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Joints * msg = (ros2srrc_data__msg__Joints *)allocator.allocate(sizeof(ros2srrc_data__msg__Joints), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__msg__Joints));
  bool success = ros2srrc_data__msg__Joints__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__msg__Joints__destroy(ros2srrc_data__msg__Joints * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__msg__Joints__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__msg__Joints__Sequence__init(ros2srrc_data__msg__Joints__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Joints * data = NULL;

  if (size) {
    data = (ros2srrc_data__msg__Joints *)allocator.zero_allocate(size, sizeof(ros2srrc_data__msg__Joints), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__msg__Joints__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__msg__Joints__fini(&data[i - 1]);
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
ros2srrc_data__msg__Joints__Sequence__fini(ros2srrc_data__msg__Joints__Sequence * array)
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
      ros2srrc_data__msg__Joints__fini(&array->data[i]);
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

ros2srrc_data__msg__Joints__Sequence *
ros2srrc_data__msg__Joints__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Joints__Sequence * array = (ros2srrc_data__msg__Joints__Sequence *)allocator.allocate(sizeof(ros2srrc_data__msg__Joints__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__msg__Joints__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__msg__Joints__Sequence__destroy(ros2srrc_data__msg__Joints__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__msg__Joints__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__msg__Joints__Sequence__are_equal(const ros2srrc_data__msg__Joints__Sequence * lhs, const ros2srrc_data__msg__Joints__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__msg__Joints__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__msg__Joints__Sequence__copy(
  const ros2srrc_data__msg__Joints__Sequence * input,
  ros2srrc_data__msg__Joints__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__msg__Joints);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__msg__Joints * data =
      (ros2srrc_data__msg__Joints *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__msg__Joints__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__msg__Joints__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__msg__Joints__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
