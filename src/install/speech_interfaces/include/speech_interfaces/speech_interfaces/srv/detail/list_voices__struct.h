// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from speech_interfaces:srv/ListVoices.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "speech_interfaces/srv/list_voices.h"


#ifndef SPEECH_INTERFACES__SRV__DETAIL__LIST_VOICES__STRUCT_H_
#define SPEECH_INTERFACES__SRV__DETAIL__LIST_VOICES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ListVoices in the package speech_interfaces.
typedef struct speech_interfaces__srv__ListVoices_Request
{
  uint8_t structure_needs_at_least_one_member;
} speech_interfaces__srv__ListVoices_Request;

// Struct for a sequence of speech_interfaces__srv__ListVoices_Request.
typedef struct speech_interfaces__srv__ListVoices_Request__Sequence
{
  speech_interfaces__srv__ListVoices_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} speech_interfaces__srv__ListVoices_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'voices'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ListVoices in the package speech_interfaces.
typedef struct speech_interfaces__srv__ListVoices_Response
{
  rosidl_runtime_c__String__Sequence voices;
} speech_interfaces__srv__ListVoices_Response;

// Struct for a sequence of speech_interfaces__srv__ListVoices_Response.
typedef struct speech_interfaces__srv__ListVoices_Response__Sequence
{
  speech_interfaces__srv__ListVoices_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} speech_interfaces__srv__ListVoices_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  speech_interfaces__srv__ListVoices_Event__request__MAX_SIZE = 1
};
// response
enum
{
  speech_interfaces__srv__ListVoices_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/ListVoices in the package speech_interfaces.
typedef struct speech_interfaces__srv__ListVoices_Event
{
  service_msgs__msg__ServiceEventInfo info;
  speech_interfaces__srv__ListVoices_Request__Sequence request;
  speech_interfaces__srv__ListVoices_Response__Sequence response;
} speech_interfaces__srv__ListVoices_Event;

// Struct for a sequence of speech_interfaces__srv__ListVoices_Event.
typedef struct speech_interfaces__srv__ListVoices_Event__Sequence
{
  speech_interfaces__srv__ListVoices_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} speech_interfaces__srv__ListVoices_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPEECH_INTERFACES__SRV__DETAIL__LIST_VOICES__STRUCT_H_
