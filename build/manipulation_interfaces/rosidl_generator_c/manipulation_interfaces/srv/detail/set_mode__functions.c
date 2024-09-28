// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from manipulation_interfaces:srv/SetMode.idl
// generated code does not contain a copyright notice
#include "manipulation_interfaces/srv/detail/set_mode__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `mode`
#include "rosidl_runtime_c/string_functions.h"

bool
manipulation_interfaces__srv__SetMode_Request__init(manipulation_interfaces__srv__SetMode_Request * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__init(&msg->mode)) {
    manipulation_interfaces__srv__SetMode_Request__fini(msg);
    return false;
  }
  return true;
}

void
manipulation_interfaces__srv__SetMode_Request__fini(manipulation_interfaces__srv__SetMode_Request * msg)
{
  if (!msg) {
    return;
  }
  // mode
  rosidl_runtime_c__String__fini(&msg->mode);
}

bool
manipulation_interfaces__srv__SetMode_Request__are_equal(const manipulation_interfaces__srv__SetMode_Request * lhs, const manipulation_interfaces__srv__SetMode_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  return true;
}

bool
manipulation_interfaces__srv__SetMode_Request__copy(
  const manipulation_interfaces__srv__SetMode_Request * input,
  manipulation_interfaces__srv__SetMode_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  if (!rosidl_runtime_c__String__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  return true;
}

manipulation_interfaces__srv__SetMode_Request *
manipulation_interfaces__srv__SetMode_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manipulation_interfaces__srv__SetMode_Request * msg = (manipulation_interfaces__srv__SetMode_Request *)allocator.allocate(sizeof(manipulation_interfaces__srv__SetMode_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manipulation_interfaces__srv__SetMode_Request));
  bool success = manipulation_interfaces__srv__SetMode_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manipulation_interfaces__srv__SetMode_Request__destroy(manipulation_interfaces__srv__SetMode_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manipulation_interfaces__srv__SetMode_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manipulation_interfaces__srv__SetMode_Request__Sequence__init(manipulation_interfaces__srv__SetMode_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manipulation_interfaces__srv__SetMode_Request * data = NULL;

  if (size) {
    data = (manipulation_interfaces__srv__SetMode_Request *)allocator.zero_allocate(size, sizeof(manipulation_interfaces__srv__SetMode_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manipulation_interfaces__srv__SetMode_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manipulation_interfaces__srv__SetMode_Request__fini(&data[i - 1]);
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
manipulation_interfaces__srv__SetMode_Request__Sequence__fini(manipulation_interfaces__srv__SetMode_Request__Sequence * array)
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
      manipulation_interfaces__srv__SetMode_Request__fini(&array->data[i]);
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

manipulation_interfaces__srv__SetMode_Request__Sequence *
manipulation_interfaces__srv__SetMode_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manipulation_interfaces__srv__SetMode_Request__Sequence * array = (manipulation_interfaces__srv__SetMode_Request__Sequence *)allocator.allocate(sizeof(manipulation_interfaces__srv__SetMode_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manipulation_interfaces__srv__SetMode_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manipulation_interfaces__srv__SetMode_Request__Sequence__destroy(manipulation_interfaces__srv__SetMode_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manipulation_interfaces__srv__SetMode_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manipulation_interfaces__srv__SetMode_Request__Sequence__are_equal(const manipulation_interfaces__srv__SetMode_Request__Sequence * lhs, const manipulation_interfaces__srv__SetMode_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manipulation_interfaces__srv__SetMode_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manipulation_interfaces__srv__SetMode_Request__Sequence__copy(
  const manipulation_interfaces__srv__SetMode_Request__Sequence * input,
  manipulation_interfaces__srv__SetMode_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manipulation_interfaces__srv__SetMode_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manipulation_interfaces__srv__SetMode_Request * data =
      (manipulation_interfaces__srv__SetMode_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manipulation_interfaces__srv__SetMode_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manipulation_interfaces__srv__SetMode_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manipulation_interfaces__srv__SetMode_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
manipulation_interfaces__srv__SetMode_Response__init(manipulation_interfaces__srv__SetMode_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
manipulation_interfaces__srv__SetMode_Response__fini(manipulation_interfaces__srv__SetMode_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
manipulation_interfaces__srv__SetMode_Response__are_equal(const manipulation_interfaces__srv__SetMode_Response * lhs, const manipulation_interfaces__srv__SetMode_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
manipulation_interfaces__srv__SetMode_Response__copy(
  const manipulation_interfaces__srv__SetMode_Response * input,
  manipulation_interfaces__srv__SetMode_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

manipulation_interfaces__srv__SetMode_Response *
manipulation_interfaces__srv__SetMode_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manipulation_interfaces__srv__SetMode_Response * msg = (manipulation_interfaces__srv__SetMode_Response *)allocator.allocate(sizeof(manipulation_interfaces__srv__SetMode_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manipulation_interfaces__srv__SetMode_Response));
  bool success = manipulation_interfaces__srv__SetMode_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manipulation_interfaces__srv__SetMode_Response__destroy(manipulation_interfaces__srv__SetMode_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manipulation_interfaces__srv__SetMode_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manipulation_interfaces__srv__SetMode_Response__Sequence__init(manipulation_interfaces__srv__SetMode_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manipulation_interfaces__srv__SetMode_Response * data = NULL;

  if (size) {
    data = (manipulation_interfaces__srv__SetMode_Response *)allocator.zero_allocate(size, sizeof(manipulation_interfaces__srv__SetMode_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manipulation_interfaces__srv__SetMode_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manipulation_interfaces__srv__SetMode_Response__fini(&data[i - 1]);
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
manipulation_interfaces__srv__SetMode_Response__Sequence__fini(manipulation_interfaces__srv__SetMode_Response__Sequence * array)
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
      manipulation_interfaces__srv__SetMode_Response__fini(&array->data[i]);
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

manipulation_interfaces__srv__SetMode_Response__Sequence *
manipulation_interfaces__srv__SetMode_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manipulation_interfaces__srv__SetMode_Response__Sequence * array = (manipulation_interfaces__srv__SetMode_Response__Sequence *)allocator.allocate(sizeof(manipulation_interfaces__srv__SetMode_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manipulation_interfaces__srv__SetMode_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manipulation_interfaces__srv__SetMode_Response__Sequence__destroy(manipulation_interfaces__srv__SetMode_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manipulation_interfaces__srv__SetMode_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manipulation_interfaces__srv__SetMode_Response__Sequence__are_equal(const manipulation_interfaces__srv__SetMode_Response__Sequence * lhs, const manipulation_interfaces__srv__SetMode_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manipulation_interfaces__srv__SetMode_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manipulation_interfaces__srv__SetMode_Response__Sequence__copy(
  const manipulation_interfaces__srv__SetMode_Response__Sequence * input,
  manipulation_interfaces__srv__SetMode_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manipulation_interfaces__srv__SetMode_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manipulation_interfaces__srv__SetMode_Response * data =
      (manipulation_interfaces__srv__SetMode_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manipulation_interfaces__srv__SetMode_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manipulation_interfaces__srv__SetMode_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manipulation_interfaces__srv__SetMode_Response__copy(
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
// #include "manipulation_interfaces/srv/detail/set_mode__functions.h"

bool
manipulation_interfaces__srv__SetMode_Event__init(manipulation_interfaces__srv__SetMode_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    manipulation_interfaces__srv__SetMode_Event__fini(msg);
    return false;
  }
  // request
  if (!manipulation_interfaces__srv__SetMode_Request__Sequence__init(&msg->request, 0)) {
    manipulation_interfaces__srv__SetMode_Event__fini(msg);
    return false;
  }
  // response
  if (!manipulation_interfaces__srv__SetMode_Response__Sequence__init(&msg->response, 0)) {
    manipulation_interfaces__srv__SetMode_Event__fini(msg);
    return false;
  }
  return true;
}

void
manipulation_interfaces__srv__SetMode_Event__fini(manipulation_interfaces__srv__SetMode_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  manipulation_interfaces__srv__SetMode_Request__Sequence__fini(&msg->request);
  // response
  manipulation_interfaces__srv__SetMode_Response__Sequence__fini(&msg->response);
}

bool
manipulation_interfaces__srv__SetMode_Event__are_equal(const manipulation_interfaces__srv__SetMode_Event * lhs, const manipulation_interfaces__srv__SetMode_Event * rhs)
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
  if (!manipulation_interfaces__srv__SetMode_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!manipulation_interfaces__srv__SetMode_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
manipulation_interfaces__srv__SetMode_Event__copy(
  const manipulation_interfaces__srv__SetMode_Event * input,
  manipulation_interfaces__srv__SetMode_Event * output)
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
  if (!manipulation_interfaces__srv__SetMode_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!manipulation_interfaces__srv__SetMode_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

manipulation_interfaces__srv__SetMode_Event *
manipulation_interfaces__srv__SetMode_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manipulation_interfaces__srv__SetMode_Event * msg = (manipulation_interfaces__srv__SetMode_Event *)allocator.allocate(sizeof(manipulation_interfaces__srv__SetMode_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(manipulation_interfaces__srv__SetMode_Event));
  bool success = manipulation_interfaces__srv__SetMode_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
manipulation_interfaces__srv__SetMode_Event__destroy(manipulation_interfaces__srv__SetMode_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    manipulation_interfaces__srv__SetMode_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
manipulation_interfaces__srv__SetMode_Event__Sequence__init(manipulation_interfaces__srv__SetMode_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manipulation_interfaces__srv__SetMode_Event * data = NULL;

  if (size) {
    data = (manipulation_interfaces__srv__SetMode_Event *)allocator.zero_allocate(size, sizeof(manipulation_interfaces__srv__SetMode_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = manipulation_interfaces__srv__SetMode_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        manipulation_interfaces__srv__SetMode_Event__fini(&data[i - 1]);
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
manipulation_interfaces__srv__SetMode_Event__Sequence__fini(manipulation_interfaces__srv__SetMode_Event__Sequence * array)
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
      manipulation_interfaces__srv__SetMode_Event__fini(&array->data[i]);
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

manipulation_interfaces__srv__SetMode_Event__Sequence *
manipulation_interfaces__srv__SetMode_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  manipulation_interfaces__srv__SetMode_Event__Sequence * array = (manipulation_interfaces__srv__SetMode_Event__Sequence *)allocator.allocate(sizeof(manipulation_interfaces__srv__SetMode_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = manipulation_interfaces__srv__SetMode_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
manipulation_interfaces__srv__SetMode_Event__Sequence__destroy(manipulation_interfaces__srv__SetMode_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    manipulation_interfaces__srv__SetMode_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
manipulation_interfaces__srv__SetMode_Event__Sequence__are_equal(const manipulation_interfaces__srv__SetMode_Event__Sequence * lhs, const manipulation_interfaces__srv__SetMode_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!manipulation_interfaces__srv__SetMode_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
manipulation_interfaces__srv__SetMode_Event__Sequence__copy(
  const manipulation_interfaces__srv__SetMode_Event__Sequence * input,
  manipulation_interfaces__srv__SetMode_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(manipulation_interfaces__srv__SetMode_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    manipulation_interfaces__srv__SetMode_Event * data =
      (manipulation_interfaces__srv__SetMode_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!manipulation_interfaces__srv__SetMode_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          manipulation_interfaces__srv__SetMode_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!manipulation_interfaces__srv__SetMode_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
