// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navigation_interfaces:srv/MoveRobot.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navigation_interfaces/srv/move_robot.h"


#ifndef NAVIGATION_INTERFACES__SRV__DETAIL__MOVE_ROBOT__STRUCT_H_
#define NAVIGATION_INTERFACES__SRV__DETAIL__MOVE_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/MoveRobot in the package navigation_interfaces.
typedef struct navigation_interfaces__srv__MoveRobot_Request
{
  double x;
  double y;
  double theta;
} navigation_interfaces__srv__MoveRobot_Request;

// Struct for a sequence of navigation_interfaces__srv__MoveRobot_Request.
typedef struct navigation_interfaces__srv__MoveRobot_Request__Sequence
{
  navigation_interfaces__srv__MoveRobot_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigation_interfaces__srv__MoveRobot_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/MoveRobot in the package navigation_interfaces.
typedef struct navigation_interfaces__srv__MoveRobot_Response
{
  bool success;
  rosidl_runtime_c__String message;
} navigation_interfaces__srv__MoveRobot_Response;

// Struct for a sequence of navigation_interfaces__srv__MoveRobot_Response.
typedef struct navigation_interfaces__srv__MoveRobot_Response__Sequence
{
  navigation_interfaces__srv__MoveRobot_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigation_interfaces__srv__MoveRobot_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  navigation_interfaces__srv__MoveRobot_Event__request__MAX_SIZE = 1
};
// response
enum
{
  navigation_interfaces__srv__MoveRobot_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/MoveRobot in the package navigation_interfaces.
typedef struct navigation_interfaces__srv__MoveRobot_Event
{
  service_msgs__msg__ServiceEventInfo info;
  navigation_interfaces__srv__MoveRobot_Request__Sequence request;
  navigation_interfaces__srv__MoveRobot_Response__Sequence response;
} navigation_interfaces__srv__MoveRobot_Event;

// Struct for a sequence of navigation_interfaces__srv__MoveRobot_Event.
typedef struct navigation_interfaces__srv__MoveRobot_Event__Sequence
{
  navigation_interfaces__srv__MoveRobot_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navigation_interfaces__srv__MoveRobot_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVIGATION_INTERFACES__SRV__DETAIL__MOVE_ROBOT__STRUCT_H_
