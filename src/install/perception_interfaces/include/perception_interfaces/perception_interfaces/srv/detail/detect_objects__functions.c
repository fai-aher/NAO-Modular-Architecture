// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from perception_interfaces:srv/DetectObjects.idl
// generated code does not contain a copyright notice
#include "perception_interfaces/srv/detail/detect_objects__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
perception_interfaces__srv__DetectObjects_Request__init(perception_interfaces__srv__DetectObjects_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
perception_interfaces__srv__DetectObjects_Request__fini(perception_interfaces__srv__DetectObjects_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
perception_interfaces__srv__DetectObjects_Request__are_equal(const perception_interfaces__srv__DetectObjects_Request * lhs, const perception_interfaces__srv__DetectObjects_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
perception_interfaces__srv__DetectObjects_Request__copy(
  const perception_interfaces__srv__DetectObjects_Request * input,
  perception_interfaces__srv__DetectObjects_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

perception_interfaces__srv__DetectObjects_Request *
perception_interfaces__srv__DetectObjects_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_interfaces__srv__DetectObjects_Request * msg = (perception_interfaces__srv__DetectObjects_Request *)allocator.allocate(sizeof(perception_interfaces__srv__DetectObjects_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perception_interfaces__srv__DetectObjects_Request));
  bool success = perception_interfaces__srv__DetectObjects_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perception_interfaces__srv__DetectObjects_Request__destroy(perception_interfaces__srv__DetectObjects_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perception_interfaces__srv__DetectObjects_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perception_interfaces__srv__DetectObjects_Request__Sequence__init(perception_interfaces__srv__DetectObjects_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_interfaces__srv__DetectObjects_Request * data = NULL;

  if (size) {
    data = (perception_interfaces__srv__DetectObjects_Request *)allocator.zero_allocate(size, sizeof(perception_interfaces__srv__DetectObjects_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perception_interfaces__srv__DetectObjects_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perception_interfaces__srv__DetectObjects_Request__fini(&data[i - 1]);
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
perception_interfaces__srv__DetectObjects_Request__Sequence__fini(perception_interfaces__srv__DetectObjects_Request__Sequence * array)
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
      perception_interfaces__srv__DetectObjects_Request__fini(&array->data[i]);
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

perception_interfaces__srv__DetectObjects_Request__Sequence *
perception_interfaces__srv__DetectObjects_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_interfaces__srv__DetectObjects_Request__Sequence * array = (perception_interfaces__srv__DetectObjects_Request__Sequence *)allocator.allocate(sizeof(perception_interfaces__srv__DetectObjects_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perception_interfaces__srv__DetectObjects_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perception_interfaces__srv__DetectObjects_Request__Sequence__destroy(perception_interfaces__srv__DetectObjects_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perception_interfaces__srv__DetectObjects_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perception_interfaces__srv__DetectObjects_Request__Sequence__are_equal(const perception_interfaces__srv__DetectObjects_Request__Sequence * lhs, const perception_interfaces__srv__DetectObjects_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perception_interfaces__srv__DetectObjects_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perception_interfaces__srv__DetectObjects_Request__Sequence__copy(
  const perception_interfaces__srv__DetectObjects_Request__Sequence * input,
  perception_interfaces__srv__DetectObjects_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perception_interfaces__srv__DetectObjects_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    perception_interfaces__srv__DetectObjects_Request * data =
      (perception_interfaces__srv__DetectObjects_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perception_interfaces__srv__DetectObjects_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          perception_interfaces__srv__DetectObjects_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perception_interfaces__srv__DetectObjects_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `object_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `object_poses`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
perception_interfaces__srv__DetectObjects_Response__init(perception_interfaces__srv__DetectObjects_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // object_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->object_names, 0)) {
    perception_interfaces__srv__DetectObjects_Response__fini(msg);
    return false;
  }
  // object_poses
  if (!geometry_msgs__msg__Pose__Sequence__init(&msg->object_poses, 0)) {
    perception_interfaces__srv__DetectObjects_Response__fini(msg);
    return false;
  }
  return true;
}

void
perception_interfaces__srv__DetectObjects_Response__fini(perception_interfaces__srv__DetectObjects_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // object_names
  rosidl_runtime_c__String__Sequence__fini(&msg->object_names);
  // object_poses
  geometry_msgs__msg__Pose__Sequence__fini(&msg->object_poses);
}

bool
perception_interfaces__srv__DetectObjects_Response__are_equal(const perception_interfaces__srv__DetectObjects_Response * lhs, const perception_interfaces__srv__DetectObjects_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // object_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->object_names), &(rhs->object_names)))
  {
    return false;
  }
  // object_poses
  if (!geometry_msgs__msg__Pose__Sequence__are_equal(
      &(lhs->object_poses), &(rhs->object_poses)))
  {
    return false;
  }
  return true;
}

bool
perception_interfaces__srv__DetectObjects_Response__copy(
  const perception_interfaces__srv__DetectObjects_Response * input,
  perception_interfaces__srv__DetectObjects_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // object_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->object_names), &(output->object_names)))
  {
    return false;
  }
  // object_poses
  if (!geometry_msgs__msg__Pose__Sequence__copy(
      &(input->object_poses), &(output->object_poses)))
  {
    return false;
  }
  return true;
}

perception_interfaces__srv__DetectObjects_Response *
perception_interfaces__srv__DetectObjects_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_interfaces__srv__DetectObjects_Response * msg = (perception_interfaces__srv__DetectObjects_Response *)allocator.allocate(sizeof(perception_interfaces__srv__DetectObjects_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perception_interfaces__srv__DetectObjects_Response));
  bool success = perception_interfaces__srv__DetectObjects_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perception_interfaces__srv__DetectObjects_Response__destroy(perception_interfaces__srv__DetectObjects_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perception_interfaces__srv__DetectObjects_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perception_interfaces__srv__DetectObjects_Response__Sequence__init(perception_interfaces__srv__DetectObjects_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_interfaces__srv__DetectObjects_Response * data = NULL;

  if (size) {
    data = (perception_interfaces__srv__DetectObjects_Response *)allocator.zero_allocate(size, sizeof(perception_interfaces__srv__DetectObjects_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perception_interfaces__srv__DetectObjects_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perception_interfaces__srv__DetectObjects_Response__fini(&data[i - 1]);
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
perception_interfaces__srv__DetectObjects_Response__Sequence__fini(perception_interfaces__srv__DetectObjects_Response__Sequence * array)
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
      perception_interfaces__srv__DetectObjects_Response__fini(&array->data[i]);
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

perception_interfaces__srv__DetectObjects_Response__Sequence *
perception_interfaces__srv__DetectObjects_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_interfaces__srv__DetectObjects_Response__Sequence * array = (perception_interfaces__srv__DetectObjects_Response__Sequence *)allocator.allocate(sizeof(perception_interfaces__srv__DetectObjects_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perception_interfaces__srv__DetectObjects_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perception_interfaces__srv__DetectObjects_Response__Sequence__destroy(perception_interfaces__srv__DetectObjects_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perception_interfaces__srv__DetectObjects_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perception_interfaces__srv__DetectObjects_Response__Sequence__are_equal(const perception_interfaces__srv__DetectObjects_Response__Sequence * lhs, const perception_interfaces__srv__DetectObjects_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perception_interfaces__srv__DetectObjects_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perception_interfaces__srv__DetectObjects_Response__Sequence__copy(
  const perception_interfaces__srv__DetectObjects_Response__Sequence * input,
  perception_interfaces__srv__DetectObjects_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perception_interfaces__srv__DetectObjects_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    perception_interfaces__srv__DetectObjects_Response * data =
      (perception_interfaces__srv__DetectObjects_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perception_interfaces__srv__DetectObjects_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          perception_interfaces__srv__DetectObjects_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perception_interfaces__srv__DetectObjects_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "perception_interfaces/srv/detail/detect_objects__functions.h"

bool
perception_interfaces__srv__DetectObjects_Event__init(perception_interfaces__srv__DetectObjects_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    perception_interfaces__srv__DetectObjects_Event__fini(msg);
    return false;
  }
  // request
  if (!perception_interfaces__srv__DetectObjects_Request__Sequence__init(&msg->request, 0)) {
    perception_interfaces__srv__DetectObjects_Event__fini(msg);
    return false;
  }
  // response
  if (!perception_interfaces__srv__DetectObjects_Response__Sequence__init(&msg->response, 0)) {
    perception_interfaces__srv__DetectObjects_Event__fini(msg);
    return false;
  }
  return true;
}

void
perception_interfaces__srv__DetectObjects_Event__fini(perception_interfaces__srv__DetectObjects_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  perception_interfaces__srv__DetectObjects_Request__Sequence__fini(&msg->request);
  // response
  perception_interfaces__srv__DetectObjects_Response__Sequence__fini(&msg->response);
}

bool
perception_interfaces__srv__DetectObjects_Event__are_equal(const perception_interfaces__srv__DetectObjects_Event * lhs, const perception_interfaces__srv__DetectObjects_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!perception_interfaces__srv__DetectObjects_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!perception_interfaces__srv__DetectObjects_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
perception_interfaces__srv__DetectObjects_Event__copy(
  const perception_interfaces__srv__DetectObjects_Event * input,
  perception_interfaces__srv__DetectObjects_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!perception_interfaces__srv__DetectObjects_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!perception_interfaces__srv__DetectObjects_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

perception_interfaces__srv__DetectObjects_Event *
perception_interfaces__srv__DetectObjects_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_interfaces__srv__DetectObjects_Event * msg = (perception_interfaces__srv__DetectObjects_Event *)allocator.allocate(sizeof(perception_interfaces__srv__DetectObjects_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(perception_interfaces__srv__DetectObjects_Event));
  bool success = perception_interfaces__srv__DetectObjects_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
perception_interfaces__srv__DetectObjects_Event__destroy(perception_interfaces__srv__DetectObjects_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    perception_interfaces__srv__DetectObjects_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
perception_interfaces__srv__DetectObjects_Event__Sequence__init(perception_interfaces__srv__DetectObjects_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_interfaces__srv__DetectObjects_Event * data = NULL;

  if (size) {
    data = (perception_interfaces__srv__DetectObjects_Event *)allocator.zero_allocate(size, sizeof(perception_interfaces__srv__DetectObjects_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = perception_interfaces__srv__DetectObjects_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        perception_interfaces__srv__DetectObjects_Event__fini(&data[i - 1]);
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
perception_interfaces__srv__DetectObjects_Event__Sequence__fini(perception_interfaces__srv__DetectObjects_Event__Sequence * array)
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
      perception_interfaces__srv__DetectObjects_Event__fini(&array->data[i]);
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

perception_interfaces__srv__DetectObjects_Event__Sequence *
perception_interfaces__srv__DetectObjects_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  perception_interfaces__srv__DetectObjects_Event__Sequence * array = (perception_interfaces__srv__DetectObjects_Event__Sequence *)allocator.allocate(sizeof(perception_interfaces__srv__DetectObjects_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = perception_interfaces__srv__DetectObjects_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
perception_interfaces__srv__DetectObjects_Event__Sequence__destroy(perception_interfaces__srv__DetectObjects_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    perception_interfaces__srv__DetectObjects_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
perception_interfaces__srv__DetectObjects_Event__Sequence__are_equal(const perception_interfaces__srv__DetectObjects_Event__Sequence * lhs, const perception_interfaces__srv__DetectObjects_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!perception_interfaces__srv__DetectObjects_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
perception_interfaces__srv__DetectObjects_Event__Sequence__copy(
  const perception_interfaces__srv__DetectObjects_Event__Sequence * input,
  perception_interfaces__srv__DetectObjects_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(perception_interfaces__srv__DetectObjects_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    perception_interfaces__srv__DetectObjects_Event * data =
      (perception_interfaces__srv__DetectObjects_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!perception_interfaces__srv__DetectObjects_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          perception_interfaces__srv__DetectObjects_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!perception_interfaces__srv__DetectObjects_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
