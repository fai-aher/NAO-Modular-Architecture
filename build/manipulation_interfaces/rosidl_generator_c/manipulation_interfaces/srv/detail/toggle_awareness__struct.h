// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from manipulation_interfaces:srv/ToggleAwareness.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "manipulation_interfaces/srv/toggle_awareness.h"


#ifndef MANIPULATION_INTERFACES__SRV__DETAIL__TOGGLE_AWARENESS__STRUCT_H_
#define MANIPULATION_INTERFACES__SRV__DETAIL__TOGGLE_AWARENESS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ToggleAwareness in the package manipulation_interfaces.
typedef struct manipulation_interfaces__srv__ToggleAwareness_Request
{
  bool enable;
} manipulation_interfaces__srv__ToggleAwareness_Request;

// Struct for a sequence of manipulation_interfaces__srv__ToggleAwareness_Request.
typedef struct manipulation_interfaces__srv__ToggleAwareness_Request__Sequence
{
  manipulation_interfaces__srv__ToggleAwareness_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manipulation_interfaces__srv__ToggleAwareness_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ToggleAwareness in the package manipulation_interfaces.
typedef struct manipulation_interfaces__srv__ToggleAwareness_Response
{
  bool success;
  rosidl_runtime_c__String message;
} manipulation_interfaces__srv__ToggleAwareness_Response;

// Struct for a sequence of manipulation_interfaces__srv__ToggleAwareness_Response.
typedef struct manipulation_interfaces__srv__ToggleAwareness_Response__Sequence
{
  manipulation_interfaces__srv__ToggleAwareness_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manipulation_interfaces__srv__ToggleAwareness_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  manipulation_interfaces__srv__ToggleAwareness_Event__request__MAX_SIZE = 1
};
// response
enum
{
  manipulation_interfaces__srv__ToggleAwareness_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ToggleAwareness in the package manipulation_interfaces.
typedef struct manipulation_interfaces__srv__ToggleAwareness_Event
{
  service_msgs__msg__ServiceEventInfo info;
  manipulation_interfaces__srv__ToggleAwareness_Request__Sequence request;
  manipulation_interfaces__srv__ToggleAwareness_Response__Sequence response;
} manipulation_interfaces__srv__ToggleAwareness_Event;

// Struct for a sequence of manipulation_interfaces__srv__ToggleAwareness_Event.
typedef struct manipulation_interfaces__srv__ToggleAwareness_Event__Sequence
{
  manipulation_interfaces__srv__ToggleAwareness_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manipulation_interfaces__srv__ToggleAwareness_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MANIPULATION_INTERFACES__SRV__DETAIL__TOGGLE_AWARENESS__STRUCT_H_
