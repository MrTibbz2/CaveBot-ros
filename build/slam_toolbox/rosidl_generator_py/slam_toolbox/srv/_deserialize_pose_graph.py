# generated from rosidl_generator_py/resource/_idl.py.em
# with input from slam_toolbox:srv/DeserializePoseGraph.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DeserializePoseGraph_Request(type):
    """Metaclass of message 'DeserializePoseGraph_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'UNSET': 0,
        'START_AT_FIRST_NODE': 1,
        'START_AT_GIVEN_POSE': 2,
        'LOCALIZE_AT_POSE': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('slam_toolbox')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'slam_toolbox.srv.DeserializePoseGraph_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__deserialize_pose_graph__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__deserialize_pose_graph__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__deserialize_pose_graph__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__deserialize_pose_graph__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__deserialize_pose_graph__request

            from geometry_msgs.msg import Pose2D
            if Pose2D.__class__._TYPE_SUPPORT is None:
                Pose2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'UNSET': cls.__constants['UNSET'],
            'START_AT_FIRST_NODE': cls.__constants['START_AT_FIRST_NODE'],
            'START_AT_GIVEN_POSE': cls.__constants['START_AT_GIVEN_POSE'],
            'LOCALIZE_AT_POSE': cls.__constants['LOCALIZE_AT_POSE'],
        }

    @property
    def UNSET(self):
        """Message constant 'UNSET'."""
        return Metaclass_DeserializePoseGraph_Request.__constants['UNSET']

    @property
    def START_AT_FIRST_NODE(self):
        """Message constant 'START_AT_FIRST_NODE'."""
        return Metaclass_DeserializePoseGraph_Request.__constants['START_AT_FIRST_NODE']

    @property
    def START_AT_GIVEN_POSE(self):
        """Message constant 'START_AT_GIVEN_POSE'."""
        return Metaclass_DeserializePoseGraph_Request.__constants['START_AT_GIVEN_POSE']

    @property
    def LOCALIZE_AT_POSE(self):
        """Message constant 'LOCALIZE_AT_POSE'."""
        return Metaclass_DeserializePoseGraph_Request.__constants['LOCALIZE_AT_POSE']


class DeserializePoseGraph_Request(metaclass=Metaclass_DeserializePoseGraph_Request):
    """
    Message class 'DeserializePoseGraph_Request'.

    Constants:
      UNSET
      START_AT_FIRST_NODE
      START_AT_GIVEN_POSE
      LOCALIZE_AT_POSE
    """

    __slots__ = [
        '_filename',
        '_match_type',
        '_initial_pose',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'filename': 'string',
        'match_type': 'int8',
        'initial_pose': 'geometry_msgs/Pose2D',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose2D'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.filename = kwargs.get('filename', str())
        self.match_type = kwargs.get('match_type', int())
        from geometry_msgs.msg import Pose2D
        self.initial_pose = kwargs.get('initial_pose', Pose2D())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.filename != other.filename:
            return False
        if self.match_type != other.match_type:
            return False
        if self.initial_pose != other.initial_pose:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def filename(self):
        """Message field 'filename'."""
        return self._filename

    @filename.setter
    def filename(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'filename' field must be of type 'str'"
        self._filename = value

    @builtins.property
    def match_type(self):
        """Message field 'match_type'."""
        return self._match_type

    @match_type.setter
    def match_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'match_type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'match_type' field must be an integer in [-128, 127]"
        self._match_type = value

    @builtins.property
    def initial_pose(self):
        """Message field 'initial_pose'."""
        return self._initial_pose

    @initial_pose.setter
    def initial_pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose2D
            assert \
                isinstance(value, Pose2D), \
                "The 'initial_pose' field must be a sub message of type 'Pose2D'"
        self._initial_pose = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_DeserializePoseGraph_Response(type):
    """Metaclass of message 'DeserializePoseGraph_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('slam_toolbox')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'slam_toolbox.srv.DeserializePoseGraph_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__deserialize_pose_graph__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__deserialize_pose_graph__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__deserialize_pose_graph__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__deserialize_pose_graph__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__deserialize_pose_graph__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeserializePoseGraph_Response(metaclass=Metaclass_DeserializePoseGraph_Response):
    """Message class 'DeserializePoseGraph_Response'."""

    __slots__ = [
        '_check_fields',
    ]

    _fields_and_field_types = {
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DeserializePoseGraph_Event(type):
    """Metaclass of message 'DeserializePoseGraph_Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('slam_toolbox')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'slam_toolbox.srv.DeserializePoseGraph_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__deserialize_pose_graph__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__deserialize_pose_graph__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__deserialize_pose_graph__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__deserialize_pose_graph__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__deserialize_pose_graph__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DeserializePoseGraph_Event(metaclass=Metaclass_DeserializePoseGraph_Event):
    """Message class 'DeserializePoseGraph_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<slam_toolbox/DeserializePoseGraph_Request, 1>',
        'response': 'sequence<slam_toolbox/DeserializePoseGraph_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['slam_toolbox', 'srv'], 'DeserializePoseGraph_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['slam_toolbox', 'srv'], 'DeserializePoseGraph_Response'), 1),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from slam_toolbox.srv import DeserializePoseGraph_Request
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, DeserializePoseGraph_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'DeserializePoseGraph_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from slam_toolbox.srv import DeserializePoseGraph_Response
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) <= 1 and
                 all(isinstance(v, DeserializePoseGraph_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'DeserializePoseGraph_Response'"
        self._response = value


class Metaclass_DeserializePoseGraph(type):
    """Metaclass of service 'DeserializePoseGraph'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('slam_toolbox')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'slam_toolbox.srv.DeserializePoseGraph')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__deserialize_pose_graph

            from slam_toolbox.srv import _deserialize_pose_graph
            if _deserialize_pose_graph.Metaclass_DeserializePoseGraph_Request._TYPE_SUPPORT is None:
                _deserialize_pose_graph.Metaclass_DeserializePoseGraph_Request.__import_type_support__()
            if _deserialize_pose_graph.Metaclass_DeserializePoseGraph_Response._TYPE_SUPPORT is None:
                _deserialize_pose_graph.Metaclass_DeserializePoseGraph_Response.__import_type_support__()
            if _deserialize_pose_graph.Metaclass_DeserializePoseGraph_Event._TYPE_SUPPORT is None:
                _deserialize_pose_graph.Metaclass_DeserializePoseGraph_Event.__import_type_support__()


class DeserializePoseGraph(metaclass=Metaclass_DeserializePoseGraph):
    from slam_toolbox.srv._deserialize_pose_graph import DeserializePoseGraph_Request as Request
    from slam_toolbox.srv._deserialize_pose_graph import DeserializePoseGraph_Response as Response
    from slam_toolbox.srv._deserialize_pose_graph import DeserializePoseGraph_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
