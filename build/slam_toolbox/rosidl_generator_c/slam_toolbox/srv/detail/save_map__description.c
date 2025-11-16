// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from slam_toolbox:srv/SaveMap.idl
// generated code does not contain a copyright notice

#include "slam_toolbox/srv/detail/save_map__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__SaveMap__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfe, 0x7c, 0x2a, 0x4b, 0x4f, 0x98, 0x5a, 0x83,
      0xfa, 0x1a, 0x65, 0x1b, 0xa8, 0x3f, 0x19, 0xdd,
      0x13, 0x41, 0x7c, 0x6f, 0x3c, 0x6e, 0xfa, 0x6e,
      0xce, 0x88, 0x7e, 0x79, 0xc2, 0x3c, 0x3c, 0x09,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__SaveMap_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x53, 0x03, 0x0f, 0x29, 0xf7, 0x05, 0xb5, 0xf8,
      0x68, 0xbf, 0x35, 0xce, 0x8a, 0x5b, 0xdd, 0x5a,
      0x9b, 0x17, 0xf6, 0x70, 0x64, 0x93, 0x96, 0xfd,
      0xbb, 0xc4, 0xa8, 0xdb, 0xe7, 0xad, 0x09, 0x73,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__SaveMap_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x71, 0x37, 0x58, 0xaa, 0xa9, 0x82, 0xf6, 0x31,
      0x42, 0x0b, 0xcd, 0x79, 0x70, 0x7d, 0xe1, 0x6f,
      0x67, 0x29, 0xec, 0xd6, 0xba, 0x85, 0x50, 0x70,
      0x26, 0x71, 0x04, 0xbd, 0xcd, 0xee, 0x6b, 0x22,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__SaveMap_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x2d, 0x52, 0x04, 0x28, 0xf3, 0x46, 0x3b, 0x72,
      0xbc, 0xf5, 0x5f, 0x4e, 0x31, 0xe1, 0xa5, 0x55,
      0x29, 0x4f, 0x3e, 0xfe, 0x8e, 0xec, 0x0d, 0x04,
      0x57, 0x36, 0xe2, 0xdf, 0xc2, 0xa6, 0xb4, 0x24,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "std_msgs/msg/detail/string__functions.h"
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
static const rosidl_type_hash_t std_msgs__msg__String__EXPECTED_HASH = {1, {
    0xdf, 0x66, 0x8c, 0x74, 0x04, 0x82, 0xbb, 0xd4,
    0x8f, 0xb3, 0x9d, 0x76, 0xa7, 0x0d, 0xfd, 0x4b,
    0xd5, 0x9d, 0xb1, 0x28, 0x80, 0x21, 0x74, 0x35,
    0x03, 0x25, 0x9e, 0x94, 0x8f, 0x6b, 0x1a, 0x18,
  }};
#endif

static char slam_toolbox__srv__SaveMap__TYPE_NAME[] = "slam_toolbox/srv/SaveMap";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char slam_toolbox__srv__SaveMap_Event__TYPE_NAME[] = "slam_toolbox/srv/SaveMap_Event";
static char slam_toolbox__srv__SaveMap_Request__TYPE_NAME[] = "slam_toolbox/srv/SaveMap_Request";
static char slam_toolbox__srv__SaveMap_Response__TYPE_NAME[] = "slam_toolbox/srv/SaveMap_Response";
static char std_msgs__msg__String__TYPE_NAME[] = "std_msgs/msg/String";

