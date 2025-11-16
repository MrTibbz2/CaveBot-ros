// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from slam_toolbox:srv/DeserializePoseGraph.idl
// generated code does not contain a copyright notice

#include "slam_toolbox/srv/detail/deserialize_pose_graph__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__DeserializePoseGraph__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xec, 0x7e, 0x27, 0xad, 0x87, 0x3d, 0x1c, 0x39,
      0x61, 0x58, 0x3c, 0x32, 0x88, 0xd7, 0xfe, 0x51,
      0x6b, 0xb0, 0x03, 0x5f, 0xc9, 0x76, 0x90, 0x78,
      0x65, 0x7f, 0x03, 0x77, 0xbd, 0x55, 0x54, 0x7a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__DeserializePoseGraph_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1b, 0xde, 0x65, 0xc1, 0x33, 0xa9, 0x3f, 0x94,
      0xc0, 0x99, 0x66, 0xa0, 0x20, 0x6c, 0xe0, 0x39,
      0x46, 0x70, 0x36, 0x95, 0xbc, 0x84, 0xe2, 0x5a,
      0xeb, 0xf9, 0x2f, 0xe6, 0x1a, 0x0a, 0xe4, 0xb0,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__DeserializePoseGraph_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa6, 0x13, 0xfd, 0x21, 0x46, 0xe4, 0x35, 0x34,
      0x73, 0x0a, 0xdd, 0x3f, 0xb8, 0x5b, 0x1d, 0xdc,
      0x9e, 0xf5, 0x6b, 0x82, 0xe5, 0x43, 0xcc, 0xf6,
      0xa0, 0x99, 0xc2, 0x81, 0x58, 0xff, 0xf0, 0x59,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_slam_toolbox
const rosidl_type_hash_t *
slam_toolbox__srv__DeserializePoseGraph_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x4f, 0x64, 0x96, 0x6b, 0x2c, 0xa3, 0xd5, 0xc7,
      0x79, 0xb6, 0xc1, 0xed, 0xa5, 0xaf, 0xf0, 0xe6,
      0x55, 0x36, 0x51, 0x23, 0x1c, 0xca, 0xf6, 0xb5,
      0x68, 0x0d, 0x70, 0xa4, 0x42, 0x57, 0x89, 0xdb,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "geometry_msgs/msg/detail/pose2_d__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t geometry_msgs__msg__Pose2D__EXPECTED_HASH = {1, {
    0xd6, 0x8e, 0xfa, 0x5b, 0x46, 0xe7, 0x0f, 0x7b,
    0x16, 0xca, 0x23, 0x08, 0x54, 0x74, 0xfd, 0xac,
    0x5a, 0x44, 0xb6, 0x38, 0x78, 0x3e, 0xc4, 0x2f,
    0x66, 0x1d, 0xa6, 0x4d, 0xa4, 0x72, 0x4c, 0xcc,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char slam_toolbox__srv__DeserializePoseGraph__TYPE_NAME[] = "slam_toolbox/srv/DeserializePoseGraph";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char geometry_msgs__msg__Pose2D__TYPE_NAME[] = "geometry_msgs/msg/Pose2D";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char slam_toolbox__srv__DeserializePoseGraph_Event__TYPE_NAME[] = "slam_toolbox/srv/DeserializePoseGraph_Event";
static char slam_toolbox__srv__DeserializePoseGraph_Request__TYPE_NAME[] = "slam_toolbox/srv/DeserializePoseGraph_Request";
static char slam_toolbox__srv__DeserializePoseGraph_Response__TYPE_NAME[] = "slam_toolbox/srv/DeserializePoseGraph_Response";

