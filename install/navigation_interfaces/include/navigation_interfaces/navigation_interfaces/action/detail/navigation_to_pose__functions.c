// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from navigation_interfaces:action/NavigationToPose.idl
// generated code does not contain a copyright notice
#include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose_stamped__functions.h"

bool
navigation_interfaces__action__NavigationToPose_Goal__init(navigation_interfaces__action__NavigationToPose_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__init(&msg->pose)) {
    navigation_interfaces__action__NavigationToPose_Goal__fini(msg);
    return false;
  }
  return true;
}

void
navigation_interfaces__action__NavigationToPose_Goal__fini(navigation_interfaces__action__NavigationToPose_Goal * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__PoseStamped__fini(&msg->pose);
}

bool
navigation_interfaces__action__NavigationToPose_Goal__are_equal(const navigation_interfaces__action__NavigationToPose_Goal * lhs, const navigation_interfaces__action__NavigationToPose_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_Goal__copy(
  const navigation_interfaces__action__NavigationToPose_Goal * input,
  navigation_interfaces__action__NavigationToPose_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__PoseStamped__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  return true;
}

navigation_interfaces__action__NavigationToPose_Goal *
navigation_interfaces__action__NavigationToPose_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_Goal * msg = (navigation_interfaces__action__NavigationToPose_Goal *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigation_interfaces__action__NavigationToPose_Goal));
  bool success = navigation_interfaces__action__NavigationToPose_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigation_interfaces__action__NavigationToPose_Goal__destroy(navigation_interfaces__action__NavigationToPose_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigation_interfaces__action__NavigationToPose_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigation_interfaces__action__NavigationToPose_Goal__Sequence__init(navigation_interfaces__action__NavigationToPose_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_Goal * data = NULL;

  if (size) {
    data = (navigation_interfaces__action__NavigationToPose_Goal *)allocator.zero_allocate(size, sizeof(navigation_interfaces__action__NavigationToPose_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigation_interfaces__action__NavigationToPose_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigation_interfaces__action__NavigationToPose_Goal__fini(&data[i - 1]);
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
navigation_interfaces__action__NavigationToPose_Goal__Sequence__fini(navigation_interfaces__action__NavigationToPose_Goal__Sequence * array)
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
      navigation_interfaces__action__NavigationToPose_Goal__fini(&array->data[i]);
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

navigation_interfaces__action__NavigationToPose_Goal__Sequence *
navigation_interfaces__action__NavigationToPose_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_Goal__Sequence * array = (navigation_interfaces__action__NavigationToPose_Goal__Sequence *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigation_interfaces__action__NavigationToPose_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigation_interfaces__action__NavigationToPose_Goal__Sequence__destroy(navigation_interfaces__action__NavigationToPose_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigation_interfaces__action__NavigationToPose_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigation_interfaces__action__NavigationToPose_Goal__Sequence__are_equal(const navigation_interfaces__action__NavigationToPose_Goal__Sequence * lhs, const navigation_interfaces__action__NavigationToPose_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_Goal__Sequence__copy(
  const navigation_interfaces__action__NavigationToPose_Goal__Sequence * input,
  navigation_interfaces__action__NavigationToPose_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigation_interfaces__action__NavigationToPose_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigation_interfaces__action__NavigationToPose_Goal * data =
      (navigation_interfaces__action__NavigationToPose_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigation_interfaces__action__NavigationToPose_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigation_interfaces__action__NavigationToPose_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
navigation_interfaces__action__NavigationToPose_Result__init(navigation_interfaces__action__NavigationToPose_Result * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
navigation_interfaces__action__NavigationToPose_Result__fini(navigation_interfaces__action__NavigationToPose_Result * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
navigation_interfaces__action__NavigationToPose_Result__are_equal(const navigation_interfaces__action__NavigationToPose_Result * lhs, const navigation_interfaces__action__NavigationToPose_Result * rhs)
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
navigation_interfaces__action__NavigationToPose_Result__copy(
  const navigation_interfaces__action__NavigationToPose_Result * input,
  navigation_interfaces__action__NavigationToPose_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

navigation_interfaces__action__NavigationToPose_Result *
navigation_interfaces__action__NavigationToPose_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_Result * msg = (navigation_interfaces__action__NavigationToPose_Result *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigation_interfaces__action__NavigationToPose_Result));
  bool success = navigation_interfaces__action__NavigationToPose_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigation_interfaces__action__NavigationToPose_Result__destroy(navigation_interfaces__action__NavigationToPose_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigation_interfaces__action__NavigationToPose_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigation_interfaces__action__NavigationToPose_Result__Sequence__init(navigation_interfaces__action__NavigationToPose_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_Result * data = NULL;

  if (size) {
    data = (navigation_interfaces__action__NavigationToPose_Result *)allocator.zero_allocate(size, sizeof(navigation_interfaces__action__NavigationToPose_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigation_interfaces__action__NavigationToPose_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigation_interfaces__action__NavigationToPose_Result__fini(&data[i - 1]);
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
navigation_interfaces__action__NavigationToPose_Result__Sequence__fini(navigation_interfaces__action__NavigationToPose_Result__Sequence * array)
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
      navigation_interfaces__action__NavigationToPose_Result__fini(&array->data[i]);
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

navigation_interfaces__action__NavigationToPose_Result__Sequence *
navigation_interfaces__action__NavigationToPose_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_Result__Sequence * array = (navigation_interfaces__action__NavigationToPose_Result__Sequence *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigation_interfaces__action__NavigationToPose_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigation_interfaces__action__NavigationToPose_Result__Sequence__destroy(navigation_interfaces__action__NavigationToPose_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigation_interfaces__action__NavigationToPose_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigation_interfaces__action__NavigationToPose_Result__Sequence__are_equal(const navigation_interfaces__action__NavigationToPose_Result__Sequence * lhs, const navigation_interfaces__action__NavigationToPose_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_Result__Sequence__copy(
  const navigation_interfaces__action__NavigationToPose_Result__Sequence * input,
  navigation_interfaces__action__NavigationToPose_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigation_interfaces__action__NavigationToPose_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigation_interfaces__action__NavigationToPose_Result * data =
      (navigation_interfaces__action__NavigationToPose_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigation_interfaces__action__NavigationToPose_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigation_interfaces__action__NavigationToPose_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
navigation_interfaces__action__NavigationToPose_Feedback__init(navigation_interfaces__action__NavigationToPose_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance_remaining
  return true;
}

void
navigation_interfaces__action__NavigationToPose_Feedback__fini(navigation_interfaces__action__NavigationToPose_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance_remaining
}

bool
navigation_interfaces__action__NavigationToPose_Feedback__are_equal(const navigation_interfaces__action__NavigationToPose_Feedback * lhs, const navigation_interfaces__action__NavigationToPose_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance_remaining
  if (lhs->distance_remaining != rhs->distance_remaining) {
    return false;
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_Feedback__copy(
  const navigation_interfaces__action__NavigationToPose_Feedback * input,
  navigation_interfaces__action__NavigationToPose_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // distance_remaining
  output->distance_remaining = input->distance_remaining;
  return true;
}

navigation_interfaces__action__NavigationToPose_Feedback *
navigation_interfaces__action__NavigationToPose_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_Feedback * msg = (navigation_interfaces__action__NavigationToPose_Feedback *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigation_interfaces__action__NavigationToPose_Feedback));
  bool success = navigation_interfaces__action__NavigationToPose_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigation_interfaces__action__NavigationToPose_Feedback__destroy(navigation_interfaces__action__NavigationToPose_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigation_interfaces__action__NavigationToPose_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigation_interfaces__action__NavigationToPose_Feedback__Sequence__init(navigation_interfaces__action__NavigationToPose_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_Feedback * data = NULL;

  if (size) {
    data = (navigation_interfaces__action__NavigationToPose_Feedback *)allocator.zero_allocate(size, sizeof(navigation_interfaces__action__NavigationToPose_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigation_interfaces__action__NavigationToPose_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigation_interfaces__action__NavigationToPose_Feedback__fini(&data[i - 1]);
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
navigation_interfaces__action__NavigationToPose_Feedback__Sequence__fini(navigation_interfaces__action__NavigationToPose_Feedback__Sequence * array)
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
      navigation_interfaces__action__NavigationToPose_Feedback__fini(&array->data[i]);
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

navigation_interfaces__action__NavigationToPose_Feedback__Sequence *
navigation_interfaces__action__NavigationToPose_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_Feedback__Sequence * array = (navigation_interfaces__action__NavigationToPose_Feedback__Sequence *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigation_interfaces__action__NavigationToPose_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigation_interfaces__action__NavigationToPose_Feedback__Sequence__destroy(navigation_interfaces__action__NavigationToPose_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigation_interfaces__action__NavigationToPose_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigation_interfaces__action__NavigationToPose_Feedback__Sequence__are_equal(const navigation_interfaces__action__NavigationToPose_Feedback__Sequence * lhs, const navigation_interfaces__action__NavigationToPose_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_Feedback__Sequence__copy(
  const navigation_interfaces__action__NavigationToPose_Feedback__Sequence * input,
  navigation_interfaces__action__NavigationToPose_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigation_interfaces__action__NavigationToPose_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigation_interfaces__action__NavigationToPose_Feedback * data =
      (navigation_interfaces__action__NavigationToPose_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigation_interfaces__action__NavigationToPose_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigation_interfaces__action__NavigationToPose_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_Feedback__copy(
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
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"

bool
navigation_interfaces__action__NavigationToPose_SendGoal_Request__init(navigation_interfaces__action__NavigationToPose_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    navigation_interfaces__action__NavigationToPose_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!navigation_interfaces__action__NavigationToPose_Goal__init(&msg->goal)) {
    navigation_interfaces__action__NavigationToPose_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
navigation_interfaces__action__NavigationToPose_SendGoal_Request__fini(navigation_interfaces__action__NavigationToPose_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  navigation_interfaces__action__NavigationToPose_Goal__fini(&msg->goal);
}

bool
navigation_interfaces__action__NavigationToPose_SendGoal_Request__are_equal(const navigation_interfaces__action__NavigationToPose_SendGoal_Request * lhs, const navigation_interfaces__action__NavigationToPose_SendGoal_Request * rhs)
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
  if (!navigation_interfaces__action__NavigationToPose_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_SendGoal_Request__copy(
  const navigation_interfaces__action__NavigationToPose_SendGoal_Request * input,
  navigation_interfaces__action__NavigationToPose_SendGoal_Request * output)
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
  if (!navigation_interfaces__action__NavigationToPose_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

navigation_interfaces__action__NavigationToPose_SendGoal_Request *
navigation_interfaces__action__NavigationToPose_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_SendGoal_Request * msg = (navigation_interfaces__action__NavigationToPose_SendGoal_Request *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Request));
  bool success = navigation_interfaces__action__NavigationToPose_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigation_interfaces__action__NavigationToPose_SendGoal_Request__destroy(navigation_interfaces__action__NavigationToPose_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigation_interfaces__action__NavigationToPose_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence__init(navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_SendGoal_Request * data = NULL;

  if (size) {
    data = (navigation_interfaces__action__NavigationToPose_SendGoal_Request *)allocator.zero_allocate(size, sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigation_interfaces__action__NavigationToPose_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigation_interfaces__action__NavigationToPose_SendGoal_Request__fini(&data[i - 1]);
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
navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence__fini(navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence * array)
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
      navigation_interfaces__action__NavigationToPose_SendGoal_Request__fini(&array->data[i]);
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

navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence *
navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence * array = (navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence__destroy(navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence__are_equal(const navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence * lhs, const navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence__copy(
  const navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence * input,
  navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigation_interfaces__action__NavigationToPose_SendGoal_Request * data =
      (navigation_interfaces__action__NavigationToPose_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigation_interfaces__action__NavigationToPose_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigation_interfaces__action__NavigationToPose_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_SendGoal_Request__copy(
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
navigation_interfaces__action__NavigationToPose_SendGoal_Response__init(navigation_interfaces__action__NavigationToPose_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    navigation_interfaces__action__NavigationToPose_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
navigation_interfaces__action__NavigationToPose_SendGoal_Response__fini(navigation_interfaces__action__NavigationToPose_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
navigation_interfaces__action__NavigationToPose_SendGoal_Response__are_equal(const navigation_interfaces__action__NavigationToPose_SendGoal_Response * lhs, const navigation_interfaces__action__NavigationToPose_SendGoal_Response * rhs)
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
navigation_interfaces__action__NavigationToPose_SendGoal_Response__copy(
  const navigation_interfaces__action__NavigationToPose_SendGoal_Response * input,
  navigation_interfaces__action__NavigationToPose_SendGoal_Response * output)
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

navigation_interfaces__action__NavigationToPose_SendGoal_Response *
navigation_interfaces__action__NavigationToPose_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_SendGoal_Response * msg = (navigation_interfaces__action__NavigationToPose_SendGoal_Response *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Response));
  bool success = navigation_interfaces__action__NavigationToPose_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigation_interfaces__action__NavigationToPose_SendGoal_Response__destroy(navigation_interfaces__action__NavigationToPose_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigation_interfaces__action__NavigationToPose_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence__init(navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_SendGoal_Response * data = NULL;

  if (size) {
    data = (navigation_interfaces__action__NavigationToPose_SendGoal_Response *)allocator.zero_allocate(size, sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigation_interfaces__action__NavigationToPose_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigation_interfaces__action__NavigationToPose_SendGoal_Response__fini(&data[i - 1]);
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
navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence__fini(navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence * array)
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
      navigation_interfaces__action__NavigationToPose_SendGoal_Response__fini(&array->data[i]);
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

navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence *
navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence * array = (navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence__destroy(navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence__are_equal(const navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence * lhs, const navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence__copy(
  const navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence * input,
  navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigation_interfaces__action__NavigationToPose_SendGoal_Response * data =
      (navigation_interfaces__action__NavigationToPose_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigation_interfaces__action__NavigationToPose_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigation_interfaces__action__NavigationToPose_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_SendGoal_Response__copy(
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
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"

bool
navigation_interfaces__action__NavigationToPose_SendGoal_Event__init(navigation_interfaces__action__NavigationToPose_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    navigation_interfaces__action__NavigationToPose_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    navigation_interfaces__action__NavigationToPose_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    navigation_interfaces__action__NavigationToPose_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
navigation_interfaces__action__NavigationToPose_SendGoal_Event__fini(navigation_interfaces__action__NavigationToPose_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
navigation_interfaces__action__NavigationToPose_SendGoal_Event__are_equal(const navigation_interfaces__action__NavigationToPose_SendGoal_Event * lhs, const navigation_interfaces__action__NavigationToPose_SendGoal_Event * rhs)
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
  if (!navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_SendGoal_Event__copy(
  const navigation_interfaces__action__NavigationToPose_SendGoal_Event * input,
  navigation_interfaces__action__NavigationToPose_SendGoal_Event * output)
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
  if (!navigation_interfaces__action__NavigationToPose_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!navigation_interfaces__action__NavigationToPose_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

navigation_interfaces__action__NavigationToPose_SendGoal_Event *
navigation_interfaces__action__NavigationToPose_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_SendGoal_Event * msg = (navigation_interfaces__action__NavigationToPose_SendGoal_Event *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Event));
  bool success = navigation_interfaces__action__NavigationToPose_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigation_interfaces__action__NavigationToPose_SendGoal_Event__destroy(navigation_interfaces__action__NavigationToPose_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigation_interfaces__action__NavigationToPose_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence__init(navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_SendGoal_Event * data = NULL;

  if (size) {
    data = (navigation_interfaces__action__NavigationToPose_SendGoal_Event *)allocator.zero_allocate(size, sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigation_interfaces__action__NavigationToPose_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigation_interfaces__action__NavigationToPose_SendGoal_Event__fini(&data[i - 1]);
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
navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence__fini(navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence * array)
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
      navigation_interfaces__action__NavigationToPose_SendGoal_Event__fini(&array->data[i]);
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

navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence *
navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence * array = (navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence__destroy(navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence__are_equal(const navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence * lhs, const navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence__copy(
  const navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence * input,
  navigation_interfaces__action__NavigationToPose_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigation_interfaces__action__NavigationToPose_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigation_interfaces__action__NavigationToPose_SendGoal_Event * data =
      (navigation_interfaces__action__NavigationToPose_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigation_interfaces__action__NavigationToPose_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigation_interfaces__action__NavigationToPose_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_SendGoal_Event__copy(
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
navigation_interfaces__action__NavigationToPose_GetResult_Request__init(navigation_interfaces__action__NavigationToPose_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    navigation_interfaces__action__NavigationToPose_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
navigation_interfaces__action__NavigationToPose_GetResult_Request__fini(navigation_interfaces__action__NavigationToPose_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
navigation_interfaces__action__NavigationToPose_GetResult_Request__are_equal(const navigation_interfaces__action__NavigationToPose_GetResult_Request * lhs, const navigation_interfaces__action__NavigationToPose_GetResult_Request * rhs)
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
navigation_interfaces__action__NavigationToPose_GetResult_Request__copy(
  const navigation_interfaces__action__NavigationToPose_GetResult_Request * input,
  navigation_interfaces__action__NavigationToPose_GetResult_Request * output)
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

navigation_interfaces__action__NavigationToPose_GetResult_Request *
navigation_interfaces__action__NavigationToPose_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_GetResult_Request * msg = (navigation_interfaces__action__NavigationToPose_GetResult_Request *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Request));
  bool success = navigation_interfaces__action__NavigationToPose_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigation_interfaces__action__NavigationToPose_GetResult_Request__destroy(navigation_interfaces__action__NavigationToPose_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigation_interfaces__action__NavigationToPose_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence__init(navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_GetResult_Request * data = NULL;

  if (size) {
    data = (navigation_interfaces__action__NavigationToPose_GetResult_Request *)allocator.zero_allocate(size, sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigation_interfaces__action__NavigationToPose_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigation_interfaces__action__NavigationToPose_GetResult_Request__fini(&data[i - 1]);
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
navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence__fini(navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence * array)
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
      navigation_interfaces__action__NavigationToPose_GetResult_Request__fini(&array->data[i]);
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

navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence *
navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence * array = (navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence__destroy(navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence__are_equal(const navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence * lhs, const navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence__copy(
  const navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence * input,
  navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigation_interfaces__action__NavigationToPose_GetResult_Request * data =
      (navigation_interfaces__action__NavigationToPose_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigation_interfaces__action__NavigationToPose_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigation_interfaces__action__NavigationToPose_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_GetResult_Request__copy(
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
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"

bool
navigation_interfaces__action__NavigationToPose_GetResult_Response__init(navigation_interfaces__action__NavigationToPose_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!navigation_interfaces__action__NavigationToPose_Result__init(&msg->result)) {
    navigation_interfaces__action__NavigationToPose_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
navigation_interfaces__action__NavigationToPose_GetResult_Response__fini(navigation_interfaces__action__NavigationToPose_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  navigation_interfaces__action__NavigationToPose_Result__fini(&msg->result);
}

bool
navigation_interfaces__action__NavigationToPose_GetResult_Response__are_equal(const navigation_interfaces__action__NavigationToPose_GetResult_Response * lhs, const navigation_interfaces__action__NavigationToPose_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!navigation_interfaces__action__NavigationToPose_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_GetResult_Response__copy(
  const navigation_interfaces__action__NavigationToPose_GetResult_Response * input,
  navigation_interfaces__action__NavigationToPose_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!navigation_interfaces__action__NavigationToPose_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

navigation_interfaces__action__NavigationToPose_GetResult_Response *
navigation_interfaces__action__NavigationToPose_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_GetResult_Response * msg = (navigation_interfaces__action__NavigationToPose_GetResult_Response *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Response));
  bool success = navigation_interfaces__action__NavigationToPose_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigation_interfaces__action__NavigationToPose_GetResult_Response__destroy(navigation_interfaces__action__NavigationToPose_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigation_interfaces__action__NavigationToPose_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence__init(navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_GetResult_Response * data = NULL;

  if (size) {
    data = (navigation_interfaces__action__NavigationToPose_GetResult_Response *)allocator.zero_allocate(size, sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigation_interfaces__action__NavigationToPose_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigation_interfaces__action__NavigationToPose_GetResult_Response__fini(&data[i - 1]);
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
navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence__fini(navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence * array)
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
      navigation_interfaces__action__NavigationToPose_GetResult_Response__fini(&array->data[i]);
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

navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence *
navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence * array = (navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence__destroy(navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence__are_equal(const navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence * lhs, const navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence__copy(
  const navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence * input,
  navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigation_interfaces__action__NavigationToPose_GetResult_Response * data =
      (navigation_interfaces__action__NavigationToPose_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigation_interfaces__action__NavigationToPose_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigation_interfaces__action__NavigationToPose_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"

bool
navigation_interfaces__action__NavigationToPose_GetResult_Event__init(navigation_interfaces__action__NavigationToPose_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    navigation_interfaces__action__NavigationToPose_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence__init(&msg->request, 0)) {
    navigation_interfaces__action__NavigationToPose_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence__init(&msg->response, 0)) {
    navigation_interfaces__action__NavigationToPose_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
navigation_interfaces__action__NavigationToPose_GetResult_Event__fini(navigation_interfaces__action__NavigationToPose_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence__fini(&msg->request);
  // response
  navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence__fini(&msg->response);
}

bool
navigation_interfaces__action__NavigationToPose_GetResult_Event__are_equal(const navigation_interfaces__action__NavigationToPose_GetResult_Event * lhs, const navigation_interfaces__action__NavigationToPose_GetResult_Event * rhs)
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
  if (!navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_GetResult_Event__copy(
  const navigation_interfaces__action__NavigationToPose_GetResult_Event * input,
  navigation_interfaces__action__NavigationToPose_GetResult_Event * output)
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
  if (!navigation_interfaces__action__NavigationToPose_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!navigation_interfaces__action__NavigationToPose_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

navigation_interfaces__action__NavigationToPose_GetResult_Event *
navigation_interfaces__action__NavigationToPose_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_GetResult_Event * msg = (navigation_interfaces__action__NavigationToPose_GetResult_Event *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Event));
  bool success = navigation_interfaces__action__NavigationToPose_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigation_interfaces__action__NavigationToPose_GetResult_Event__destroy(navigation_interfaces__action__NavigationToPose_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigation_interfaces__action__NavigationToPose_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence__init(navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_GetResult_Event * data = NULL;

  if (size) {
    data = (navigation_interfaces__action__NavigationToPose_GetResult_Event *)allocator.zero_allocate(size, sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigation_interfaces__action__NavigationToPose_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigation_interfaces__action__NavigationToPose_GetResult_Event__fini(&data[i - 1]);
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
navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence__fini(navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence * array)
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
      navigation_interfaces__action__NavigationToPose_GetResult_Event__fini(&array->data[i]);
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

navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence *
navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence * array = (navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence__destroy(navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence__are_equal(const navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence * lhs, const navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence__copy(
  const navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence * input,
  navigation_interfaces__action__NavigationToPose_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigation_interfaces__action__NavigationToPose_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigation_interfaces__action__NavigationToPose_GetResult_Event * data =
      (navigation_interfaces__action__NavigationToPose_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigation_interfaces__action__NavigationToPose_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigation_interfaces__action__NavigationToPose_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_GetResult_Event__copy(
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
// #include "navigation_interfaces/action/detail/navigation_to_pose__functions.h"

bool
navigation_interfaces__action__NavigationToPose_FeedbackMessage__init(navigation_interfaces__action__NavigationToPose_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    navigation_interfaces__action__NavigationToPose_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!navigation_interfaces__action__NavigationToPose_Feedback__init(&msg->feedback)) {
    navigation_interfaces__action__NavigationToPose_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
navigation_interfaces__action__NavigationToPose_FeedbackMessage__fini(navigation_interfaces__action__NavigationToPose_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  navigation_interfaces__action__NavigationToPose_Feedback__fini(&msg->feedback);
}

bool
navigation_interfaces__action__NavigationToPose_FeedbackMessage__are_equal(const navigation_interfaces__action__NavigationToPose_FeedbackMessage * lhs, const navigation_interfaces__action__NavigationToPose_FeedbackMessage * rhs)
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
  if (!navigation_interfaces__action__NavigationToPose_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_FeedbackMessage__copy(
  const navigation_interfaces__action__NavigationToPose_FeedbackMessage * input,
  navigation_interfaces__action__NavigationToPose_FeedbackMessage * output)
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
  if (!navigation_interfaces__action__NavigationToPose_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

navigation_interfaces__action__NavigationToPose_FeedbackMessage *
navigation_interfaces__action__NavigationToPose_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_FeedbackMessage * msg = (navigation_interfaces__action__NavigationToPose_FeedbackMessage *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(navigation_interfaces__action__NavigationToPose_FeedbackMessage));
  bool success = navigation_interfaces__action__NavigationToPose_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
navigation_interfaces__action__NavigationToPose_FeedbackMessage__destroy(navigation_interfaces__action__NavigationToPose_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    navigation_interfaces__action__NavigationToPose_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence__init(navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_FeedbackMessage * data = NULL;

  if (size) {
    data = (navigation_interfaces__action__NavigationToPose_FeedbackMessage *)allocator.zero_allocate(size, sizeof(navigation_interfaces__action__NavigationToPose_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = navigation_interfaces__action__NavigationToPose_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        navigation_interfaces__action__NavigationToPose_FeedbackMessage__fini(&data[i - 1]);
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
navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence__fini(navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence * array)
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
      navigation_interfaces__action__NavigationToPose_FeedbackMessage__fini(&array->data[i]);
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

navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence *
navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence * array = (navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence *)allocator.allocate(sizeof(navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence__destroy(navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence__are_equal(const navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence * lhs, const navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence__copy(
  const navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence * input,
  navigation_interfaces__action__NavigationToPose_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(navigation_interfaces__action__NavigationToPose_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    navigation_interfaces__action__NavigationToPose_FeedbackMessage * data =
      (navigation_interfaces__action__NavigationToPose_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!navigation_interfaces__action__NavigationToPose_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          navigation_interfaces__action__NavigationToPose_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!navigation_interfaces__action__NavigationToPose_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
