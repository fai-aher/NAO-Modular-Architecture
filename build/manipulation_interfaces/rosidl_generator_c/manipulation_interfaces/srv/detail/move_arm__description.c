// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from manipulation_interfaces:srv/MoveArm.idl
// generated code does not contain a copyright notice

#include "manipulation_interfaces/srv/detail/move_arm__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__MoveArm__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x32, 0x83, 0x36, 0x00, 0x44, 0x21, 0x06, 0x54,
      0x02, 0xec, 0xbc, 0x1e, 0xf1, 0xc9, 0x2a, 0xbc,
      0xa2, 0xa8, 0x81, 0xd0, 0x6a, 0x9d, 0xa8, 0x89,
      0x09, 0xc6, 0xee, 0x2d, 0x08, 0x9a, 0xf7, 0x69,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__MoveArm_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb4, 0xe8, 0xae, 0x7b, 0xa8, 0x36, 0xe2, 0xaf,
      0x58, 0x47, 0x94, 0xb0, 0xa7, 0x44, 0xca, 0xdc,
      0xa2, 0x2e, 0x0d, 0xf3, 0xa0, 0x87, 0x53, 0x4a,
      0x77, 0x62, 0xfb, 0x16, 0x6c, 0xb2, 0x77, 0xd4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__MoveArm_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x14, 0x85, 0x82, 0x0d, 0x46, 0x52, 0x61, 0x33,
      0x71, 0xe0, 0x89, 0x0f, 0xd0, 0x87, 0x8a, 0x1c,
      0x27, 0x23, 0x0a, 0x5a, 0x2a, 0x71, 0x4d, 0x0d,
      0x2d, 0x60, 0x98, 0x03, 0x2e, 0x32, 0xb1, 0xc4,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_manipulation_interfaces