// Define type names, field names, and default values
static char slam_toolbox__srv__DeserializePoseGraph__FIELD_NAME__request_message[] = "request_message";
static char slam_toolbox__srv__DeserializePoseGraph__FIELD_NAME__response_message[] = "response_message";
static char slam_toolbox__srv__DeserializePoseGraph__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__DeserializePoseGraph__FIELDS[] = {
  {
    {slam_toolbox__srv__DeserializePoseGraph__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {slam_toolbox__srv__DeserializePoseGraph_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__DeserializePoseGraph__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {slam_toolbox__srv__DeserializePoseGraph_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__DeserializePoseGraph__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {slam_toolbox__srv__DeserializePoseGraph_Event__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription slam_toolbox__srv__DeserializePoseGraph__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__DeserializePoseGraph_Event__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__DeserializePoseGraph_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__DeserializePoseGraph_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
slam_toolbox__srv__DeserializePoseGraph__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__DeserializePoseGraph__TYPE_NAME, 37, 37},
      {slam_toolbox__srv__DeserializePoseGraph__FIELDS, 3, 3},
    },
    {slam_toolbox__srv__DeserializePoseGraph__REFERENCED_TYPE_DESCRIPTIONS, 6, 6},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose2D__EXPECTED_HASH, geometry_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = slam_toolbox__srv__DeserializePoseGraph_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = slam_toolbox__srv__DeserializePoseGraph_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[5].fields = slam_toolbox__srv__DeserializePoseGraph_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char slam_toolbox__srv__DeserializePoseGraph_Request__FIELD_NAME__filename[] = "filename";
static char slam_toolbox__srv__DeserializePoseGraph_Request__FIELD_NAME__match_type[] = "match_type";
static char slam_toolbox__srv__DeserializePoseGraph_Request__FIELD_NAME__initial_pose[] = "initial_pose";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__DeserializePoseGraph_Request__FIELDS[] = {
  {
    {slam_toolbox__srv__DeserializePoseGraph_Request__FIELD_NAME__filename, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__DeserializePoseGraph_Request__FIELD_NAME__match_type, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__DeserializePoseGraph_Request__FIELD_NAME__initial_pose, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription slam_toolbox__srv__DeserializePoseGraph_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
slam_toolbox__srv__DeserializePoseGraph_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__DeserializePoseGraph_Request__TYPE_NAME, 45, 45},
      {slam_toolbox__srv__DeserializePoseGraph_Request__FIELDS, 3, 3},
    },
    {slam_toolbox__srv__DeserializePoseGraph_Request__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Pose2D__EXPECTED_HASH, geometry_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char slam_toolbox__srv__DeserializePoseGraph_Response__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__DeserializePoseGraph_Response__FIELDS[] = {
  {
    {slam_toolbox__srv__DeserializePoseGraph_Response__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
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
slam_toolbox__srv__DeserializePoseGraph_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__DeserializePoseGraph_Response__TYPE_NAME, 46, 46},
      {slam_toolbox__srv__DeserializePoseGraph_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char slam_toolbox__srv__DeserializePoseGraph_Event__FIELD_NAME__info[] = "info";
static char slam_toolbox__srv__DeserializePoseGraph_Event__FIELD_NAME__request[] = "request";
static char slam_toolbox__srv__DeserializePoseGraph_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field slam_toolbox__srv__DeserializePoseGraph_Event__FIELDS[] = {
  {
    {slam_toolbox__srv__DeserializePoseGraph_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__DeserializePoseGraph_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {slam_toolbox__srv__DeserializePoseGraph_Request__TYPE_NAME, 45, 45},
    },
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__DeserializePoseGraph_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {slam_toolbox__srv__DeserializePoseGraph_Response__TYPE_NAME, 46, 46},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription slam_toolbox__srv__DeserializePoseGraph_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {geometry_msgs__msg__Pose2D__TYPE_NAME, 24, 24},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__DeserializePoseGraph_Request__TYPE_NAME, 45, 45},
    {NULL, 0, 0},
  },
  {
    {slam_toolbox__srv__DeserializePoseGraph_Response__TYPE_NAME, 46, 46},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
slam_toolbox__srv__DeserializePoseGraph_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {slam_toolbox__srv__DeserializePoseGraph_Event__TYPE_NAME, 43, 43},
      {slam_toolbox__srv__DeserializePoseGraph_Event__FIELDS, 3, 3},
    },
    {slam_toolbox__srv__DeserializePoseGraph_Event__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&geometry_msgs__msg__Pose2D__EXPECTED_HASH, geometry_msgs__msg__Pose2D__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = geometry_msgs__msg__Pose2D__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = slam_toolbox__srv__DeserializePoseGraph_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = slam_toolbox__srv__DeserializePoseGraph_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int8 UNSET = 0\n"
  "int8 START_AT_FIRST_NODE = 1\n"
  "int8 START_AT_GIVEN_POSE = 2\n"
  "int8 LOCALIZE_AT_POSE = 3\n"
  "\n"
  "# inital_pose should be Map -> base_frame (parameter, generally base_link)\n"
  "#\n"
  "\n"
  "string filename\n"
  "int8 match_type\n"
  "geometry_msgs/Pose2D initial_pose\n"
  "---";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__DeserializePoseGraph__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__DeserializePoseGraph__TYPE_NAME, 37, 37},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 247, 247},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__DeserializePoseGraph_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__DeserializePoseGraph_Request__TYPE_NAME, 45, 45},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__DeserializePoseGraph_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__DeserializePoseGraph_Response__TYPE_NAME, 46, 46},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
slam_toolbox__srv__DeserializePoseGraph_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {slam_toolbox__srv__DeserializePoseGraph_Event__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__DeserializePoseGraph__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[7];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 7, 7};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__DeserializePoseGraph__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *slam_toolbox__srv__DeserializePoseGraph_Event__get_individual_type_description_source(NULL);
    sources[5] = *slam_toolbox__srv__DeserializePoseGraph_Request__get_individual_type_description_source(NULL);
    sources[6] = *slam_toolbox__srv__DeserializePoseGraph_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__DeserializePoseGraph_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__DeserializePoseGraph_Request__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__DeserializePoseGraph_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__DeserializePoseGraph_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
slam_toolbox__srv__DeserializePoseGraph_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *slam_toolbox__srv__DeserializePoseGraph_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *geometry_msgs__msg__Pose2D__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *slam_toolbox__srv__DeserializePoseGraph_Request__get_individual_type_description_source(NULL);
    sources[5] = *slam_toolbox__srv__DeserializePoseGraph_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
