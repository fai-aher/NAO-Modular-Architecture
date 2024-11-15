// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from speech_interfaces:srv/ChangeVoice.idl
// generated code does not contain a copyright notice
#include "speech_interfaces/srv/detail/change_voice__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `voice_name`
#include "rosidl_runtime_c/string_functions.h"

bool
speech_interfaces__srv__ChangeVoice_Request__init(speech_interfaces__srv__ChangeVoice_Request * msg)
{
  if (!msg) {
    return false;
  }
  // voice_name
  if (!rosidl_runtime_c__String__init(&msg->voice_name)) {
    speech_interfaces__srv__ChangeVoice_Request__fini(msg);
    return false;
  }
  return true;
}

void
speech_interfaces__srv__ChangeVoice_Request__fini(speech_interfaces__srv__ChangeVoice_Request * msg)
{
  if (!msg) {
    return;
  }
  // voice_name
  rosidl_runtime_c__String__fini(&msg->voice_name);
}

bool
speech_interfaces__srv__ChangeVoice_Request__are_equal(const speech_interfaces__srv__ChangeVoice_Request * lhs, const speech_interfaces__srv__ChangeVoice_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // voice_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->voice_name), &(rhs->voice_name)))
  {
    return false;
  }
  return true;
}

bool
speech_interfaces__srv__ChangeVoice_Request__copy(
  const speech_interfaces__srv__ChangeVoice_Request * input,
  speech_interfaces__srv__ChangeVoice_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // voice_name
  if (!rosidl_runtime_c__String__copy(
      &(input->voice_name), &(output->voice_name)))
  {
    return false;
  }
  return true;
}

