// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from manipulation_interfaces:srv/ToggleAwareness.idl
// generated code does not contain a copyright notice

#include "manipulation_interfaces/srv/detail/toggle_awareness__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__ToggleAwareness__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x11, 0xb3, 0xeb, 0xa7, 0x5e, 0xc1, 0xd5, 0x6a,
      0xcc, 0x47, 0x48, 0x42, 0x1f, 0xc7, 0xa6, 0x37,
      0x2f, 0x57, 0x77, 0xd8, 0x2c, 0x8b, 0x69, 0xca,
      0xa2, 0x3f, 0xe3, 0xb9, 0x57, 0x00, 0xc3, 0x6b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__ToggleAwareness_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x63, 0x29, 0xf3, 0x35, 0x7d, 0xf9, 0xf3, 0x06,
      0x6e, 0x23, 0x6a, 0x1e, 0x2e, 0x29, 0x7d, 0x94,
      0xe7, 0x51, 0x68, 0xbc, 0x93, 0x1d, 0x04, 0xd6,
      0xc6, 0xa7, 0x7e, 0x20, 0xed, 0xa1, 0x7d, 0x5c,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__ToggleAwareness_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0b, 0x15, 0xb0, 0x46, 0xbe, 0x44, 0xf2, 0x55,
      0xa4, 0x80, 0xa1, 0x92, 0x4d, 0x98, 0x31, 0x61,
      0x58, 0x75, 0x9f, 0xc5, 0xe8, 0x8c, 0xda, 0x0f,
      0x5d, 0x13, 0xf9, 0x05, 0x45, 0xc3, 0xef, 0x22,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__ToggleAwareness_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x9f, 0x3a, 0x60, 0xa9, 0xb2, 0xa2, 0x6f, 0x25,
      0x5e, 0x8c, 0x06, 0xef, 0x59, 0xb0, 0xe9, 0xcb,
      0x19, 0xa7, 0x06, 0x71, 0x47, 0xe7, 0x9c, 0xb6,
      0x94, 0x8d, 0x7f, 0xea, 0xfd, 0x66, 0x45, 0xae,
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

