# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_rapid_sm_addin_msgs:msg/EGMActivateSettings.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EGMActivateSettings(type):
    """Metaclass of message 'EGMActivateSettings'."""

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
            module = import_type_support('abb_rapid_sm_addin_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'abb_rapid_sm_addin_msgs.msg.EGMActivateSettings')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__egm_activate_settings
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__egm_activate_settings
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__egm_activate_settings
            cls._TYPE_SUPPORT = module.type_support_msg__msg__egm_activate_settings
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__egm_activate_settings

            from abb_rapid_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from abb_rapid_msgs.msg import ToolData
            if ToolData.__class__._TYPE_SUPPORT is None:
                ToolData.__class__.__import_type_support__()

            from abb_rapid_msgs.msg import WObjData
            if WObjData.__class__._TYPE_SUPPORT is None:
                WObjData.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EGMActivateSettings(metaclass=Metaclass_EGMActivateSettings):
    """Message class 'EGMActivateSettings'."""

    __slots__ = [
        '_tool',
        '_wobj',
        '_correction_frame',
        '_sensor_frame',
        '_cond_min_max',
        '_lp_filter',
        '_sample_rate',
        '_max_speed_deviation',
    ]

    _fields_and_field_types = {
        'tool': 'abb_rapid_msgs/ToolData',
        'wobj': 'abb_rapid_msgs/WObjData',
        'correction_frame': 'abb_rapid_msgs/Pose',
        'sensor_frame': 'abb_rapid_msgs/Pose',
        'cond_min_max': 'float',
        'lp_filter': 'float',
        'sample_rate': 'uint8',
        'max_speed_deviation': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['abb_rapid_msgs', 'msg'], 'ToolData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_msgs', 'msg'], 'WObjData'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from abb_rapid_msgs.msg import ToolData
        self.tool = kwargs.get('tool', ToolData())
        from abb_rapid_msgs.msg import WObjData
        self.wobj = kwargs.get('wobj', WObjData())
        from abb_rapid_msgs.msg import Pose
        self.correction_frame = kwargs.get('correction_frame', Pose())
        from abb_rapid_msgs.msg import Pose
        self.sensor_frame = kwargs.get('sensor_frame', Pose())
        self.cond_min_max = kwargs.get('cond_min_max', float())
        self.lp_filter = kwargs.get('lp_filter', float())
        self.sample_rate = kwargs.get('sample_rate', int())
        self.max_speed_deviation = kwargs.get('max_speed_deviation', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.tool != other.tool:
            return False
        if self.wobj != other.wobj:
            return False
        if self.correction_frame != other.correction_frame:
            return False
        if self.sensor_frame != other.sensor_frame:
            return False
        if self.cond_min_max != other.cond_min_max:
            return False
        if self.lp_filter != other.lp_filter:
            return False
        if self.sample_rate != other.sample_rate:
            return False
        if self.max_speed_deviation != other.max_speed_deviation:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def tool(self):
        """Message field 'tool'."""
        return self._tool

    @tool.setter
    def tool(self, value):
        if __debug__:
            from abb_rapid_msgs.msg import ToolData
            assert \
                isinstance(value, ToolData), \
                "The 'tool' field must be a sub message of type 'ToolData'"
        self._tool = value

    @builtins.property
    def wobj(self):
        """Message field 'wobj'."""
        return self._wobj

    @wobj.setter
    def wobj(self, value):
        if __debug__:
            from abb_rapid_msgs.msg import WObjData
            assert \
                isinstance(value, WObjData), \
                "The 'wobj' field must be a sub message of type 'WObjData'"
        self._wobj = value

    @builtins.property
    def correction_frame(self):
        """Message field 'correction_frame'."""
        return self._correction_frame

    @correction_frame.setter
    def correction_frame(self, value):
        if __debug__:
            from abb_rapid_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'correction_frame' field must be a sub message of type 'Pose'"
        self._correction_frame = value

    @builtins.property
    def sensor_frame(self):
        """Message field 'sensor_frame'."""
        return self._sensor_frame

    @sensor_frame.setter
    def sensor_frame(self, value):
        if __debug__:
            from abb_rapid_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'sensor_frame' field must be a sub message of type 'Pose'"
        self._sensor_frame = value

    @builtins.property
    def cond_min_max(self):
        """Message field 'cond_min_max'."""
        return self._cond_min_max

    @cond_min_max.setter
    def cond_min_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cond_min_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cond_min_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cond_min_max = value

    @builtins.property
    def lp_filter(self):
        """Message field 'lp_filter'."""
        return self._lp_filter

    @lp_filter.setter
    def lp_filter(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lp_filter' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lp_filter' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lp_filter = value

    @builtins.property
    def sample_rate(self):
        """Message field 'sample_rate'."""
        return self._sample_rate

    @sample_rate.setter
    def sample_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sample_rate' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sample_rate' field must be an unsigned integer in [0, 255]"
        self._sample_rate = value

    @builtins.property
    def max_speed_deviation(self):
        """Message field 'max_speed_deviation'."""
        return self._max_speed_deviation

    @max_speed_deviation.setter
    def max_speed_deviation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_speed_deviation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_speed_deviation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_speed_deviation = value
