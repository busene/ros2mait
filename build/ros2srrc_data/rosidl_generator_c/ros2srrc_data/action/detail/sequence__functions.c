// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros2srrc_data:action/Sequence.idl
// generated code does not contain a copyright notice
#include "ros2srrc_data/action/detail/sequence__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sequence`
#include "ros2srrc_data/msg/detail/action__functions.h"
// Member `robot`
// Member `endeffector`
// Member `environment`
#include "rosidl_runtime_c/string_functions.h"

bool
ros2srrc_data__action__Sequence_Goal__init(ros2srrc_data__action__Sequence_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // sequence
  if (!ros2srrc_data__msg__Action__Sequence__init(&msg->sequence, 0)) {
    ros2srrc_data__action__Sequence_Goal__fini(msg);
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__init(&msg->robot)) {
    ros2srrc_data__action__Sequence_Goal__fini(msg);
    return false;
  }
  // endeffector
  if (!rosidl_runtime_c__String__init(&msg->endeffector)) {
    ros2srrc_data__action__Sequence_Goal__fini(msg);
    return false;
  }
  // environment
  if (!rosidl_runtime_c__String__init(&msg->environment)) {
    ros2srrc_data__action__Sequence_Goal__fini(msg);
    return false;
  }
  return true;
}

void
ros2srrc_data__action__Sequence_Goal__fini(ros2srrc_data__action__Sequence_Goal * msg)
{
  if (!msg) {
    return;
  }
  // sequence
  ros2srrc_data__msg__Action__Sequence__fini(&msg->sequence);
  // robot
  rosidl_runtime_c__String__fini(&msg->robot);
  // endeffector
  rosidl_runtime_c__String__fini(&msg->endeffector);
  // environment
  rosidl_runtime_c__String__fini(&msg->environment);
}

