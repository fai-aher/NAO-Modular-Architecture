// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from manipulation_interfaces:srv/StandUp.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "manipulation_interfaces/srv/stand_up.h"


#ifndef MANIPULATION_INTERFACES__SRV__DETAIL__STAND_UP__STRUCT_H_
#define MANIPULATION_INTERFACES__SRV__DETAIL__STAND_UP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/StandUp in the package manipulation_interfaces.
typedef struct manipulation_interfaces__srv__StandUp_Request
{
  uint8_t structure_needs_at_least_one_member;
} manipulation_interfaces__srv__StandUp_Request;

// Struct for a sequence of manipulation_interfaces__srv__StandUp_Request.
typedef struct manipulation_interfaces__srv__StandUp_Request__Sequence
{
  manipulation_interfaces__srv__StandUp_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manipulation_interfaces__srv__StandUp_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/StandUp in the package manipulation_interfaces.
typedef struct manipulation_interfaces__srv__StandUp_Response
{
  bool success;
} manipulation_interfaces__srv__StandUp_Response;

// Struct for a sequence of manipulation_interfaces__srv__StandUp_Response.
typedef struct manipulation_interfaces__srv__StandUp_Response__Sequence
{
  manipulation_interfaces__srv__StandUp_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manipulation_interfaces__srv__StandUp_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  manipulation_interfaces__srv__StandUp_Event__request__MAX_SIZE = 1
};
// response
enum
{
  manipulation_interfaces__srv__StandUp_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/StandUp in the package manipulation_interfaces.
typedef struct manipulation_interfaces__srv__StandUp_Event
{
  service_msgs__msg__ServiceEventInfo info;
  manipulation_interfaces__srv__StandUp_Request__Sequence request;
  manipulation_interfaces__srv__StandUp_Response__Sequence response;
} manipulation_interfaces__srv__StandUp_Event;

// Struct for a sequence of manipulation_interfaces__srv__StandUp_Event.
typedef struct manipulation_interfaces__srv__StandUp_Event__Sequence
{
  manipulation_interfaces__srv__StandUp_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manipulation_interfaces__srv__StandUp_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MANIPULATION_INTERFACES__SRV__DETAIL__STAND_UP__STRUCT_H_