static char manipulation_interfaces__srv__ToggleAwareness__TYPE_NAME[] = "manipulation_interfaces/srv/ToggleAwareness";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char manipulation_interfaces__srv__ToggleAwareness_Event__TYPE_NAME[] = "manipulation_interfaces/srv/ToggleAwareness_Event";
static char manipulation_interfaces__srv__ToggleAwareness_Request__TYPE_NAME[] = "manipulation_interfaces/srv/ToggleAwareness_Request";
static char manipulation_interfaces__srv__ToggleAwareness_Response__TYPE_NAME[] = "manipulation_interfaces/srv/ToggleAwareness_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char manipulation_interfaces__srv__ToggleAwareness__FIELD_NAME__request_message[] = "request_message";
static char manipulation_interfaces__srv__ToggleAwareness__FIELD_NAME__response_message[] = "response_message";
static char manipulation_interfaces__srv__ToggleAwareness__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field manipulation_interfaces__srv__ToggleAwareness__FIELDS[] = {
  {
    {manipulation_interfaces__srv__ToggleAwareness__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {manipulation_interfaces__srv__ToggleAwareness_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__ToggleAwareness__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {manipulation_interfaces__srv__ToggleAwareness_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__ToggleAwareness__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {manipulation_interfaces__srv__ToggleAwareness_Event__TYPE_NAME, 49, 49},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription manipulation_interfaces__srv__ToggleAwareness__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__ToggleAwareness_Event__TYPE_NAME, 49, 49},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__ToggleAwareness_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__ToggleAwareness_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
manipulation_interfaces__srv__ToggleAwareness__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {manipulation_interfaces__srv__ToggleAwareness__TYPE_NAME, 43, 43},
      {manipulation_interfaces__srv__ToggleAwareness__FIELDS, 3, 3},
    },
    {manipulation_interfaces__srv__ToggleAwareness__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = manipulation_interfaces__srv__ToggleAwareness_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = manipulation_interfaces__srv__ToggleAwareness_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = manipulation_interfaces__srv__ToggleAwareness_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char manipulation_interfaces__srv__ToggleAwareness_Request__FIELD_NAME__enable[] = "enable";

static rosidl_runtime_c__type_description__Field manipulation_interfaces__srv__ToggleAwareness_Request__FIELDS[] = {
  {
    {manipulation_interfaces__srv__ToggleAwareness_Request__FIELD_NAME__enable, 6, 6},
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
manipulation_interfaces__srv__ToggleAwareness_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {manipulation_interfaces__srv__ToggleAwareness_Request__TYPE_NAME, 51, 51},
      {manipulation_interfaces__srv__ToggleAwareness_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char manipulation_interfaces__srv__ToggleAwareness_Response__FIELD_NAME__success[] = "success";
static char manipulation_interfaces__srv__ToggleAwareness_Response__FIELD_NAME__message[] = "message";

static rosidl_runtime_c__type_description__Field manipulation_interfaces__srv__ToggleAwareness_Response__FIELDS[] = {
  {
    {manipulation_interfaces__srv__ToggleAwareness_Response__FIELD_NAME__success, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__ToggleAwareness_Response__FIELD_NAME__message, 7, 7},
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
manipulation_interfaces__srv__ToggleAwareness_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {manipulation_interfaces__srv__ToggleAwareness_Response__TYPE_NAME, 52, 52},
      {manipulation_interfaces__srv__ToggleAwareness_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char manipulation_interfaces__srv__ToggleAwareness_Event__FIELD_NAME__info[] = "info";
static char manipulation_interfaces__srv__ToggleAwareness_Event__FIELD_NAME__request[] = "request";
static char manipulation_interfaces__srv__ToggleAwareness_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field manipulation_interfaces__srv__ToggleAwareness_Event__FIELDS[] = {
  {
    {manipulation_interfaces__srv__ToggleAwareness_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__ToggleAwareness_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {manipulation_interfaces__srv__ToggleAwareness_Request__TYPE_NAME, 51, 51},
    },
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__ToggleAwareness_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {manipulation_interfaces__srv__ToggleAwareness_Response__TYPE_NAME, 52, 52},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription manipulation_interfaces__srv__ToggleAwareness_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__ToggleAwareness_Request__TYPE_NAME, 51, 51},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__ToggleAwareness_Response__TYPE_NAME, 52, 52},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
manipulation_interfaces__srv__ToggleAwareness_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {manipulation_interfaces__srv__ToggleAwareness_Event__TYPE_NAME, 49, 49},
      {manipulation_interfaces__srv__ToggleAwareness_Event__FIELDS, 3, 3},
    },
    {manipulation_interfaces__srv__ToggleAwareness_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = manipulation_interfaces__srv__ToggleAwareness_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = manipulation_interfaces__srv__ToggleAwareness_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "bool enable\n"
  "---\n"
  "bool success\n"
  "string message";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__ToggleAwareness__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {manipulation_interfaces__srv__ToggleAwareness__TYPE_NAME, 43, 43},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 44, 44},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__ToggleAwareness_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {manipulation_interfaces__srv__ToggleAwareness_Request__TYPE_NAME, 51, 51},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__ToggleAwareness_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {manipulation_interfaces__srv__ToggleAwareness_Response__TYPE_NAME, 52, 52},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__ToggleAwareness_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {manipulation_interfaces__srv__ToggleAwareness_Event__TYPE_NAME, 49, 49},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__ToggleAwareness__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *manipulation_interfaces__srv__ToggleAwareness__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *manipulation_interfaces__srv__ToggleAwareness_Event__get_individual_type_description_source(NULL);
    sources[3] = *manipulation_interfaces__srv__ToggleAwareness_Request__get_individual_type_description_source(NULL);
    sources[4] = *manipulation_interfaces__srv__ToggleAwareness_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__ToggleAwareness_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *manipulation_interfaces__srv__ToggleAwareness_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__ToggleAwareness_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *manipulation_interfaces__srv__ToggleAwareness_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__ToggleAwareness_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *manipulation_interfaces__srv__ToggleAwareness_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *manipulation_interfaces__srv__ToggleAwareness_Request__get_individual_type_description_source(NULL);
    sources[3] = *manipulation_interfaces__srv__ToggleAwareness_Response__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
