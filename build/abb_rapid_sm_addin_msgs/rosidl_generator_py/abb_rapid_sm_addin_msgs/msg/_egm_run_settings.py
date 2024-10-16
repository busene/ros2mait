# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_rapid_sm_addin_msgs:msg/EGMRunSettings.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EGMRunSettings(type):
    """Metaclass of message 'EGMRunSettings'."""

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
                'abb_rapid_sm_addin_msgs.msg.EGMRunSettings')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__egm_run_settings
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__egm_run_settings
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__egm_run_settings
            cls._TYPE_SUPPORT = module.type_support_msg__msg__egm_run_settings
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__egm_run_settings

            from abb_rapid_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EGMRunSettings(metaclass=Metaclass_EGMRunSettings):
    """Message class 'EGMRunSettings'."""

    __slots__ = [
        '_cond_time',
        '_ramp_in_time',
        '_offset',
        '_pos_corr_gain',
    ]

    _fields_and_field_types = {
        'cond_time': 'float',
        'ramp_in_time': 'float',
        'offset': 'abb_rapid_msgs/Pose',
        'pos_corr_gain': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cond_time = kwargs.get('cond_time', float())
        self.ramp_in_time = kwargs.get('ramp_in_time', float())
        from abb_rapid_msgs.msg import Pose
        self.offset = kwargs.get('offset', Pose())
        self.pos_corr_gain = kwargs.get('pos_corr_gain', float())

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
        if self.cond_time != other.cond_time:
            return False
        if self.ramp_in_time != other.ramp_in_time:
            return False
        if self.offset != other.offset:
            return False
        if self.pos_corr_gain != other.pos_corr_gain:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cond_time(self):
        """Message field 'cond_time'."""
        return self._cond_time

    @cond_time.setter
    def cond_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cond_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cond_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cond_time = value

    @builtins.property
    def ramp_in_time(self):
        """Message field 'ramp_in_time'."""
        return self._ramp_in_time

    @ramp_in_time.setter
    def ramp_in_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ramp_in_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ramp_in_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ramp_in_time = value

    @builtins.property
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        if __debug__:
            from abb_rapid_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'offset' field must be a sub message of type 'Pose'"
        self._offset = value

    @builtins.property
    def pos_corr_gain(self):
        """Message field 'pos_corr_gain'."""
        return self._pos_corr_gain

    @pos_corr_gain.setter
    def pos_corr_gain(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_corr_gain' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos_corr_gain' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos_corr_gain = value