const rosidl_type_hash_t *
manipulation_interfaces__srv__MoveArm_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4f, 0x8c, 0xf5, 0xc6, 0x24, 0xfa, 0x81, 0x44,
      0x19, 0x79, 0xdc, 0xb9, 0x8f, 0x07, 0xc4, 0xc4,
      0xa1, 0xc0, 0x9d, 0xb5, 0x8c, 0xfa, 0x0d, 0x6e,
      0xab, 0x97, 0xe9, 0x25, 0xb8, 0x7d, 0x6d, 0x37,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/point__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Point__EXPECTED_HASH = {1, {
    0x69, 0x63, 0x08, 0x48, 0x42, 0xa9, 0xb0, 0x44,
    0x94, 0xd6, 0xb2, 0x94, 0x1d, 0x11, 0x44, 0x47,
    0x08, 0xd8, 0x92, 0xda, 0x2f, 0x4b, 0x09, 0x84,
    0x3b, 0x9c, 0x43, 0xf4, 0x2a, 0x7f, 0x68, 0x81,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char manipulation_interfaces__srv__MoveArm__TYPE_NAME[] = "manipulation_interfaces/srv/MoveArm";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Point__TYPE_NAME[] = "geometry_msgs/msg/Point";
static char manipulation_interfaces__srv__MoveArm_Event__TYPE_NAME[] = "manipulation_interfaces/srv/MoveArm_Event";
static char manipulation_interfaces__srv__MoveArm_Request__TYPE_NAME[] = "manipulation_interfaces/srv/MoveArm_Request";
static char manipulation_interfaces__srv__MoveArm_Response__TYPE_NAME[] = "manipulation_interfaces/srv/MoveArm_Response";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char manipulation_interfaces__srv__MoveArm__FIELD_NAME__request_message[] = "request_message";
static char manipulation_interfaces__srv__MoveArm__FIELD_NAME__response_message[] = "response_message";
static char manipulation_interfaces__srv__MoveArm__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field manipulation_interfaces__srv__MoveArm__FIELDS[] = {
  {
    {manipulation_interfaces__srv__MoveArm__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {manipulation_interfaces__srv__MoveArm_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__MoveArm__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {manipulation_interfaces__srv__MoveArm_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__MoveArm__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {manipulation_interfaces__srv__MoveArm_Event__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription manipulation_interfaces__srv__MoveArm__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__MoveArm_Event__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__MoveArm_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__MoveArm_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
manipulation_interfaces__srv__MoveArm__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {manipulation_interfaces__srv__MoveArm__TYPE_NAME, 35, 35},
      {manipulation_interfaces__srv__MoveArm__FIELDS, 3, 3},
    },
    {manipulation_interfaces__srv__MoveArm__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = manipulation_interfaces__srv__MoveArm_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = manipulation_interfaces__srv__MoveArm_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = manipulation_interfaces__srv__MoveArm_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char manipulation_interfaces__srv__MoveArm_Request__FIELD_NAME__target_position[] = "target_position";

static rosidl_runtime_c__type_description__Field manipulation_interfaces__srv__MoveArm_Request__FIELDS[] = {
  {
    {manipulation_interfaces__srv__MoveArm_Request__FIELD_NAME__target_position, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription manipulation_interfaces__srv__MoveArm_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
manipulation_interfaces__srv__MoveArm_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {manipulation_interfaces__srv__MoveArm_Request__TYPE_NAME, 43, 43},
      {manipulation_interfaces__srv__MoveArm_Request__FIELDS, 1, 1},
    },
    {manipulation_interfaces__srv__MoveArm_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char manipulation_interfaces__srv__MoveArm_Response__FIELD_NAME__success[] = "success";

static rosidl_runtime_c__type_description__Field manipulation_interfaces__srv__MoveArm_Response__FIELDS[] = {
  {
    {manipulation_interfaces__srv__MoveArm_Response__FIELD_NAME__success, 7, 7},
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
manipulation_interfaces__srv__MoveArm_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {manipulation_interfaces__srv__MoveArm_Response__TYPE_NAME, 44, 44},
      {manipulation_interfaces__srv__MoveArm_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char manipulation_interfaces__srv__MoveArm_Event__FIELD_NAME__info[] = "info";
static char manipulation_interfaces__srv__MoveArm_Event__FIELD_NAME__request[] = "request";
static char manipulation_interfaces__srv__MoveArm_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field manipulation_interfaces__srv__MoveArm_Event__FIELDS[] = {
  {
    {manipulation_interfaces__srv__MoveArm_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__MoveArm_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {manipulation_interfaces__srv__MoveArm_Request__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__MoveArm_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {manipulation_interfaces__srv__MoveArm_Response__TYPE_NAME, 44, 44},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription manipulation_interfaces__srv__MoveArm_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Point__TYPE_NAME, 23, 23},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__MoveArm_Request__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {manipulation_interfaces__srv__MoveArm_Response__TYPE_NAME, 44, 44},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
manipulation_interfaces__srv__MoveArm_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {manipulation_interfaces__srv__MoveArm_Event__TYPE_NAME, 41, 41},
      {manipulation_interfaces__srv__MoveArm_Event__FIELDS, 3, 3},
    },
    {manipulation_interfaces__srv__MoveArm_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Point__EXPECTED_HASH, geometry_msgs__msg__Point__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Point__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = manipulation_interfaces__srv__MoveArm_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = manipulation_interfaces__srv__MoveArm_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "geometry_msgs/Point target_position\n"
  "---\n"
  "bool success";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__MoveArm__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {manipulation_interfaces__srv__MoveArm__TYPE_NAME, 35, 35},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 53, 53},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__MoveArm_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {manipulation_interfaces__srv__MoveArm_Request__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__MoveArm_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {manipulation_interfaces__srv__MoveArm_Response__TYPE_NAME, 44, 44},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
manipulation_interfaces__srv__MoveArm_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {manipulation_interfaces__srv__MoveArm_Event__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__MoveArm__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *manipulation_interfaces__srv__MoveArm__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *manipulation_interfaces__srv__MoveArm_Event__get_individual_type_description_source(NULL);
    sources[4] = *manipulation_interfaces__srv__MoveArm_Request__get_individual_type_description_source(NULL);
    sources[5] = *manipulation_interfaces__srv__MoveArm_Response__get_individual_type_description_source(NULL);
    sources[6] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__MoveArm_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *manipulation_interfaces__srv__MoveArm_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__MoveArm_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *manipulation_interfaces__srv__MoveArm_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
manipulation_interfaces__srv__MoveArm_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *manipulation_interfaces__srv__MoveArm_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Point__get_individual_type_description_source(NULL);
    sources[3] = *manipulation_interfaces__srv__MoveArm_Request__get_individual_type_description_source(NULL);
    sources[4] = *manipulation_interfaces__srv__MoveArm_Response__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
