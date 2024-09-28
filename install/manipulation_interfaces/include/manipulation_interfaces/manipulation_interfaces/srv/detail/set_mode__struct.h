// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from manipulation_interfaces:srv/SetMode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "manipulation_interfaces/srv/set_mode.h"


#ifndef MANIPULATION_INTERFACES__SRV__DETAIL__SET_MODE__STRUCT_H_
#define MANIPULATION_INTERFACES__SRV__DETAIL__SET_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'mode'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/SetMode in the package manipulation_interfaces.
typedef struct manipulation_interfaces__srv__SetMode_Request
{
  rosidl_runtime_c__String mode;
} manipulation_interfaces__srv__SetMode_Request;

// Struct for a sequence of manipulation_interfaces__srv__SetMode_Request.
typedef struct manipulation_interfaces__srv__SetMode_Request__Sequence
{
  manipulation_interfaces__srv__SetMode_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manipulation_interfaces__srv__SetMode_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/SetMode in the package manipulation_interfaces.
typedef struct manipulation_interfaces__srv__SetMode_Response
{
  bool success;
} manipulation_interfaces__srv__SetMode_Response;

// Struct for a sequence of manipulation_interfaces__srv__SetMode_Response.
typedef struct manipulation_interfaces__srv__SetMode_Response__Sequence
{
  manipulation_interfaces__srv__SetMode_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manipulation_interfaces__srv__SetMode_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  manipulation_interfaces__srv__SetMode_Event__request__MAX_SIZE = 1
};
// response
enum
{
  manipulation_interfaces__srv__SetMode_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SetMode in the package manipulation_interfaces.
typedef struct manipulation_interfaces__srv__SetMode_Event
{
  service_msgs__msg__ServiceEventInfo info;
  manipulation_interfaces__srv__SetMode_Request__Sequence request;
  manipulation_interfaces__srv__SetMode_Response__Sequence response;
} manipulation_interfaces__srv__SetMode_Event;

// Struct for a sequence of manipulation_interfaces__srv__SetMode_Event.
typedef struct manipulation_interfaces__srv__SetMode_Event__Sequence
{
  manipulation_interfaces__srv__SetMode_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} manipulation_interfaces__srv__SetMode_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MANIPULATION_INTERFACES__SRV__DETAIL__SET_MODE__STRUCT_H_