bool
ros2srrc_data__action__Sequence_Goal__are_equal(const ros2srrc_data__action__Sequence_Goal * lhs, const ros2srrc_data__action__Sequence_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sequence
  if (!ros2srrc_data__msg__Action__Sequence__are_equal(
      &(lhs->sequence), &(rhs->sequence)))
  {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot), &(rhs->robot)))
  {
    return false;
  }
  // endeffector
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->endeffector), &(rhs->endeffector)))
  {
    return false;
  }
  // environment
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->environment), &(rhs->environment)))
  {
    return false;
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_Goal__copy(
  const ros2srrc_data__action__Sequence_Goal * input,
  ros2srrc_data__action__Sequence_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // sequence
  if (!ros2srrc_data__msg__Action__Sequence__copy(
      &(input->sequence), &(output->sequence)))
  {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__copy(
      &(input->robot), &(output->robot)))
  {
    return false;
  }
  // endeffector
  if (!rosidl_runtime_c__String__copy(
      &(input->endeffector), &(output->endeffector)))
  {
    return false;
  }
  // environment
  if (!rosidl_runtime_c__String__copy(
      &(input->environment), &(output->environment)))
  {
    return false;
  }
  return true;
}

ros2srrc_data__action__Sequence_Goal *
ros2srrc_data__action__Sequence_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_Goal * msg = (ros2srrc_data__action__Sequence_Goal *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__action__Sequence_Goal));
  bool success = ros2srrc_data__action__Sequence_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__action__Sequence_Goal__destroy(ros2srrc_data__action__Sequence_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__action__Sequence_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__action__Sequence_Goal__Sequence__init(ros2srrc_data__action__Sequence_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_Goal * data = NULL;

  if (size) {
    data = (ros2srrc_data__action__Sequence_Goal *)allocator.zero_allocate(size, sizeof(ros2srrc_data__action__Sequence_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__action__Sequence_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__action__Sequence_Goal__fini(&data[i - 1]);
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
ros2srrc_data__action__Sequence_Goal__Sequence__fini(ros2srrc_data__action__Sequence_Goal__Sequence * array)
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
      ros2srrc_data__action__Sequence_Goal__fini(&array->data[i]);
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

ros2srrc_data__action__Sequence_Goal__Sequence *
ros2srrc_data__action__Sequence_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_Goal__Sequence * array = (ros2srrc_data__action__Sequence_Goal__Sequence *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__action__Sequence_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__action__Sequence_Goal__Sequence__destroy(ros2srrc_data__action__Sequence_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__action__Sequence_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__action__Sequence_Goal__Sequence__are_equal(const ros2srrc_data__action__Sequence_Goal__Sequence * lhs, const ros2srrc_data__action__Sequence_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__action__Sequence_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_Goal__Sequence__copy(
  const ros2srrc_data__action__Sequence_Goal__Sequence * input,
  ros2srrc_data__action__Sequence_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__action__Sequence_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__action__Sequence_Goal * data =
      (ros2srrc_data__action__Sequence_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__action__Sequence_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__action__Sequence_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__action__Sequence_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ros2srrc_data__action__Sequence_Result__init(ros2srrc_data__action__Sequence_Result * msg)
{
  if (!msg) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__init(&msg->result)) {
    ros2srrc_data__action__Sequence_Result__fini(msg);
    return false;
  }
  return true;
}

void
ros2srrc_data__action__Sequence_Result__fini(ros2srrc_data__action__Sequence_Result * msg)
{
  if (!msg) {
    return;
  }
  // result
  rosidl_runtime_c__String__fini(&msg->result);
}

bool
ros2srrc_data__action__Sequence_Result__are_equal(const ros2srrc_data__action__Sequence_Result * lhs, const ros2srrc_data__action__Sequence_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_Result__copy(
  const ros2srrc_data__action__Sequence_Result * input,
  ros2srrc_data__action__Sequence_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // result
  if (!rosidl_runtime_c__String__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ros2srrc_data__action__Sequence_Result *
ros2srrc_data__action__Sequence_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_Result * msg = (ros2srrc_data__action__Sequence_Result *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__action__Sequence_Result));
  bool success = ros2srrc_data__action__Sequence_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__action__Sequence_Result__destroy(ros2srrc_data__action__Sequence_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__action__Sequence_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__action__Sequence_Result__Sequence__init(ros2srrc_data__action__Sequence_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_Result * data = NULL;

  if (size) {
    data = (ros2srrc_data__action__Sequence_Result *)allocator.zero_allocate(size, sizeof(ros2srrc_data__action__Sequence_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__action__Sequence_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__action__Sequence_Result__fini(&data[i - 1]);
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
ros2srrc_data__action__Sequence_Result__Sequence__fini(ros2srrc_data__action__Sequence_Result__Sequence * array)
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
      ros2srrc_data__action__Sequence_Result__fini(&array->data[i]);
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

ros2srrc_data__action__Sequence_Result__Sequence *
ros2srrc_data__action__Sequence_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_Result__Sequence * array = (ros2srrc_data__action__Sequence_Result__Sequence *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__action__Sequence_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__action__Sequence_Result__Sequence__destroy(ros2srrc_data__action__Sequence_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__action__Sequence_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__action__Sequence_Result__Sequence__are_equal(const ros2srrc_data__action__Sequence_Result__Sequence * lhs, const ros2srrc_data__action__Sequence_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__action__Sequence_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_Result__Sequence__copy(
  const ros2srrc_data__action__Sequence_Result__Sequence * input,
  ros2srrc_data__action__Sequence_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__action__Sequence_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__action__Sequence_Result * data =
      (ros2srrc_data__action__Sequence_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__action__Sequence_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__action__Sequence_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__action__Sequence_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `feedback`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
ros2srrc_data__action__Sequence_Feedback__init(ros2srrc_data__action__Sequence_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__init(&msg->feedback)) {
    ros2srrc_data__action__Sequence_Feedback__fini(msg);
    return false;
  }
  return true;
}

void
ros2srrc_data__action__Sequence_Feedback__fini(ros2srrc_data__action__Sequence_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // feedback
  rosidl_runtime_c__String__fini(&msg->feedback);
}

bool
ros2srrc_data__action__Sequence_Feedback__are_equal(const ros2srrc_data__action__Sequence_Feedback * lhs, const ros2srrc_data__action__Sequence_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_Feedback__copy(
  const ros2srrc_data__action__Sequence_Feedback * input,
  ros2srrc_data__action__Sequence_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // feedback
  if (!rosidl_runtime_c__String__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ros2srrc_data__action__Sequence_Feedback *
ros2srrc_data__action__Sequence_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_Feedback * msg = (ros2srrc_data__action__Sequence_Feedback *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__action__Sequence_Feedback));
  bool success = ros2srrc_data__action__Sequence_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__action__Sequence_Feedback__destroy(ros2srrc_data__action__Sequence_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__action__Sequence_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__action__Sequence_Feedback__Sequence__init(ros2srrc_data__action__Sequence_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_Feedback * data = NULL;

  if (size) {
    data = (ros2srrc_data__action__Sequence_Feedback *)allocator.zero_allocate(size, sizeof(ros2srrc_data__action__Sequence_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__action__Sequence_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__action__Sequence_Feedback__fini(&data[i - 1]);
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
ros2srrc_data__action__Sequence_Feedback__Sequence__fini(ros2srrc_data__action__Sequence_Feedback__Sequence * array)
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
      ros2srrc_data__action__Sequence_Feedback__fini(&array->data[i]);
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

ros2srrc_data__action__Sequence_Feedback__Sequence *
ros2srrc_data__action__Sequence_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_Feedback__Sequence * array = (ros2srrc_data__action__Sequence_Feedback__Sequence *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__action__Sequence_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__action__Sequence_Feedback__Sequence__destroy(ros2srrc_data__action__Sequence_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__action__Sequence_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__action__Sequence_Feedback__Sequence__are_equal(const ros2srrc_data__action__Sequence_Feedback__Sequence * lhs, const ros2srrc_data__action__Sequence_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__action__Sequence_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_Feedback__Sequence__copy(
  const ros2srrc_data__action__Sequence_Feedback__Sequence * input,
  ros2srrc_data__action__Sequence_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__action__Sequence_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__action__Sequence_Feedback * data =
      (ros2srrc_data__action__Sequence_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__action__Sequence_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__action__Sequence_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__action__Sequence_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "ros2srrc_data/action/detail/sequence__functions.h"

bool
ros2srrc_data__action__Sequence_SendGoal_Request__init(ros2srrc_data__action__Sequence_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros2srrc_data__action__Sequence_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!ros2srrc_data__action__Sequence_Goal__init(&msg->goal)) {
    ros2srrc_data__action__Sequence_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros2srrc_data__action__Sequence_SendGoal_Request__fini(ros2srrc_data__action__Sequence_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  ros2srrc_data__action__Sequence_Goal__fini(&msg->goal);
}

bool
ros2srrc_data__action__Sequence_SendGoal_Request__are_equal(const ros2srrc_data__action__Sequence_SendGoal_Request * lhs, const ros2srrc_data__action__Sequence_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!ros2srrc_data__action__Sequence_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_SendGoal_Request__copy(
  const ros2srrc_data__action__Sequence_SendGoal_Request * input,
  ros2srrc_data__action__Sequence_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!ros2srrc_data__action__Sequence_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

ros2srrc_data__action__Sequence_SendGoal_Request *
ros2srrc_data__action__Sequence_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_SendGoal_Request * msg = (ros2srrc_data__action__Sequence_SendGoal_Request *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__action__Sequence_SendGoal_Request));
  bool success = ros2srrc_data__action__Sequence_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__action__Sequence_SendGoal_Request__destroy(ros2srrc_data__action__Sequence_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__action__Sequence_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__action__Sequence_SendGoal_Request__Sequence__init(ros2srrc_data__action__Sequence_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_SendGoal_Request * data = NULL;

  if (size) {
    data = (ros2srrc_data__action__Sequence_SendGoal_Request *)allocator.zero_allocate(size, sizeof(ros2srrc_data__action__Sequence_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__action__Sequence_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__action__Sequence_SendGoal_Request__fini(&data[i - 1]);
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
ros2srrc_data__action__Sequence_SendGoal_Request__Sequence__fini(ros2srrc_data__action__Sequence_SendGoal_Request__Sequence * array)
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
      ros2srrc_data__action__Sequence_SendGoal_Request__fini(&array->data[i]);
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

ros2srrc_data__action__Sequence_SendGoal_Request__Sequence *
ros2srrc_data__action__Sequence_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_SendGoal_Request__Sequence * array = (ros2srrc_data__action__Sequence_SendGoal_Request__Sequence *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__action__Sequence_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__action__Sequence_SendGoal_Request__Sequence__destroy(ros2srrc_data__action__Sequence_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__action__Sequence_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__action__Sequence_SendGoal_Request__Sequence__are_equal(const ros2srrc_data__action__Sequence_SendGoal_Request__Sequence * lhs, const ros2srrc_data__action__Sequence_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__action__Sequence_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_SendGoal_Request__Sequence__copy(
  const ros2srrc_data__action__Sequence_SendGoal_Request__Sequence * input,
  ros2srrc_data__action__Sequence_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__action__Sequence_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__action__Sequence_SendGoal_Request * data =
      (ros2srrc_data__action__Sequence_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__action__Sequence_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__action__Sequence_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__action__Sequence_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
ros2srrc_data__action__Sequence_SendGoal_Response__init(ros2srrc_data__action__Sequence_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    ros2srrc_data__action__Sequence_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros2srrc_data__action__Sequence_SendGoal_Response__fini(ros2srrc_data__action__Sequence_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
ros2srrc_data__action__Sequence_SendGoal_Response__are_equal(const ros2srrc_data__action__Sequence_SendGoal_Response * lhs, const ros2srrc_data__action__Sequence_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_SendGoal_Response__copy(
  const ros2srrc_data__action__Sequence_SendGoal_Response * input,
  ros2srrc_data__action__Sequence_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

ros2srrc_data__action__Sequence_SendGoal_Response *
ros2srrc_data__action__Sequence_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_SendGoal_Response * msg = (ros2srrc_data__action__Sequence_SendGoal_Response *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__action__Sequence_SendGoal_Response));
  bool success = ros2srrc_data__action__Sequence_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__action__Sequence_SendGoal_Response__destroy(ros2srrc_data__action__Sequence_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__action__Sequence_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__action__Sequence_SendGoal_Response__Sequence__init(ros2srrc_data__action__Sequence_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_SendGoal_Response * data = NULL;

  if (size) {
    data = (ros2srrc_data__action__Sequence_SendGoal_Response *)allocator.zero_allocate(size, sizeof(ros2srrc_data__action__Sequence_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__action__Sequence_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__action__Sequence_SendGoal_Response__fini(&data[i - 1]);
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
ros2srrc_data__action__Sequence_SendGoal_Response__Sequence__fini(ros2srrc_data__action__Sequence_SendGoal_Response__Sequence * array)
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
      ros2srrc_data__action__Sequence_SendGoal_Response__fini(&array->data[i]);
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

ros2srrc_data__action__Sequence_SendGoal_Response__Sequence *
ros2srrc_data__action__Sequence_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_SendGoal_Response__Sequence * array = (ros2srrc_data__action__Sequence_SendGoal_Response__Sequence *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__action__Sequence_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__action__Sequence_SendGoal_Response__Sequence__destroy(ros2srrc_data__action__Sequence_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__action__Sequence_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__action__Sequence_SendGoal_Response__Sequence__are_equal(const ros2srrc_data__action__Sequence_SendGoal_Response__Sequence * lhs, const ros2srrc_data__action__Sequence_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__action__Sequence_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_SendGoal_Response__Sequence__copy(
  const ros2srrc_data__action__Sequence_SendGoal_Response__Sequence * input,
  ros2srrc_data__action__Sequence_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__action__Sequence_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__action__Sequence_SendGoal_Response * data =
      (ros2srrc_data__action__Sequence_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__action__Sequence_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__action__Sequence_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__action__Sequence_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
ros2srrc_data__action__Sequence_GetResult_Request__init(ros2srrc_data__action__Sequence_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros2srrc_data__action__Sequence_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
ros2srrc_data__action__Sequence_GetResult_Request__fini(ros2srrc_data__action__Sequence_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
ros2srrc_data__action__Sequence_GetResult_Request__are_equal(const ros2srrc_data__action__Sequence_GetResult_Request * lhs, const ros2srrc_data__action__Sequence_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_GetResult_Request__copy(
  const ros2srrc_data__action__Sequence_GetResult_Request * input,
  ros2srrc_data__action__Sequence_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

ros2srrc_data__action__Sequence_GetResult_Request *
ros2srrc_data__action__Sequence_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_GetResult_Request * msg = (ros2srrc_data__action__Sequence_GetResult_Request *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__action__Sequence_GetResult_Request));
  bool success = ros2srrc_data__action__Sequence_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__action__Sequence_GetResult_Request__destroy(ros2srrc_data__action__Sequence_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__action__Sequence_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__action__Sequence_GetResult_Request__Sequence__init(ros2srrc_data__action__Sequence_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_GetResult_Request * data = NULL;

  if (size) {
    data = (ros2srrc_data__action__Sequence_GetResult_Request *)allocator.zero_allocate(size, sizeof(ros2srrc_data__action__Sequence_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__action__Sequence_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__action__Sequence_GetResult_Request__fini(&data[i - 1]);
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
ros2srrc_data__action__Sequence_GetResult_Request__Sequence__fini(ros2srrc_data__action__Sequence_GetResult_Request__Sequence * array)
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
      ros2srrc_data__action__Sequence_GetResult_Request__fini(&array->data[i]);
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

ros2srrc_data__action__Sequence_GetResult_Request__Sequence *
ros2srrc_data__action__Sequence_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_GetResult_Request__Sequence * array = (ros2srrc_data__action__Sequence_GetResult_Request__Sequence *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__action__Sequence_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__action__Sequence_GetResult_Request__Sequence__destroy(ros2srrc_data__action__Sequence_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__action__Sequence_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__action__Sequence_GetResult_Request__Sequence__are_equal(const ros2srrc_data__action__Sequence_GetResult_Request__Sequence * lhs, const ros2srrc_data__action__Sequence_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__action__Sequence_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_GetResult_Request__Sequence__copy(
  const ros2srrc_data__action__Sequence_GetResult_Request__Sequence * input,
  ros2srrc_data__action__Sequence_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__action__Sequence_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__action__Sequence_GetResult_Request * data =
      (ros2srrc_data__action__Sequence_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__action__Sequence_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__action__Sequence_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__action__Sequence_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "ros2srrc_data/action/detail/sequence__functions.h"

bool
ros2srrc_data__action__Sequence_GetResult_Response__init(ros2srrc_data__action__Sequence_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!ros2srrc_data__action__Sequence_Result__init(&msg->result)) {
    ros2srrc_data__action__Sequence_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
ros2srrc_data__action__Sequence_GetResult_Response__fini(ros2srrc_data__action__Sequence_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  ros2srrc_data__action__Sequence_Result__fini(&msg->result);
}

bool
ros2srrc_data__action__Sequence_GetResult_Response__are_equal(const ros2srrc_data__action__Sequence_GetResult_Response * lhs, const ros2srrc_data__action__Sequence_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!ros2srrc_data__action__Sequence_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_GetResult_Response__copy(
  const ros2srrc_data__action__Sequence_GetResult_Response * input,
  ros2srrc_data__action__Sequence_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!ros2srrc_data__action__Sequence_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

ros2srrc_data__action__Sequence_GetResult_Response *
ros2srrc_data__action__Sequence_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_GetResult_Response * msg = (ros2srrc_data__action__Sequence_GetResult_Response *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__action__Sequence_GetResult_Response));
  bool success = ros2srrc_data__action__Sequence_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__action__Sequence_GetResult_Response__destroy(ros2srrc_data__action__Sequence_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__action__Sequence_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__action__Sequence_GetResult_Response__Sequence__init(ros2srrc_data__action__Sequence_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_GetResult_Response * data = NULL;

  if (size) {
    data = (ros2srrc_data__action__Sequence_GetResult_Response *)allocator.zero_allocate(size, sizeof(ros2srrc_data__action__Sequence_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__action__Sequence_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__action__Sequence_GetResult_Response__fini(&data[i - 1]);
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
ros2srrc_data__action__Sequence_GetResult_Response__Sequence__fini(ros2srrc_data__action__Sequence_GetResult_Response__Sequence * array)
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
      ros2srrc_data__action__Sequence_GetResult_Response__fini(&array->data[i]);
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

ros2srrc_data__action__Sequence_GetResult_Response__Sequence *
ros2srrc_data__action__Sequence_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_GetResult_Response__Sequence * array = (ros2srrc_data__action__Sequence_GetResult_Response__Sequence *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__action__Sequence_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__action__Sequence_GetResult_Response__Sequence__destroy(ros2srrc_data__action__Sequence_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__action__Sequence_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__action__Sequence_GetResult_Response__Sequence__are_equal(const ros2srrc_data__action__Sequence_GetResult_Response__Sequence * lhs, const ros2srrc_data__action__Sequence_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__action__Sequence_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_GetResult_Response__Sequence__copy(
  const ros2srrc_data__action__Sequence_GetResult_Response__Sequence * input,
  ros2srrc_data__action__Sequence_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__action__Sequence_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__action__Sequence_GetResult_Response * data =
      (ros2srrc_data__action__Sequence_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__action__Sequence_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__action__Sequence_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__action__Sequence_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "ros2srrc_data/action/detail/sequence__functions.h"

bool
ros2srrc_data__action__Sequence_FeedbackMessage__init(ros2srrc_data__action__Sequence_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    ros2srrc_data__action__Sequence_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!ros2srrc_data__action__Sequence_Feedback__init(&msg->feedback)) {
    ros2srrc_data__action__Sequence_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
ros2srrc_data__action__Sequence_FeedbackMessage__fini(ros2srrc_data__action__Sequence_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  ros2srrc_data__action__Sequence_Feedback__fini(&msg->feedback);
}

bool
ros2srrc_data__action__Sequence_FeedbackMessage__are_equal(const ros2srrc_data__action__Sequence_FeedbackMessage * lhs, const ros2srrc_data__action__Sequence_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ros2srrc_data__action__Sequence_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_FeedbackMessage__copy(
  const ros2srrc_data__action__Sequence_FeedbackMessage * input,
  ros2srrc_data__action__Sequence_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!ros2srrc_data__action__Sequence_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

ros2srrc_data__action__Sequence_FeedbackMessage *
ros2srrc_data__action__Sequence_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_FeedbackMessage * msg = (ros2srrc_data__action__Sequence_FeedbackMessage *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros2srrc_data__action__Sequence_FeedbackMessage));
  bool success = ros2srrc_data__action__Sequence_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros2srrc_data__action__Sequence_FeedbackMessage__destroy(ros2srrc_data__action__Sequence_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros2srrc_data__action__Sequence_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros2srrc_data__action__Sequence_FeedbackMessage__Sequence__init(ros2srrc_data__action__Sequence_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_FeedbackMessage * data = NULL;

  if (size) {
    data = (ros2srrc_data__action__Sequence_FeedbackMessage *)allocator.zero_allocate(size, sizeof(ros2srrc_data__action__Sequence_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros2srrc_data__action__Sequence_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros2srrc_data__action__Sequence_FeedbackMessage__fini(&data[i - 1]);
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
ros2srrc_data__action__Sequence_FeedbackMessage__Sequence__fini(ros2srrc_data__action__Sequence_FeedbackMessage__Sequence * array)
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
      ros2srrc_data__action__Sequence_FeedbackMessage__fini(&array->data[i]);
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

ros2srrc_data__action__Sequence_FeedbackMessage__Sequence *
ros2srrc_data__action__Sequence_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros2srrc_data__action__Sequence_FeedbackMessage__Sequence * array = (ros2srrc_data__action__Sequence_FeedbackMessage__Sequence *)allocator.allocate(sizeof(ros2srrc_data__action__Sequence_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros2srrc_data__action__Sequence_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros2srrc_data__action__Sequence_FeedbackMessage__Sequence__destroy(ros2srrc_data__action__Sequence_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros2srrc_data__action__Sequence_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros2srrc_data__action__Sequence_FeedbackMessage__Sequence__are_equal(const ros2srrc_data__action__Sequence_FeedbackMessage__Sequence * lhs, const ros2srrc_data__action__Sequence_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros2srrc_data__action__Sequence_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros2srrc_data__action__Sequence_FeedbackMessage__Sequence__copy(
  const ros2srrc_data__action__Sequence_FeedbackMessage__Sequence * input,
  ros2srrc_data__action__Sequence_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros2srrc_data__action__Sequence_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ros2srrc_data__action__Sequence_FeedbackMessage * data =
      (ros2srrc_data__action__Sequence_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros2srrc_data__action__Sequence_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ros2srrc_data__action__Sequence_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros2srrc_data__action__Sequence_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
