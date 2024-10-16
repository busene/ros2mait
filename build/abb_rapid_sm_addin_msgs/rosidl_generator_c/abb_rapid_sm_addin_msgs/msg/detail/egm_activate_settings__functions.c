// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from abb_rapid_sm_addin_msgs:msg/EGMActivateSettings.idl
// generated code does not contain a copyright notice
#include "abb_rapid_sm_addin_msgs/msg/detail/egm_activate_settings__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tool`
#include "abb_rapid_msgs/msg/detail/tool_data__functions.h"
// Member `wobj`
#include "abb_rapid_msgs/msg/detail/w_obj_data__functions.h"
// Member `correction_frame`
// Member `sensor_frame`
#include "abb_rapid_msgs/msg/detail/pose__functions.h"

bool
abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__init(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings * msg)
{
  if (!msg) {
    return false;
  }
  // tool
  if (!abb_rapid_msgs__msg__ToolData__init(&msg->tool)) {
    abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__fini(msg);
    return false;
  }
  // wobj
  if (!abb_rapid_msgs__msg__WObjData__init(&msg->wobj)) {
    abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__fini(msg);
    return false;
  }
  // correction_frame
  if (!abb_rapid_msgs__msg__Pose__init(&msg->correction_frame)) {
    abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__fini(msg);
    return false;
  }
  // sensor_frame
  if (!abb_rapid_msgs__msg__Pose__init(&msg->sensor_frame)) {
    abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__fini(msg);
    return false;
  }
  // cond_min_max
  // lp_filter
  // sample_rate
  // max_speed_deviation
  return true;
}

void
abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__fini(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings * msg)
{
  if (!msg) {
    return;
  }
  // tool
  abb_rapid_msgs__msg__ToolData__fini(&msg->tool);
  // wobj
  abb_rapid_msgs__msg__WObjData__fini(&msg->wobj);
  // correction_frame
  abb_rapid_msgs__msg__Pose__fini(&msg->correction_frame);
  // sensor_frame
  abb_rapid_msgs__msg__Pose__fini(&msg->sensor_frame);
  // cond_min_max
  // lp_filter
  // sample_rate
  // max_speed_deviation
}

bool
abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__are_equal(const abb_rapid_sm_addin_msgs__msg__EGMActivateSettings * lhs, const abb_rapid_sm_addin_msgs__msg__EGMActivateSettings * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tool
  if (!abb_rapid_msgs__msg__ToolData__are_equal(
      &(lhs->tool), &(rhs->tool)))
  {
    return false;
  }
  // wobj
  if (!abb_rapid_msgs__msg__WObjData__are_equal(
      &(lhs->wobj), &(rhs->wobj)))
  {
    return false;
  }
  // correction_frame
  if (!abb_rapid_msgs__msg__Pose__are_equal(
      &(lhs->correction_frame), &(rhs->correction_frame)))
  {
    return false;
  }
  // sensor_frame
  if (!abb_rapid_msgs__msg__Pose__are_equal(
      &(lhs->sensor_frame), &(rhs->sensor_frame)))
  {
    return false;
  }
  // cond_min_max
  if (lhs->cond_min_max != rhs->cond_min_max) {
    return false;
  }
  // lp_filter
  if (lhs->lp_filter != rhs->lp_filter) {
    return false;
  }
  // sample_rate
  if (lhs->sample_rate != rhs->sample_rate) {
    return false;
  }
  // max_speed_deviation
  if (lhs->max_speed_deviation != rhs->max_speed_deviation) {
    return false;
  }
  return true;
}

bool
abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__copy(
  const abb_rapid_sm_addin_msgs__msg__EGMActivateSettings * input,
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings * output)
{
  if (!input || !output) {
    return false;
  }
  // tool
  if (!abb_rapid_msgs__msg__ToolData__copy(
      &(input->tool), &(output->tool)))
  {
    return false;
  }
  // wobj
  if (!abb_rapid_msgs__msg__WObjData__copy(
      &(input->wobj), &(output->wobj)))
  {
    return false;
  }
  // correction_frame
  if (!abb_rapid_msgs__msg__Pose__copy(
      &(input->correction_frame), &(output->correction_frame)))
  {
    return false;
  }
  // sensor_frame
  if (!abb_rapid_msgs__msg__Pose__copy(
      &(input->sensor_frame), &(output->sensor_frame)))
  {
    return false;
  }
  // cond_min_max
  output->cond_min_max = input->cond_min_max;
  // lp_filter
  output->lp_filter = input->lp_filter;
  // sample_rate
  output->sample_rate = input->sample_rate;
  // max_speed_deviation
  output->max_speed_deviation = input->max_speed_deviation;
  return true;
}

abb_rapid_sm_addin_msgs__msg__EGMActivateSettings *
abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings * msg = (abb_rapid_sm_addin_msgs__msg__EGMActivateSettings *)allocator.allocate(sizeof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings));
  bool success = abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__destroy(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence__init(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings * data = NULL;

  if (size) {
    data = (abb_rapid_sm_addin_msgs__msg__EGMActivateSettings *)allocator.zero_allocate(size, sizeof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__fini(&data[i - 1]);
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
abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence__fini(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence * array)
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
      abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__fini(&array->data[i]);
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

abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence *
abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence * array = (abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence *)allocator.allocate(sizeof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence__destroy(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence__are_equal(const abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence * lhs, const abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence__copy(
  const abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence * input,
  abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(abb_rapid_sm_addin_msgs__msg__EGMActivateSettings);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    abb_rapid_sm_addin_msgs__msg__EGMActivateSettings * data =
      (abb_rapid_sm_addin_msgs__msg__EGMActivateSettings *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!abb_rapid_sm_addin_msgs__msg__EGMActivateSettings__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
