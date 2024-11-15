// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from manipulation_interfaces:srv/SetPosture.idl
// generated code does not contain a copyright notice

#include "manipulation_interfaces/srv/detail/set_posture__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__SetPosture__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xaf, 0xb1, 0xe5, 0x01, 0x99, 0x5c, 0x56, 0x83,
      0x1e, 0x7c, 0xa9, 0xff, 0x30, 0x11, 0x39, 0x35,
      0x93, 0xe8, 0xbf, 0x0b, 0x02, 0x00, 0x45, 0x30,
      0x90, 0x33, 0x56, 0xfe, 0x8e, 0xb3, 0x2a, 0xc0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__SetPosture_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0x36, 0xd3, 0x5e, 0x9d, 0x21, 0x2c, 0x10,
      0x1d, 0x1a, 0x59, 0x56, 0x4d, 0x54, 0x48, 0x2c,
      0xef, 0xb1, 0x51, 0x87, 0x2e, 0x4c, 0x82, 0x95,
      0x2e, 0x43, 0xf9, 0xe7, 0xb7, 0x4b, 0x7b, 0xc0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__SetPosture_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xae, 0xa4, 0x3c, 0x97, 0xaa, 0x39, 0xb6, 0xfc,
      0x33, 0x5b, 0xb8, 0xbb, 0x6a, 0x37, 0xc6, 0x9f,
      0x0b, 0x1b, 0x4e, 0xba, 0xf7, 0x38, 0x85, 0x2c,
      0x40, 0x1d, 0xf6, 0xc0, 0x25, 0x24, 0xa1, 0xf6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__SetPosture_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x01, 0xe3, 0xb0, 0xab, 0xce, 0x1e, 0x29, 0xd3,
      0x2c, 0x8d, 0x6b, 0x49, 0x53, 0x40, 0x70, 0x9e,
      0x9c, 0x3e, 0x07, 0x2a, 0xcb, 0xd1, 0xfa, 0xc3,
      0x59, 0x67, 0x6b, 0x3a, 0xe3, 0x0d, 0x52, 0xaf,
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

static char manipulation_interfaces__srv__SetPosture__TYPE_NAME[] = "manipulation_interfaces/srv/SetPosture";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char manipulation_interfaces__srv__SetPosture_Event__TYPE_NAME[] = "manipulation_interfaces/srv/SetPosture_Event";
static char manipulation_interfaces__srv__SetPosture_Request__TYPE_NAME[] = "manipulation_interfaces/srv/SetPosture_Request";
static char manipulation_interfaces__srv__SetPosture_Response__TYPE_NAME[] = "manipulation_interfaces/srv/SetPosture_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char manipulation_interfaces__srv__SetPosture__FIELD_NAME__request_message[] = "request_message";
static char manipulation_interfaces__srv__SetPosture__FIELD_NAME__response_message[] = "response_message";
static char manipulation_interfaces__srv__SetPosture__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field manipulation_interfaces__srv__SetPosture__FIELDS[] = {
  {
    {manipulation_interfaces__srv__SetPosture__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {manipulation_interfaces__srv__SetPosture_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__SetPosture__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {manipulation_interfaces__srv__SetPosture_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__SetPosture__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {manipulation_interfaces__srv__SetPosture_Event__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription manipulation_interfaces__srv__SetPosture__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__SetPosture_Event__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__SetPosture_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__SetPosture_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
manipulation_interfaces__srv__SetPosture__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {manipulation_interfaces__srv__SetPosture__TYPE_NAME, 38, 38},
      {manipulation_interfaces__srv__SetPosture__FIELDS, 3, 3},
    },
    {manipulation_interfaces__srv__SetPosture__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = manipulation_interfaces__srv__SetPosture_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = manipulation_interfaces__srv__SetPosture_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = manipulation_interfaces__srv__SetPosture_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char manipulation_interfaces__srv__SetPosture_Request__FIELD_NAME__posture_name[] = "posture_name";

static rosidl_runtime_c__type_description__Field manipulation_interfaces__srv__SetPosture_Request__FIELDS[] = {
  {
    {manipulation_interfaces__srv__SetPosture_Request__FIELD_NAME__posture_name, 12, 12},
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
manipulation_interfaces__srv__SetPosture_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {manipulation_interfaces__srv__SetPosture_Request__TYPE_NAME, 46, 46},
      {manipulation_interfaces__srv__SetPosture_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char manipulation_interfaces__srv__SetPosture_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field manipulation_interfaces__srv__SetPosture_Response__FIELDS[] = {
  {
    {manipulation_interfaces__srv__SetPosture_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
manipulation_interfaces__srv__SetPosture_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {manipulation_interfaces__srv__SetPosture_Response__TYPE_NAME, 47, 47},
      {manipulation_interfaces__srv__SetPosture_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char manipulation_interfaces__srv__SetPosture_Event__FIELD_NAME__info[] = "info";
static char manipulation_interfaces__srv__SetPosture_Event__FIELD_NAME__request[] = "request";
static char manipulation_interfaces__srv__SetPosture_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field manipulation_interfaces__srv__SetPosture_Event__FIELDS[] = {
  {
    {manipulation_interfaces__srv__SetPosture_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__SetPosture_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {manipulation_interfaces__srv__SetPosture_Request__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__SetPosture_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {manipulation_interfaces__srv__SetPosture_Response__TYPE_NAME, 47, 47},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription manipulation_interfaces__srv__SetPosture_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__SetPosture_Request__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__SetPosture_Response__TYPE_NAME, 47, 47},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
manipulation_interfaces__srv__SetPosture_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {manipulation_interfaces__srv__SetPosture_Event__TYPE_NAME, 44, 44},
      {manipulation_interfaces__srv__SetPosture_Event__FIELDS, 3, 3},
    },
    {manipulation_interfaces__srv__SetPosture_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = manipulation_interfaces__srv__SetPosture_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = manipulation_interfaces__srv__SetPosture_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# SetPosture.srv\n"
  "string posture_name\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__SetPosture__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {manipulation_interfaces__srv__SetPosture__TYPE_NAME, 38, 38},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 54, 54},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__SetPosture_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {manipulation_interfaces__srv__SetPosture_Request__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__SetPosture_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {manipulation_interfaces__srv__SetPosture_Response__TYPE_NAME, 47, 47},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__SetPosture_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {manipulation_interfaces__srv__SetPosture_Event__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__SetPosture__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *manipulation_interfaces__srv__SetPosture__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *manipulation_interfaces__srv__SetPosture_Event__get_individual_type_description_source(NULL);
    sources[3] = *manipulation_interfaces__srv__SetPosture_Request__get_individual_type_description_source(NULL);
    sources[4] = *manipulation_interfaces__srv__SetPosture_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__SetPosture_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *manipulation_interfaces__srv__SetPosture_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__SetPosture_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *manipulation_interfaces__srv__SetPosture_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__SetPosture_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *manipulation_interfaces__srv__SetPosture_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *manipulation_interfaces__srv__SetPosture_Request__get_individual_type_description_source(NULL);
    sources[3] = *manipulation_interfaces__srv__SetPosture_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
