// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from slam_toolbox:srv/ClearQueue.idl
// generated code does not contain a copyright notice

#include "slam_toolbox/srv/detail/clear_queue__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__ClearQueue__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5a, 0xe7, 0x28, 0x68, 0x87, 0x35, 0x1a, 0x43,
      0xcd, 0x62, 0x65, 0xcb, 0xd3, 0xec, 0x3f, 0xdf,
      0x00, 0x74, 0xfa, 0x6e, 0x9f, 0x39, 0xc1, 0x70,
      0x57, 0x35, 0x1b, 0x6a, 0xb4, 0x41, 0x54, 0x77,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__ClearQueue_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5b, 0xe3, 0x9e, 0xc9, 0x2b, 0x1c, 0x3d, 0x67,
      0xd7, 0x2d, 0x9d, 0x33, 0x2a, 0x5e, 0x5e, 0x84,
      0xc1, 0x2f, 0xbf, 0xe3, 0x6e, 0xfa, 0xf9, 0x31,
      0x1c, 0x7e, 0xcb, 0xe3, 0x23, 0x40, 0xed, 0xb5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__ClearQueue_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x09, 0x1b, 0x71, 0xde, 0x50, 0xc6, 0x32, 0x58,
      0x03, 0x53, 0x3b, 0x81, 0x5e, 0xc0, 0xa4, 0xd3,
      0x9a, 0x57, 0x1c, 0x0d, 0x56, 0x41, 0xe5, 0xea,
      0x5c, 0xef, 0xff, 0xe4, 0xd7, 0x0c, 0x14, 0x90,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__ClearQueue_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x8c, 0x48, 0x7d, 0x1e, 0xc2, 0x14, 0x01, 0xb6,
      0x00, 0x49, 0x5e, 0x31, 0x8d, 0x20, 0xfc, 0x6c,
      0xa6, 0xd9, 0xd7, 0x32, 0x90, 0x91, 0x8e, 0xaa,
      0x8b, 0x40, 0x85, 0xc8, 0x73, 0xb2, 0xb4, 0xe9,
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

static char slam_toolbox__srv__ClearQueue__TYPE_NAME[] = "slam_toolbox/srv/ClearQueue";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char slam_toolbox__srv__ClearQueue_Event__TYPE_NAME[] = "slam_toolbox/srv/ClearQueue_Event";
static char slam_toolbox__srv__ClearQueue_Request__TYPE_NAME[] = "slam_toolbox/srv/ClearQueue_Request";
static char slam_toolbox__srv__ClearQueue_Response__TYPE_NAME[] = "slam_toolbox/srv/ClearQueue_Response";

// Define type names, field names, and default values
static char slam_toolbox__srv__ClearQueue__FIELD_NAME__request_message[] = "request_message";
static char slam_toolbox__srv__ClearQueue__FIELD_NAME__response_message[] = "response_message";
static char slam_toolbox__srv__ClearQueue__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__ClearQueue__FIELDS[] = {
  {
    {slam_toolbox__srv__ClearQueue__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {slam_toolbox__srv__ClearQueue_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__ClearQueue__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {slam_toolbox__srv__ClearQueue_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__ClearQueue__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {slam_toolbox__srv__ClearQueue_Event__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription slam_toolbox__srv__ClearQueue__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__ClearQueue_Event__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__ClearQueue_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__ClearQueue_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
slam_toolbox__srv__ClearQueue__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__ClearQueue__TYPE_NAME, 27, 27},
      {slam_toolbox__srv__ClearQueue__FIELDS, 3, 3},
    },
    {slam_toolbox__srv__ClearQueue__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = slam_toolbox__srv__ClearQueue_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = slam_toolbox__srv__ClearQueue_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = slam_toolbox__srv__ClearQueue_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char slam_toolbox__srv__ClearQueue_Request__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__ClearQueue_Request__FIELDS[] = {
  {
    {slam_toolbox__srv__ClearQueue_Request__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
slam_toolbox__srv__ClearQueue_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__ClearQueue_Request__TYPE_NAME, 35, 35},
      {slam_toolbox__srv__ClearQueue_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char slam_toolbox__srv__ClearQueue_Response__FIELD_NAME__status[] = "status";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__ClearQueue_Response__FIELDS[] = {
  {
    {slam_toolbox__srv__ClearQueue_Response__FIELD_NAME__status, 6, 6},
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
slam_toolbox__srv__ClearQueue_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__ClearQueue_Response__TYPE_NAME, 36, 36},
      {slam_toolbox__srv__ClearQueue_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char slam_toolbox__srv__ClearQueue_Event__FIELD_NAME__info[] = "info";
static char slam_toolbox__srv__ClearQueue_Event__FIELD_NAME__request[] = "request";
static char slam_toolbox__srv__ClearQueue_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__ClearQueue_Event__FIELDS[] = {
  {
    {slam_toolbox__srv__ClearQueue_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__ClearQueue_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {slam_toolbox__srv__ClearQueue_Request__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__ClearQueue_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {slam_toolbox__srv__ClearQueue_Response__TYPE_NAME, 36, 36},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription slam_toolbox__srv__ClearQueue_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__ClearQueue_Request__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__ClearQueue_Response__TYPE_NAME, 36, 36},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
slam_toolbox__srv__ClearQueue_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__ClearQueue_Event__TYPE_NAME, 33, 33},
      {slam_toolbox__srv__ClearQueue_Event__FIELDS, 3, 3},
    },
    {slam_toolbox__srv__ClearQueue_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = slam_toolbox__srv__ClearQueue_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = slam_toolbox__srv__ClearQueue_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "\n"
  "---\n"
  "bool status";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__ClearQueue__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__ClearQueue__TYPE_NAME, 27, 27},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 16, 16},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__ClearQueue_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__ClearQueue_Request__TYPE_NAME, 35, 35},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__ClearQueue_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__ClearQueue_Response__TYPE_NAME, 36, 36},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__ClearQueue_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__ClearQueue_Event__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__ClearQueue__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__ClearQueue__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *slam_toolbox__srv__ClearQueue_Event__get_individual_type_description_source(NULL);
    sources[4] = *slam_toolbox__srv__ClearQueue_Request__get_individual_type_description_source(NULL);
    sources[5] = *slam_toolbox__srv__ClearQueue_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__ClearQueue_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__ClearQueue_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__ClearQueue_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__ClearQueue_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__ClearQueue_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__ClearQueue_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *slam_toolbox__srv__ClearQueue_Request__get_individual_type_description_source(NULL);
    sources[4] = *slam_toolbox__srv__ClearQueue_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
