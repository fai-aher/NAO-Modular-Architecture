// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from speech_interfaces:srv/PlaySong.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "speech_interfaces/srv/play_song.h"


#ifndef SPEECH_INTERFACES__SRV__DETAIL__PLAY_SONG__STRUCT_H_
#define SPEECH_INTERFACES__SRV__DETAIL__PLAY_SONG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'song_path'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlaySong in the package speech_interfaces.
typedef struct speech_interfaces__srv__PlaySong_Request
{
  rosidl_runtime_c__String song_path;
} speech_interfaces__srv__PlaySong_Request;

// Struct for a sequence of speech_interfaces__srv__PlaySong_Request.
typedef struct speech_interfaces__srv__PlaySong_Request__Sequence
{
  speech_interfaces__srv__PlaySong_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} speech_interfaces__srv__PlaySong_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'message'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/PlaySong in the package speech_interfaces.
typedef struct speech_interfaces__srv__PlaySong_Response
{
  bool success;
  rosidl_runtime_c__String message;
} speech_interfaces__srv__PlaySong_Response;

// Struct for a sequence of speech_interfaces__srv__PlaySong_Response.
typedef struct speech_interfaces__srv__PlaySong_Response__Sequence
{
  speech_interfaces__srv__PlaySong_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} speech_interfaces__srv__PlaySong_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  speech_interfaces__srv__PlaySong_Event__request__MAX_SIZE = 1
};
// response
enum
{
  speech_interfaces__srv__PlaySong_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/PlaySong in the package speech_interfaces.
typedef struct speech_interfaces__srv__PlaySong_Event
{
  service_msgs__msg__ServiceEventInfo info;
  speech_interfaces__srv__PlaySong_Request__Sequence request;
  speech_interfaces__srv__PlaySong_Response__Sequence response;
} speech_interfaces__srv__PlaySong_Event;

// Struct for a sequence of speech_interfaces__srv__PlaySong_Event.
typedef struct speech_interfaces__srv__PlaySong_Event__Sequence
{
  speech_interfaces__srv__PlaySong_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} speech_interfaces__srv__PlaySong_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SPEECH_INTERFACES__SRV__DETAIL__PLAY_SONG__STRUCT_H_
