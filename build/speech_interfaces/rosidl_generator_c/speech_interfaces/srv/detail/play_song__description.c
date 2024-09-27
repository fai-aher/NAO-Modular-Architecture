// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from speech_interfaces:srv/PlaySong.idl
// generated code does not contain a copyright notice

#include "speech_interfaces/srv/detail/play_song__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_speech_interfaces
const rosidl_type_hash_t *
speech_interfaces__srv__PlaySong__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa3, 0x15, 0xd7, 0xeb, 0x01, 0x13, 0xbd, 0xff,
      0x24, 0x9f, 0x2f, 0x51, 0xf1, 0x9c, 0x11, 0xbf,
      0x03, 0x24, 0x0e, 0x93, 0x7a, 0x33, 0x9d, 0x2e,
      0xa2, 0x58, 0x79, 0x61, 0xc1, 0x24, 0x89, 0xfb,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_speech_interfaces
const rosidl_type_hash_t *
speech_interfaces__srv__PlaySong_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc1, 0x20, 0xbb, 0x9f, 0x0e, 0xdd, 0xf0, 0x79,
      0x9c, 0x1a, 0x44, 0xf0, 0x3f, 0xe1, 0xfc, 0xc6,
      0xa1, 0xf1, 0x34, 0x16, 0x5f, 0x97, 0xa1, 0x2d,
      0xaa, 0x17, 0x9d, 0xcb, 0xfd, 0xda, 0x81, 0x9f,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_speech_interfaces
const rosidl_type_hash_t *
speech_interfaces__srv__PlaySong_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf8, 0x17, 0xcb, 0x71, 0x17, 0x3c, 0x47, 0x4d,
      0x00, 0x7a, 0x72, 0x69, 0x44, 0x31, 0x93, 0xe4,
      0xbb, 0x3c, 0x3c, 0x9f, 0x47, 0x6a, 0x86, 0x4a,
      0x22, 0xe3, 0x5c, 0x64, 0xec, 0xf0, 0xfc, 0xba,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_speech_interfaces
const rosidl_type_hash_t *
speech_interfaces__srv__PlaySong_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x31, 0x27, 0xfe, 0xfb, 0x59, 0x13, 0x47, 0x05,
      0x5d, 0x1b, 0x3d, 0xb9, 0xe6, 0x65, 0xbd, 0x6a,
      0x05, 0x3e, 0x45, 0xad, 0xfa, 0x5c, 0x9d, 0xe6,
      0x47, 0xc8, 0x32, 0xaa, 0x7a, 0x69, 0x5b, 0xf7,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char speech_interfaces__srv__PlaySong__TYPE_NAME[] = "speech_interfaces/srv/PlaySong";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char speech_interfaces__srv__PlaySong_Event__TYPE_NAME[] = "speech_interfaces/srv/PlaySong_Event";
static char speech_interfaces__srv__PlaySong_Request__TYPE_NAME[] = "speech_interfaces/srv/PlaySong_Request";
static char speech_interfaces__srv__PlaySong_Response__TYPE_NAME[] = "speech_interfaces/srv/PlaySong_Response";