// Define type names, field names, and default values
static char slam_toolbox__srv__SaveMap__FIELD_NAME__request_message[] = "request_message";
static char slam_toolbox__srv__SaveMap__FIELD_NAME__response_message[] = "response_message";
static char slam_toolbox__srv__SaveMap__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__SaveMap__FIELDS[] = {
  {
    {slam_toolbox__srv__SaveMap__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {slam_toolbox__srv__SaveMap_Request__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__SaveMap__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {slam_toolbox__srv__SaveMap_Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__SaveMap__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {slam_toolbox__srv__SaveMap_Event__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription slam_toolbox__srv__SaveMap__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__SaveMap_Event__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__SaveMap_Request__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__SaveMap_Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__String__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
slam_toolbox__srv__SaveMap__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__SaveMap__TYPE_NAME, 24, 24},
      {slam_toolbox__srv__SaveMap__FIELDS, 3, 3},
    },
    {slam_toolbox__srv__SaveMap__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = slam_toolbox__srv__SaveMap_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = slam_toolbox__srv__SaveMap_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = slam_toolbox__srv__SaveMap_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__String__EXPECTED_HASH, std_msgs__msg__String__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = std_msgs__msg__String__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char slam_toolbox__srv__SaveMap_Request__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__SaveMap_Request__FIELDS[] = {
  {
    {slam_toolbox__srv__SaveMap_Request__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__String__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription slam_toolbox__srv__SaveMap_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {std_msgs__msg__String__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
slam_toolbox__srv__SaveMap_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__SaveMap_Request__TYPE_NAME, 32, 32},
      {slam_toolbox__srv__SaveMap_Request__FIELDS, 1, 1},
    },
    {slam_toolbox__srv__SaveMap_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&std_msgs__msg__String__EXPECTED_HASH, std_msgs__msg__String__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = std_msgs__msg__String__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char slam_toolbox__srv__SaveMap_Response__FIELD_NAME__result[] = "result";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__SaveMap_Response__FIELDS[] = {
  {
    {slam_toolbox__srv__SaveMap_Response__FIELD_NAME__result, 6, 6},
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
slam_toolbox__srv__SaveMap_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__SaveMap_Response__TYPE_NAME, 33, 33},
      {slam_toolbox__srv__SaveMap_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char slam_toolbox__srv__SaveMap_Event__FIELD_NAME__info[] = "info";
static char slam_toolbox__srv__SaveMap_Event__FIELD_NAME__request[] = "request";
static char slam_toolbox__srv__SaveMap_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__SaveMap_Event__FIELDS[] = {
  {
    {slam_toolbox__srv__SaveMap_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__SaveMap_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {slam_toolbox__srv__SaveMap_Request__TYPE_NAME, 32, 32},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__SaveMap_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {slam_toolbox__srv__SaveMap_Response__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription slam_toolbox__srv__SaveMap_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__SaveMap_Request__TYPE_NAME, 32, 32},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__SaveMap_Response__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__String__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
slam_toolbox__srv__SaveMap_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__SaveMap_Event__TYPE_NAME, 30, 30},
      {slam_toolbox__srv__SaveMap_Event__FIELDS, 3, 3},
    },
    {slam_toolbox__srv__SaveMap_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = slam_toolbox__srv__SaveMap_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = slam_toolbox__srv__SaveMap_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__String__EXPECTED_HASH, std_msgs__msg__String__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = std_msgs__msg__String__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "std_msgs/String name\n"
  "---\n"
  "# Result code defintions\n"
  "uint8 RESULT_SUCCESS=0\n"
  "uint8 RESULT_NO_MAP_RECEIEVD=1\n"
  "uint8 RESULT_UNDEFINED_FAILURE=255\n"
  "\n"
  "uint8 result";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__SaveMap__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__SaveMap__TYPE_NAME, 24, 24},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 153, 153},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__SaveMap_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__SaveMap_Request__TYPE_NAME, 32, 32},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__SaveMap_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__SaveMap_Response__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__SaveMap_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__SaveMap_Event__TYPE_NAME, 30, 30},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__SaveMap__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__SaveMap__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *slam_toolbox__srv__SaveMap_Event__get_individual_type_description_source(NULL);
    sources[4] = *slam_toolbox__srv__SaveMap_Request__get_individual_type_description_source(NULL);
    sources[5] = *slam_toolbox__srv__SaveMap_Response__get_individual_type_description_source(NULL);
    sources[6] = *std_msgs__msg__String__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__SaveMap_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__SaveMap_Request__get_individual_type_description_source(NULL),
    sources[1] = *std_msgs__msg__String__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__SaveMap_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__SaveMap_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__SaveMap_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__SaveMap_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *slam_toolbox__srv__SaveMap_Request__get_individual_type_description_source(NULL);
    sources[4] = *slam_toolbox__srv__SaveMap_Response__get_individual_type_description_source(NULL);
    sources[5] = *std_msgs__msg__String__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
