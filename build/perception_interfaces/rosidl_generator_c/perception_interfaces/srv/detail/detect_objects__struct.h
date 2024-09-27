// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from perception_interfaces:srv/DetectObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "perception_interfaces/srv/detect_objects.h"


#ifndef PERCEPTION_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__STRUCT_H_
#define PERCEPTION_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/DetectObjects in the package perception_interfaces.
typedef struct perception_interfaces__srv__DetectObjects_Request
{
  uint8_t structure_needs_at_least_one_member;
} perception_interfaces__srv__DetectObjects_Request;

// Struct for a sequence of perception_interfaces__srv__DetectObjects_Request.
typedef struct perception_interfaces__srv__DetectObjects_Request__Sequence
{
  perception_interfaces__srv__DetectObjects_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_interfaces__srv__DetectObjects_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'object_names'
#include "rosidl_runtime_c/string.h"
// Member 'object_poses'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/DetectObjects in the package perception_interfaces.
typedef struct perception_interfaces__srv__DetectObjects_Response
{
  bool success;
  rosidl_runtime_c__String__Sequence object_names;
  geometry_msgs__msg__Pose__Sequence object_poses;
} perception_interfaces__srv__DetectObjects_Response;

// Struct for a sequence of perception_interfaces__srv__DetectObjects_Response.
typedef struct perception_interfaces__srv__DetectObjects_Response__Sequence
{
  perception_interfaces__srv__DetectObjects_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_interfaces__srv__DetectObjects_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  perception_interfaces__srv__DetectObjects_Event__request__MAX_SIZE = 1
};
// response
enum
{
  perception_interfaces__srv__DetectObjects_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/DetectObjects in the package perception_interfaces.
typedef struct perception_interfaces__srv__DetectObjects_Event
{
  service_msgs__msg__ServiceEventInfo info;
  perception_interfaces__srv__DetectObjects_Request__Sequence request;
  perception_interfaces__srv__DetectObjects_Response__Sequence response;
} perception_interfaces__srv__DetectObjects_Event;

// Struct for a sequence of perception_interfaces__srv__DetectObjects_Event.
typedef struct perception_interfaces__srv__DetectObjects_Event__Sequence
{
  perception_interfaces__srv__DetectObjects_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} perception_interfaces__srv__DetectObjects_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PERCEPTION_INTERFACES__SRV__DETAIL__DETECT_OBJECTS__STRUCT_H_
