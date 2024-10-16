// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2srrc_data:msg/Specs.idl
// generated code does not contain a copyright notice
#include "ros2srrc_data/msg/detail/specs__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ee_vector`
// Member `robot_max`
// Member `robot_min`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ros2srrc_data__msg__Specs__init(ros2srrc_data__msg__Specs * msg)
{
  if (!msg) {
    return false;
  }
  // ee_max
  // ee_min
  // ee_vector
  if (!rosidl_runtime_c__double__Sequence__init(&msg->ee_vector, 0)) {
    ros2srrc_data__msg__Specs__fini(msg);
    return false;
  }
  // robot_max
  if (!rosidl_runtime_c__double__Sequence__init(&msg->robot_max, 0)) {
    ros2srrc_data__msg__Specs__fini(msg);
    return false;
  }
  // robot_min
  if (!rosidl_runtime_c__double__Sequence__init(&msg->robot_min, 0)) {
    ros2srrc_data__msg__Specs__fini(msg);
    return false;
  }
  return true;
}

void
ros2srrc_data__msg__Specs__fini(ros2srrc_data__msg__Specs * msg)
{
  if (!msg) {
    return;
  }
  // ee_max
  // ee_min
  // ee_vector
  rosidl_runtime_c__double__Sequence__fini(&msg->ee_vector);
  // robot_max
  rosidl_runtime_c__double__Sequence__fini(&msg->robot_max);
  // robot_min
  rosidl_runtime_c__double__Sequence__fini(&msg->robot_min);
}

bool
ros2srrc_data__msg__Specs__are_equal(const ros2srrc_data__msg__Specs * lhs, const ros2srrc_data__msg__Specs * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ee_max
  if (lhs->ee_max != rhs->ee_max) {
    return false;
  }
  // ee_min
  if (lhs->ee_min != rhs->ee_min) {
    return false;
  }
  // ee_vector
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->ee_vector), &(rhs->ee_vector)))
  {
    return false;
  }
  // robot_max
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->robot_max), &(rhs->robot_max)))
  {
    return false;
  }
  // robot_min
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->robot_min), &(rhs->robot_min)))
  {
    return false;
  }
  return true;
}

bool
ros2srrc_data__msg__Specs__copy(
  const ros2srrc_data__msg__Specs * input,
  ros2srrc_data__msg__Specs * output)
{
  if (!input || !output) {
    return false;
  }
  // ee_max
  output->ee_max = input->ee_max;
  // ee_min
  output->ee_min = input->ee_min;
  // ee_vector
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->ee_vector), &(output->ee_vector)))
  {
    return false;
  }
  // robot_max
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->robot_max), &(output->robot_max)))
  {
    return false;
  }
  // robot_min
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->robot_min), &(output->robot_min)))
  {
    return false;
  }
  return true;
}

ros2srrc_data__msg__Specs *
ros2srrc_data__msg__Specs__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Specs * msg = (ros2srrc_data__msg__Specs *)allocator.allocate(sizeof(ros2srrc_data__msg__Specs), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__msg__Specs));
  bool success = ros2srrc_data__msg__Specs__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__msg__Specs__destroy(ros2srrc_data__msg__Specs * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__msg__Specs__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__msg__Specs__Sequence__init(ros2srrc_data__msg__Specs__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Specs * data = NULL;

  if (size) {
    data = (ros2srrc_data__msg__Specs *)allocator.zero_allocate(size, sizeof(ros2srrc_data__msg__Specs), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__msg__Specs__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__msg__Specs__fini(&data[i - 1]);
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
ros2srrc_data__msg__Specs__Sequence__fini(ros2srrc_data__msg__Specs__Sequence * array)
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
      ros2srrc_data__msg__Specs__fini(&array->data[i]);
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

ros2srrc_data__msg__Specs__Sequence *
ros2srrc_data__msg__Specs__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Specs__Sequence * array = (ros2srrc_data__msg__Specs__Sequence *)allocator.allocate(sizeof(ros2srrc_data__msg__Specs__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__msg__Specs__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__msg__Specs__Sequence__destroy(ros2srrc_data__msg__Specs__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__msg__Specs__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__msg__Specs__Sequence__are_equal(const ros2srrc_data__msg__Specs__Sequence * lhs, const ros2srrc_data__msg__Specs__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__msg__Specs__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__msg__Specs__Sequence__copy(
  const ros2srrc_data__msg__Specs__Sequence * input,
  ros2srrc_data__msg__Specs__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__msg__Specs);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__msg__Specs * data =
      (ros2srrc_data__msg__Specs *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__msg__Specs__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__msg__Specs__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__msg__Specs__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
