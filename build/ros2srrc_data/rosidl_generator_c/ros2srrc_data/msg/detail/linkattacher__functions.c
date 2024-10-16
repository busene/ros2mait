// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2srrc_data:msg/Linkattacher.idl
// generated code does not contain a copyright notice
#include "ros2srrc_data/msg/detail/linkattacher__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `model1_name`
// Member `link1_name`
// Member `model2_name`
// Member `link2_name`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2srrc_data__msg__Linkattacher__init(ros2srrc_data__msg__Linkattacher * msg)
{
  if (!msg) {
    return false;
  }
  // model1_name
  if (!rosidl_runtime_c__String__init(&msg->model1_name)) {
    ros2srrc_data__msg__Linkattacher__fini(msg);
    return false;
  }
  // link1_name
  if (!rosidl_runtime_c__String__init(&msg->link1_name)) {
    ros2srrc_data__msg__Linkattacher__fini(msg);
    return false;
  }
  // model2_name
  if (!rosidl_runtime_c__String__init(&msg->model2_name)) {
    ros2srrc_data__msg__Linkattacher__fini(msg);
    return false;
  }
  // link2_name
  if (!rosidl_runtime_c__String__init(&msg->link2_name)) {
    ros2srrc_data__msg__Linkattacher__fini(msg);
    return false;
  }
  return true;
}

void
ros2srrc_data__msg__Linkattacher__fini(ros2srrc_data__msg__Linkattacher * msg)
{
  if (!msg) {
    return;
  }
  // model1_name
  rosidl_runtime_c__String__fini(&msg->model1_name);
  // link1_name
  rosidl_runtime_c__String__fini(&msg->link1_name);
  // model2_name
  rosidl_runtime_c__String__fini(&msg->model2_name);
  // link2_name
  rosidl_runtime_c__String__fini(&msg->link2_name);
}

bool
ros2srrc_data__msg__Linkattacher__are_equal(const ros2srrc_data__msg__Linkattacher * lhs, const ros2srrc_data__msg__Linkattacher * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // model1_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model1_name), &(rhs->model1_name)))
  {
    return false;
  }
  // link1_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link1_name), &(rhs->link1_name)))
  {
    return false;
  }
  // model2_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model2_name), &(rhs->model2_name)))
  {
    return false;
  }
  // link2_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->link2_name), &(rhs->link2_name)))
  {
    return false;
  }
  return true;
}

bool
ros2srrc_data__msg__Linkattacher__copy(
  const ros2srrc_data__msg__Linkattacher * input,
  ros2srrc_data__msg__Linkattacher * output)
{
  if (!input || !output) {
    return false;
  }
  // model1_name
  if (!rosidl_runtime_c__String__copy(
      &(input->model1_name), &(output->model1_name)))
  {
    return false;
  }
  // link1_name
  if (!rosidl_runtime_c__String__copy(
      &(input->link1_name), &(output->link1_name)))
  {
    return false;
  }
  // model2_name
  if (!rosidl_runtime_c__String__copy(
      &(input->model2_name), &(output->model2_name)))
  {
    return false;
  }
  // link2_name
  if (!rosidl_runtime_c__String__copy(
      &(input->link2_name), &(output->link2_name)))
  {
    return false;
  }
  return true;
}

ros2srrc_data__msg__Linkattacher *
ros2srrc_data__msg__Linkattacher__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Linkattacher * msg = (ros2srrc_data__msg__Linkattacher *)allocator.allocate(sizeof(ros2srrc_data__msg__Linkattacher), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__msg__Linkattacher));
  bool success = ros2srrc_data__msg__Linkattacher__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__msg__Linkattacher__destroy(ros2srrc_data__msg__Linkattacher * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__msg__Linkattacher__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__msg__Linkattacher__Sequence__init(ros2srrc_data__msg__Linkattacher__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Linkattacher * data = NULL;

  if (size) {
    data = (ros2srrc_data__msg__Linkattacher *)allocator.zero_allocate(size, sizeof(ros2srrc_data__msg__Linkattacher), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__msg__Linkattacher__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__msg__Linkattacher__fini(&data[i - 1]);
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
ros2srrc_data__msg__Linkattacher__Sequence__fini(ros2srrc_data__msg__Linkattacher__Sequence * array)
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
      ros2srrc_data__msg__Linkattacher__fini(&array->data[i]);
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

ros2srrc_data__msg__Linkattacher__Sequence *
ros2srrc_data__msg__Linkattacher__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__msg__Linkattacher__Sequence * array = (ros2srrc_data__msg__Linkattacher__Sequence *)allocator.allocate(sizeof(ros2srrc_data__msg__Linkattacher__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__msg__Linkattacher__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__msg__Linkattacher__Sequence__destroy(ros2srrc_data__msg__Linkattacher__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__msg__Linkattacher__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__msg__Linkattacher__Sequence__are_equal(const ros2srrc_data__msg__Linkattacher__Sequence * lhs, const ros2srrc_data__msg__Linkattacher__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__msg__Linkattacher__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__msg__Linkattacher__Sequence__copy(
  const ros2srrc_data__msg__Linkattacher__Sequence * input,
  ros2srrc_data__msg__Linkattacher__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__msg__Linkattacher);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__msg__Linkattacher * data =
      (ros2srrc_data__msg__Linkattacher *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__msg__Linkattacher__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__msg__Linkattacher__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__msg__Linkattacher__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
