# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_rapid_msgs:msg/ConfData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConfData(type):
    """Metaclass of message 'ConfData'."""

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
            module = import_type_support('abb_rapid_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'abb_rapid_msgs.msg.ConfData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__conf_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__conf_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__conf_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__conf_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__conf_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ConfData(metaclass=Metaclass_ConfData):
    """Message class 'ConfData'."""

    __slots__ = [
        '_cf1',
        '_cf4',
        '_cf6',
        '_cfx',
    ]

    _fields_and_field_types = {
        'cf1': 'float',
        'cf4': 'float',
        'cf6': 'float',
        'cfx': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cf1 = kwargs.get('cf1', float())
        self.cf4 = kwargs.get('cf4', float())
        self.cf6 = kwargs.get('cf6', float())
        self.cfx = kwargs.get('cfx', float())

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
        if self.cf1 != other.cf1:
            return False
        if self.cf4 != other.cf4:
            return False
        if self.cf6 != other.cf6:
            return False
        if self.cfx != other.cfx:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cf1(self):
        """Message field 'cf1'."""
        return self._cf1

    @cf1.setter
    def cf1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cf1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cf1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cf1 = value

    @builtins.property
    def cf4(self):
        """Message field 'cf4'."""
        return self._cf4

    @cf4.setter
    def cf4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cf4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cf4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cf4 = value

    @builtins.property
    def cf6(self):
        """Message field 'cf6'."""
        return self._cf6

    @cf6.setter
    def cf6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cf6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cf6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cf6 = value

    @builtins.property
    def cfx(self):
        """Message field 'cfx'."""
        return self._cfx

    @cfx.setter
    def cfx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cfx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cfx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cfx = value
