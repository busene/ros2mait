// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_robot_msgs:srv/SetSpeedRatio.idl
// generated code does not contain a copyright notice
#include "abb_robot_msgs/srv/detail/set_speed_ratio__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
abb_robot_msgs__srv__SetSpeedRatio_Request__init(abb_robot_msgs__srv__SetSpeedRatio_Request * msg)
{
  if (!msg) {
    return false;
  }
  // speed_ratio
  return true;
}

void
abb_robot_msgs__srv__SetSpeedRatio_Request__fini(abb_robot_msgs__srv__SetSpeedRatio_Request * msg)
{
  if (!msg) {
    return;
  }
  // speed_ratio
}

bool
abb_robot_msgs__srv__SetSpeedRatio_Request__are_equal(const abb_robot_msgs__srv__SetSpeedRatio_Request * lhs, const abb_robot_msgs__srv__SetSpeedRatio_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed_ratio
  if (lhs->speed_ratio != rhs->speed_ratio) {
    return false;
  }
  return true;
}

bool
abb_robot_msgs__srv__SetSpeedRatio_Request__copy(
  const abb_robot_msgs__srv__SetSpeedRatio_Request * input,
  abb_robot_msgs__srv__SetSpeedRatio_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // speed_ratio
  output->speed_ratio = input->speed_ratio;
  return true;
}

abb_robot_msgs__srv__SetSpeedRatio_Request *
abb_robot_msgs__srv__SetSpeedRatio_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__srv__SetSpeedRatio_Request * msg = (abb_robot_msgs__srv__SetSpeedRatio_Request *)allocator.allocate(sizeof(abb_robot_msgs__srv__SetSpeedRatio_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_robot_msgs__srv__SetSpeedRatio_Request));
  bool success = abb_robot_msgs__srv__SetSpeedRatio_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_robot_msgs__srv__SetSpeedRatio_Request__destroy(abb_robot_msgs__srv__SetSpeedRatio_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_robot_msgs__srv__SetSpeedRatio_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence__init(abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__srv__SetSpeedRatio_Request * data = NULL;

  if (size) {
    data = (abb_robot_msgs__srv__SetSpeedRatio_Request *)allocator.zero_allocate(size, sizeof(abb_robot_msgs__srv__SetSpeedRatio_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_robot_msgs__srv__SetSpeedRatio_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_robot_msgs__srv__SetSpeedRatio_Request__fini(&data[i - 1]);
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
abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence__fini(abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence * array)
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
      abb_robot_msgs__srv__SetSpeedRatio_Request__fini(&array->data[i]);
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

abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence *
abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence * array = (abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence *)allocator.allocate(sizeof(abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence__destroy(abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence__are_equal(const abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence * lhs, const abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_robot_msgs__srv__SetSpeedRatio_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence__copy(
  const abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence * input,
  abb_robot_msgs__srv__SetSpeedRatio_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_robot_msgs__srv__SetSpeedRatio_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_robot_msgs__srv__SetSpeedRatio_Request * data =
      (abb_robot_msgs__srv__SetSpeedRatio_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_robot_msgs__srv__SetSpeedRatio_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_robot_msgs__srv__SetSpeedRatio_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_robot_msgs__srv__SetSpeedRatio_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
abb_robot_msgs__srv__SetSpeedRatio_Response__init(abb_robot_msgs__srv__SetSpeedRatio_Response * msg)
{
  if (!msg) {
    return false;
  }
  // result_code
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    abb_robot_msgs__srv__SetSpeedRatio_Response__fini(msg);
    return false;
  }
  return true;
}

void
abb_robot_msgs__srv__SetSpeedRatio_Response__fini(abb_robot_msgs__srv__SetSpeedRatio_Response * msg)
{
  if (!msg) {
    return;
  }
  // result_code
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
abb_robot_msgs__srv__SetSpeedRatio_Response__are_equal(const abb_robot_msgs__srv__SetSpeedRatio_Response * lhs, const abb_robot_msgs__srv__SetSpeedRatio_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result_code
  if (lhs->result_code != rhs->result_code) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
abb_robot_msgs__srv__SetSpeedRatio_Response__copy(
  const abb_robot_msgs__srv__SetSpeedRatio_Response * input,
  abb_robot_msgs__srv__SetSpeedRatio_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // result_code
  output->result_code = input->result_code;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

abb_robot_msgs__srv__SetSpeedRatio_Response *
abb_robot_msgs__srv__SetSpeedRatio_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__srv__SetSpeedRatio_Response * msg = (abb_robot_msgs__srv__SetSpeedRatio_Response *)allocator.allocate(sizeof(abb_robot_msgs__srv__SetSpeedRatio_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_robot_msgs__srv__SetSpeedRatio_Response));
  bool success = abb_robot_msgs__srv__SetSpeedRatio_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_robot_msgs__srv__SetSpeedRatio_Response__destroy(abb_robot_msgs__srv__SetSpeedRatio_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_robot_msgs__srv__SetSpeedRatio_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence__init(abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__srv__SetSpeedRatio_Response * data = NULL;

  if (size) {
    data = (abb_robot_msgs__srv__SetSpeedRatio_Response *)allocator.zero_allocate(size, sizeof(abb_robot_msgs__srv__SetSpeedRatio_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_robot_msgs__srv__SetSpeedRatio_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_robot_msgs__srv__SetSpeedRatio_Response__fini(&data[i - 1]);
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
abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence__fini(abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence * array)
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
      abb_robot_msgs__srv__SetSpeedRatio_Response__fini(&array->data[i]);
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

abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence *
abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence * array = (abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence *)allocator.allocate(sizeof(abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence__destroy(abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence__are_equal(const abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence * lhs, const abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_robot_msgs__srv__SetSpeedRatio_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence__copy(
  const abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence * input,
  abb_robot_msgs__srv__SetSpeedRatio_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_robot_msgs__srv__SetSpeedRatio_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_robot_msgs__srv__SetSpeedRatio_Response * data =
      (abb_robot_msgs__srv__SetSpeedRatio_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_robot_msgs__srv__SetSpeedRatio_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_robot_msgs__srv__SetSpeedRatio_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_robot_msgs__srv__SetSpeedRatio_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