speech_interfaces__srv__ChangeVoice_Request *
speech_interfaces__srv__ChangeVoice_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_interfaces__srv__ChangeVoice_Request * msg = (speech_interfaces__srv__ChangeVoice_Request *)allocator.allocate(sizeof(speech_interfaces__srv__ChangeVoice_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(speech_interfaces__srv__ChangeVoice_Request));
  bool success = speech_interfaces__srv__ChangeVoice_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
speech_interfaces__srv__ChangeVoice_Request__destroy(speech_interfaces__srv__ChangeVoice_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    speech_interfaces__srv__ChangeVoice_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
speech_interfaces__srv__ChangeVoice_Request__Sequence__init(speech_interfaces__srv__ChangeVoice_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_interfaces__srv__ChangeVoice_Request * data = NULL;

  if (size) {
    data = (speech_interfaces__srv__ChangeVoice_Request *)allocator.zero_allocate(size, sizeof(speech_interfaces__srv__ChangeVoice_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = speech_interfaces__srv__ChangeVoice_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        speech_interfaces__srv__ChangeVoice_Request__fini(&data[i - 1]);
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
speech_interfaces__srv__ChangeVoice_Request__Sequence__fini(speech_interfaces__srv__ChangeVoice_Request__Sequence * array)
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
      speech_interfaces__srv__ChangeVoice_Request__fini(&array->data[i]);
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

speech_interfaces__srv__ChangeVoice_Request__Sequence *
speech_interfaces__srv__ChangeVoice_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_interfaces__srv__ChangeVoice_Request__Sequence * array = (speech_interfaces__srv__ChangeVoice_Request__Sequence *)allocator.allocate(sizeof(speech_interfaces__srv__ChangeVoice_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = speech_interfaces__srv__ChangeVoice_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
speech_interfaces__srv__ChangeVoice_Request__Sequence__destroy(speech_interfaces__srv__ChangeVoice_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    speech_interfaces__srv__ChangeVoice_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
speech_interfaces__srv__ChangeVoice_Request__Sequence__are_equal(const speech_interfaces__srv__ChangeVoice_Request__Sequence * lhs, const speech_interfaces__srv__ChangeVoice_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!speech_interfaces__srv__ChangeVoice_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
speech_interfaces__srv__ChangeVoice_Request__Sequence__copy(
  const speech_interfaces__srv__ChangeVoice_Request__Sequence * input,
  speech_interfaces__srv__ChangeVoice_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(speech_interfaces__srv__ChangeVoice_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    speech_interfaces__srv__ChangeVoice_Request * data =
      (speech_interfaces__srv__ChangeVoice_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!speech_interfaces__srv__ChangeVoice_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          speech_interfaces__srv__ChangeVoice_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!speech_interfaces__srv__ChangeVoice_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
speech_interfaces__srv__ChangeVoice_Response__init(speech_interfaces__srv__ChangeVoice_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    speech_interfaces__srv__ChangeVoice_Response__fini(msg);
    return false;
  }
  return true;
}

void
speech_interfaces__srv__ChangeVoice_Response__fini(speech_interfaces__srv__ChangeVoice_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
speech_interfaces__srv__ChangeVoice_Response__are_equal(const speech_interfaces__srv__ChangeVoice_Response * lhs, const speech_interfaces__srv__ChangeVoice_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
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
speech_interfaces__srv__ChangeVoice_Response__copy(
  const speech_interfaces__srv__ChangeVoice_Response * input,
  speech_interfaces__srv__ChangeVoice_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

speech_interfaces__srv__ChangeVoice_Response *
speech_interfaces__srv__ChangeVoice_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_interfaces__srv__ChangeVoice_Response * msg = (speech_interfaces__srv__ChangeVoice_Response *)allocator.allocate(sizeof(speech_interfaces__srv__ChangeVoice_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(speech_interfaces__srv__ChangeVoice_Response));
  bool success = speech_interfaces__srv__ChangeVoice_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
speech_interfaces__srv__ChangeVoice_Response__destroy(speech_interfaces__srv__ChangeVoice_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    speech_interfaces__srv__ChangeVoice_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
speech_interfaces__srv__ChangeVoice_Response__Sequence__init(speech_interfaces__srv__ChangeVoice_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_interfaces__srv__ChangeVoice_Response * data = NULL;

  if (size) {
    data = (speech_interfaces__srv__ChangeVoice_Response *)allocator.zero_allocate(size, sizeof(speech_interfaces__srv__ChangeVoice_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = speech_interfaces__srv__ChangeVoice_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        speech_interfaces__srv__ChangeVoice_Response__fini(&data[i - 1]);
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
speech_interfaces__srv__ChangeVoice_Response__Sequence__fini(speech_interfaces__srv__ChangeVoice_Response__Sequence * array)
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
      speech_interfaces__srv__ChangeVoice_Response__fini(&array->data[i]);
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

speech_interfaces__srv__ChangeVoice_Response__Sequence *
speech_interfaces__srv__ChangeVoice_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_interfaces__srv__ChangeVoice_Response__Sequence * array = (speech_interfaces__srv__ChangeVoice_Response__Sequence *)allocator.allocate(sizeof(speech_interfaces__srv__ChangeVoice_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = speech_interfaces__srv__ChangeVoice_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
speech_interfaces__srv__ChangeVoice_Response__Sequence__destroy(speech_interfaces__srv__ChangeVoice_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    speech_interfaces__srv__ChangeVoice_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
speech_interfaces__srv__ChangeVoice_Response__Sequence__are_equal(const speech_interfaces__srv__ChangeVoice_Response__Sequence * lhs, const speech_interfaces__srv__ChangeVoice_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!speech_interfaces__srv__ChangeVoice_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
speech_interfaces__srv__ChangeVoice_Response__Sequence__copy(
  const speech_interfaces__srv__ChangeVoice_Response__Sequence * input,
  speech_interfaces__srv__ChangeVoice_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(speech_interfaces__srv__ChangeVoice_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    speech_interfaces__srv__ChangeVoice_Response * data =
      (speech_interfaces__srv__ChangeVoice_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!speech_interfaces__srv__ChangeVoice_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          speech_interfaces__srv__ChangeVoice_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!speech_interfaces__srv__ChangeVoice_Response__copy(
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
// #include "speech_interfaces/srv/detail/change_voice__functions.h"

bool
speech_interfaces__srv__ChangeVoice_Event__init(speech_interfaces__srv__ChangeVoice_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    speech_interfaces__srv__ChangeVoice_Event__fini(msg);
    return false;
  }
  // request
  if (!speech_interfaces__srv__ChangeVoice_Request__Sequence__init(&msg->request, 0)) {
    speech_interfaces__srv__ChangeVoice_Event__fini(msg);
    return false;
  }
  // response
  if (!speech_interfaces__srv__ChangeVoice_Response__Sequence__init(&msg->response, 0)) {
    speech_interfaces__srv__ChangeVoice_Event__fini(msg);
    return false;
  }
  return true;
}

void
speech_interfaces__srv__ChangeVoice_Event__fini(speech_interfaces__srv__ChangeVoice_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  speech_interfaces__srv__ChangeVoice_Request__Sequence__fini(&msg->request);
  // response
  speech_interfaces__srv__ChangeVoice_Response__Sequence__fini(&msg->response);
}

bool
speech_interfaces__srv__ChangeVoice_Event__are_equal(const speech_interfaces__srv__ChangeVoice_Event * lhs, const speech_interfaces__srv__ChangeVoice_Event * rhs)
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
  if (!speech_interfaces__srv__ChangeVoice_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!speech_interfaces__srv__ChangeVoice_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
speech_interfaces__srv__ChangeVoice_Event__copy(
  const speech_interfaces__srv__ChangeVoice_Event * input,
  speech_interfaces__srv__ChangeVoice_Event * output)
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
  if (!speech_interfaces__srv__ChangeVoice_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!speech_interfaces__srv__ChangeVoice_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

speech_interfaces__srv__ChangeVoice_Event *
speech_interfaces__srv__ChangeVoice_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_interfaces__srv__ChangeVoice_Event * msg = (speech_interfaces__srv__ChangeVoice_Event *)allocator.allocate(sizeof(speech_interfaces__srv__ChangeVoice_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(speech_interfaces__srv__ChangeVoice_Event));
  bool success = speech_interfaces__srv__ChangeVoice_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
speech_interfaces__srv__ChangeVoice_Event__destroy(speech_interfaces__srv__ChangeVoice_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    speech_interfaces__srv__ChangeVoice_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
speech_interfaces__srv__ChangeVoice_Event__Sequence__init(speech_interfaces__srv__ChangeVoice_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_interfaces__srv__ChangeVoice_Event * data = NULL;

  if (size) {
    data = (speech_interfaces__srv__ChangeVoice_Event *)allocator.zero_allocate(size, sizeof(speech_interfaces__srv__ChangeVoice_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = speech_interfaces__srv__ChangeVoice_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        speech_interfaces__srv__ChangeVoice_Event__fini(&data[i - 1]);
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
speech_interfaces__srv__ChangeVoice_Event__Sequence__fini(speech_interfaces__srv__ChangeVoice_Event__Sequence * array)
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
      speech_interfaces__srv__ChangeVoice_Event__fini(&array->data[i]);
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

speech_interfaces__srv__ChangeVoice_Event__Sequence *
speech_interfaces__srv__ChangeVoice_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  speech_interfaces__srv__ChangeVoice_Event__Sequence * array = (speech_interfaces__srv__ChangeVoice_Event__Sequence *)allocator.allocate(sizeof(speech_interfaces__srv__ChangeVoice_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = speech_interfaces__srv__ChangeVoice_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
speech_interfaces__srv__ChangeVoice_Event__Sequence__destroy(speech_interfaces__srv__ChangeVoice_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    speech_interfaces__srv__ChangeVoice_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
speech_interfaces__srv__ChangeVoice_Event__Sequence__are_equal(const speech_interfaces__srv__ChangeVoice_Event__Sequence * lhs, const speech_interfaces__srv__ChangeVoice_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!speech_interfaces__srv__ChangeVoice_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
speech_interfaces__srv__ChangeVoice_Event__Sequence__copy(
  const speech_interfaces__srv__ChangeVoice_Event__Sequence * input,
  speech_interfaces__srv__ChangeVoice_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(speech_interfaces__srv__ChangeVoice_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    speech_interfaces__srv__ChangeVoice_Event * data =
      (speech_interfaces__srv__ChangeVoice_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!speech_interfaces__srv__ChangeVoice_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          speech_interfaces__srv__ChangeVoice_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!speech_interfaces__srv__ChangeVoice_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