// Define type names, field names, and default values
static char speech_interfaces__srv__PlaySong__FIELD_NAME__request_message[] = "request_message";
static char speech_interfaces__srv__PlaySong__FIELD_NAME__response_message[] = "response_message";
static char speech_interfaces__srv__PlaySong__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field speech_interfaces__srv__PlaySong__FIELDS[] = {
  {
    {speech_interfaces__srv__PlaySong__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {speech_interfaces__srv__PlaySong_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {speech_interfaces__srv__PlaySong__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {speech_interfaces__srv__PlaySong_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
  {
    {speech_interfaces__srv__PlaySong__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {speech_interfaces__srv__PlaySong_Event__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription speech_interfaces__srv__PlaySong__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {speech_interfaces__srv__PlaySong_Event__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
  {
    {speech_interfaces__srv__PlaySong_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {speech_interfaces__srv__PlaySong_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
speech_interfaces__srv__PlaySong__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {speech_interfaces__srv__PlaySong__TYPE_NAME, 30, 30},
      {speech_interfaces__srv__PlaySong__FIELDS, 3, 3},
    },
    {speech_interfaces__srv__PlaySong__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = speech_interfaces__srv__PlaySong_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = speech_interfaces__srv__PlaySong_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = speech_interfaces__srv__PlaySong_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char speech_interfaces__srv__PlaySong_Request__FIELD_NAME__song_path[] = "song_path";

static rosidl_runtime_c__type_description__Field speech_interfaces__srv__PlaySong_Request__FIELDS[] = {
  {
    {speech_interfaces__srv__PlaySong_Request__FIELD_NAME__song_path, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
speech_interfaces__srv__PlaySong_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {speech_interfaces__srv__PlaySong_Request__TYPE_NAME, 38, 38},
      {speech_interfaces__srv__PlaySong_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char speech_interfaces__srv__PlaySong_Response__FIELD_NAME__success[] = "success";
static char speech_interfaces__srv__PlaySong_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field speech_interfaces__srv__PlaySong_Response__FIELDS[] = {
  {
    {speech_interfaces__srv__PlaySong_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {speech_interfaces__srv__PlaySong_Response__FIELD_NAME__message, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
speech_interfaces__srv__PlaySong_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {speech_interfaces__srv__PlaySong_Response__TYPE_NAME, 39, 39},
      {speech_interfaces__srv__PlaySong_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char speech_interfaces__srv__PlaySong_Event__FIELD_NAME__info[] = "info";
static char speech_interfaces__srv__PlaySong_Event__FIELD_NAME__request[] = "request";
static char speech_interfaces__srv__PlaySong_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field speech_interfaces__srv__PlaySong_Event__FIELDS[] = {
  {
    {speech_interfaces__srv__PlaySong_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {speech_interfaces__srv__PlaySong_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {speech_interfaces__srv__PlaySong_Request__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
  {
    {speech_interfaces__srv__PlaySong_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {speech_interfaces__srv__PlaySong_Response__TYPE_NAME, 39, 39},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription speech_interfaces__srv__PlaySong_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {speech_interfaces__srv__PlaySong_Request__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {speech_interfaces__srv__PlaySong_Response__TYPE_NAME, 39, 39},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
speech_interfaces__srv__PlaySong_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {speech_interfaces__srv__PlaySong_Event__TYPE_NAME, 36, 36},
      {speech_interfaces__srv__PlaySong_Event__FIELDS, 3, 3},
    },
    {speech_interfaces__srv__PlaySong_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = speech_interfaces__srv__PlaySong_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = speech_interfaces__srv__PlaySong_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string song_path\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
speech_interfaces__srv__PlaySong__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {speech_interfaces__srv__PlaySong__TYPE_NAME, 30, 30},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 49, 49},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
speech_interfaces__srv__PlaySong_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {speech_interfaces__srv__PlaySong_Request__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
speech_interfaces__srv__PlaySong_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {speech_interfaces__srv__PlaySong_Response__TYPE_NAME, 39, 39},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
speech_interfaces__srv__PlaySong_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {speech_interfaces__srv__PlaySong_Event__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
speech_interfaces__srv__PlaySong__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *speech_interfaces__srv__PlaySong__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *speech_interfaces__srv__PlaySong_Event__get_individual_type_description_source(NULL);
    sources[4] = *speech_interfaces__srv__PlaySong_Request__get_individual_type_description_source(NULL);
    sources[5] = *speech_interfaces__srv__PlaySong_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
speech_interfaces__srv__PlaySong_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *speech_interfaces__srv__PlaySong_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
speech_interfaces__srv__PlaySong_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *speech_interfaces__srv__PlaySong_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
speech_interfaces__srv__PlaySong_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *speech_interfaces__srv__PlaySong_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *speech_interfaces__srv__PlaySong_Request__get_individual_type_description_source(NULL);
    sources[4] = *speech_interfaces__srv__PlaySong_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
