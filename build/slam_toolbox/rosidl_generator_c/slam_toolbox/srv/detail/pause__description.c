// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from slam_toolbox:srv/Pause.idl
// generated code does not contain a copyright notice

#include "slam_toolbox/srv/detail/pause__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__Pause__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x70, 0x97, 0x1d, 0xa2, 0xd6, 0xda, 0x30, 0x8b,
      0x62, 0xb9, 0xef, 0x6e, 0x46, 0x15, 0x20, 0x2d,
      0x9b, 0x3c, 0x6e, 0x94, 0x5f, 0xcf, 0xce, 0x5f,
      0xfd, 0xed, 0x1b, 0x45, 0x42, 0x3a, 0x23, 0x6d,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__Pause_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xbd, 0x94, 0x12, 0x8b, 0x24, 0x76, 0x06, 0x5d,
      0x43, 0xca, 0xa2, 0x6f, 0x43, 0x33, 0x4a, 0xd5,
      0xb6, 0x88, 0x18, 0x6e, 0x82, 0xca, 0x73, 0x36,
      0x6f, 0x11, 0xe6, 0x45, 0x9b, 0x75, 0x62, 0xa6,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__Pause_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x72, 0xbc, 0x94, 0x25, 0x36, 0xd6, 0xfb, 0x90,
      0x33, 0x77, 0xdb, 0xf4, 0x8c, 0x7c, 0x2e, 0x0c,
      0x96, 0x5c, 0xb2, 0xb0, 0x4f, 0x50, 0x84, 0x77,
      0xd9, 0xc8, 0xac, 0xed, 0x68, 0x7d, 0x6d, 0x94,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__Pause_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xeb, 0x6f, 0x1f, 0x0d, 0x44, 0xd5, 0xe3, 0x67,
      0x60, 0x11, 0xb6, 0xaa, 0x7e, 0x95, 0xfb, 0xeb,
      0xd8, 0xe4, 0xb2, 0xc6, 0xd0, 0xfd, 0x3b, 0x91,
      0xa9, 0xa6, 0x1c, 0xac, 0x17, 0x21, 0x4e, 0x28,
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

static char slam_toolbox__srv__Pause__TYPE_NAME[] = "slam_toolbox/srv/Pause";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char slam_toolbox__srv__Pause_Event__TYPE_NAME[] = "slam_toolbox/srv/Pause_Event";
static char slam_toolbox__srv__Pause_Request__TYPE_NAME[] = "slam_toolbox/srv/Pause_Request";
static char slam_toolbox__srv__Pause_Response__TYPE_NAME[] = "slam_toolbox/srv/Pause_Response";

// Define type names, field names, and default values
static char slam_toolbox__srv__Pause__FIELD_NAME__request_message[] = "request_message";
static char slam_toolbox__srv__Pause__FIELD_NAME__response_message[] = "response_message";
static char slam_toolbox__srv__Pause__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__Pause__FIELDS[] = {
  {
    {slam_toolbox__srv__Pause__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {slam_toolbox__srv__Pause_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__Pause__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {slam_toolbox__srv__Pause_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__Pause__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {slam_toolbox__srv__Pause_Event__TYPE_NAME, 28, 28},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription slam_toolbox__srv__Pause__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__Pause_Event__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__Pause_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__Pause_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
slam_toolbox__srv__Pause__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__Pause__TYPE_NAME, 22, 22},
      {slam_toolbox__srv__Pause__FIELDS, 3, 3},
    },
    {slam_toolbox__srv__Pause__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = slam_toolbox__srv__Pause_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = slam_toolbox__srv__Pause_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = slam_toolbox__srv__Pause_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char slam_toolbox__srv__Pause_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__Pause_Request__FIELDS[] = {
  {
    {slam_toolbox__srv__Pause_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
slam_toolbox__srv__Pause_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__Pause_Request__TYPE_NAME, 30, 30},
      {slam_toolbox__srv__Pause_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char slam_toolbox__srv__Pause_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__Pause_Response__FIELDS[] = {
  {
    {slam_toolbox__srv__Pause_Response__FIELD_NAME__status, 6, 6},
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
slam_toolbox__srv__Pause_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__Pause_Response__TYPE_NAME, 31, 31},
      {slam_toolbox__srv__Pause_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char slam_toolbox__srv__Pause_Event__FIELD_NAME__info[] = "info";
static char slam_toolbox__srv__Pause_Event__FIELD_NAME__request[] = "request";
static char slam_toolbox__srv__Pause_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__Pause_Event__FIELDS[] = {
  {
    {slam_toolbox__srv__Pause_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__Pause_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {slam_toolbox__srv__Pause_Request__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__Pause_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {slam_toolbox__srv__Pause_Response__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription slam_toolbox__srv__Pause_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__Pause_Request__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__Pause_Response__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
slam_toolbox__srv__Pause_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__Pause_Event__TYPE_NAME, 28, 28},
      {slam_toolbox__srv__Pause_Event__FIELDS, 3, 3},
    },
    {slam_toolbox__srv__Pause_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = slam_toolbox__srv__Pause_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = slam_toolbox__srv__Pause_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# trigger pause toggle\n"
  "\n"
  "---\n"
  "bool status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__Pause__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__Pause__TYPE_NAME, 22, 22},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 39, 39},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__Pause_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__Pause_Request__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__Pause_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__Pause_Response__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__Pause_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__Pause_Event__TYPE_NAME, 28, 28},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__Pause__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__Pause__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *slam_toolbox__srv__Pause_Event__get_individual_type_description_source(NULL);
    sources[4] = *slam_toolbox__srv__Pause_Request__get_individual_type_description_source(NULL);
    sources[5] = *slam_toolbox__srv__Pause_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__Pause_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__Pause_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__Pause_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__Pause_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__Pause_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__Pause_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *slam_toolbox__srv__Pause_Request__get_individual_type_description_source(NULL);
    sources[4] = *slam_toolbox__srv__Pause_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
