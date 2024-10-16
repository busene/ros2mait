// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMSettings.idl
// generated code does not contain a copyright notice
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_settings__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `setup_uc`
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_setup_settings__functions.h"
// Member `activate`
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__functions.h"
// Member `run`
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_run_settings__functions.h"
// Member `stop`
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_stop_settings__functions.h"

bool
abb_rapid_sm_addin_msgs__msg__EGMSettings__init(abb_rapid_sm_addin_msgs__msg__EGMSettings * msg)
{
  if (!msg) {
    return false;
  }
  // allow_egm_motions
  // use_presync
  // setup_uc
  if (!abb_rapid_sm_addin_msgs__msg__EGMSetupSettings__init(&msg->setup_uc)) {
    abb_rapid_sm_addin_msgs__msg__EGMSettings__fini(msg);
    return false;
  }
  // activate
  if (!abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__init(&msg->activate)) {
    abb_rapid_sm_addin_msgs__msg__EGMSettings__fini(msg);
    return false;
  }
  // run
  if (!abb_rapid_sm_addin_msgs__msg__EGMRunSettings__init(&msg->run)) {
    abb_rapid_sm_addin_msgs__msg__EGMSettings__fini(msg);
    return false;
  }
  // stop
  if (!abb_rapid_sm_addin_msgs__msg__EGMStopSettings__init(&msg->stop)) {
    abb_rapid_sm_addin_msgs__msg__EGMSettings__fini(msg);
    return false;
  }
  return true;
}

void
abb_rapid_sm_addin_msgs__msg__EGMSettings__fini(abb_rapid_sm_addin_msgs__msg__EGMSettings * msg)
{
  if (!msg) {
    return;
  }
  // allow_egm_motions
  // use_presync
  // setup_uc
  abb_rapid_sm_addin_msgs__msg__EGMSetupSettings__fini(&msg->setup_uc);
  // activate
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__fini(&msg->activate);
  // run
  abb_rapid_sm_addin_msgs__msg__EGMRunSettings__fini(&msg->run);
  // stop
  abb_rapid_sm_addin_msgs__msg__EGMStopSettings__fini(&msg->stop);
}

bool
abb_rapid_sm_addin_msgs__msg__EGMSettings__are_equal(const abb_rapid_sm_addin_msgs__msg__EGMSettings * lhs, const abb_rapid_sm_addin_msgs__msg__EGMSettings * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // allow_egm_motions
  if (lhs->allow_egm_motions != rhs->allow_egm_motions) {
    return false;
  }
  // use_presync
  if (lhs->use_presync != rhs->use_presync) {
    return false;
  }
  // setup_uc
  if (!abb_rapid_sm_addin_msgs__msg__EGMSetupSettings__are_equal(
      &(lhs->setup_uc), &(rhs->setup_uc)))
  {
    return false;
  }
  // activate
  if (!abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__are_equal(
      &(lhs->activate), &(rhs->activate)))
  {
    return false;
  }
  // run
  if (!abb_rapid_sm_addin_msgs__msg__EGMRunSettings__are_equal(
      &(lhs->run), &(rhs->run)))
  {
    return false;
  }
  // stop
  if (!abb_rapid_sm_addin_msgs__msg__EGMStopSettings__are_equal(
      &(lhs->stop), &(rhs->stop)))
  {
    return false;
  }
  return true;
}

bool
abb_rapid_sm_addin_msgs__msg__EGMSettings__copy(
  const abb_rapid_sm_addin_msgs__msg__EGMSettings * input,
  abb_rapid_sm_addin_msgs__msg__EGMSettings * output)
{
  if (!input || !output) {
    return false;
  }
  // allow_egm_motions
  output->allow_egm_motions = input->allow_egm_motions;
  // use_presync
  output->use_presync = input->use_presync;
  // setup_uc
  if (!abb_rapid_sm_addin_msgs__msg__EGMSetupSettings__copy(
      &(input->setup_uc), &(output->setup_uc)))
  {
    return false;
  }
  // activate
  if (!abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__copy(
      &(input->activate), &(output->activate)))
  {
    return false;
  }
  // run
  if (!abb_rapid_sm_addin_msgs__msg__EGMRunSettings__copy(
      &(input->run), &(output->run)))
  {
    return false;
  }
  // stop
  if (!abb_rapid_sm_addin_msgs__msg__EGMStopSettings__copy(
      &(input->stop), &(output->stop)))
  {
    return false;
  }
  return true;
}

abb_rapid_sm_addin_msgs__msg__EGMSettings *
abb_rapid_sm_addin_msgs__msg__EGMSettings__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__EGMSettings * msg = (abb_rapid_sm_addin_msgs__msg__EGMSettings *)allocator.allocate(sizeof(abb_rapid_sm_addin_msgs__msg__EGMSettings), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_rapid_sm_addin_msgs__msg__EGMSettings));
  bool success = abb_rapid_sm_addin_msgs__msg__EGMSettings__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_rapid_sm_addin_msgs__msg__EGMSettings__destroy(abb_rapid_sm_addin_msgs__msg__EGMSettings * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_rapid_sm_addin_msgs__msg__EGMSettings__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence__init(abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__EGMSettings * data = NULL;

  if (size) {
    data = (abb_rapid_sm_addin_msgs__msg__EGMSettings *)allocator.zero_allocate(size, sizeof(abb_rapid_sm_addin_msgs__msg__EGMSettings), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_rapid_sm_addin_msgs__msg__EGMSettings__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_rapid_sm_addin_msgs__msg__EGMSettings__fini(&data[i - 1]);
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
abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence__fini(abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence * array)
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
      abb_rapid_sm_addin_msgs__msg__EGMSettings__fini(&array->data[i]);
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

abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence *
abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence * array = (abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence *)allocator.allocate(sizeof(abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence__destroy(abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence__are_equal(const abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence * lhs, const abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_rapid_sm_addin_msgs__msg__EGMSettings__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence__copy(
  const abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence * input,
  abb_rapid_sm_addin_msgs__msg__EGMSettings__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_rapid_sm_addin_msgs__msg__EGMSettings);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_rapid_sm_addin_msgs__msg__EGMSettings * data =
      (abb_rapid_sm_addin_msgs__msg__EGMSettings *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_rapid_sm_addin_msgs__msg__EGMSettings__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_rapid_sm_addin_msgs__msg__EGMSettings__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_rapid_sm_addin_msgs__msg__EGMSettings__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
