# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_rapid_msgs:msg/RobJoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobJoint(type):
    """Metaclass of message 'RobJoint'."""

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
                'abb_rapid_msgs.msg.RobJoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rob_joint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rob_joint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rob_joint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rob_joint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rob_joint

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobJoint(metaclass=Metaclass_RobJoint):
    """Message class 'RobJoint'."""

    __slots__ = [
        '_rax_1',
        '_rax_2',
        '_rax_3',
        '_rax_4',
        '_rax_5',
        '_rax_6',
    ]

    _fields_and_field_types = {
        'rax_1': 'float',
        'rax_2': 'float',
        'rax_3': 'float',
        'rax_4': 'float',
        'rax_5': 'float',
        'rax_6': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rax_1 = kwargs.get('rax_1', float())
        self.rax_2 = kwargs.get('rax_2', float())
        self.rax_3 = kwargs.get('rax_3', float())
        self.rax_4 = kwargs.get('rax_4', float())
        self.rax_5 = kwargs.get('rax_5', float())
        self.rax_6 = kwargs.get('rax_6', float())

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
        if self.rax_1 != other.rax_1:
            return False
        if self.rax_2 != other.rax_2:
            return False
        if self.rax_3 != other.rax_3:
            return False
        if self.rax_4 != other.rax_4:
            return False
        if self.rax_5 != other.rax_5:
            return False
        if self.rax_6 != other.rax_6:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rax_1(self):
        """Message field 'rax_1'."""
        return self._rax_1

    @rax_1.setter
    def rax_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rax_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rax_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rax_1 = value

    @builtins.property
    def rax_2(self):
        """Message field 'rax_2'."""
        return self._rax_2

    @rax_2.setter
    def rax_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rax_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rax_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rax_2 = value

    @builtins.property
    def rax_3(self):
        """Message field 'rax_3'."""
        return self._rax_3

    @rax_3.setter
    def rax_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rax_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rax_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rax_3 = value

    @builtins.property
    def rax_4(self):
        """Message field 'rax_4'."""
        return self._rax_4

    @rax_4.setter
    def rax_4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rax_4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rax_4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rax_4 = value

    @builtins.property
    def rax_5(self):
        """Message field 'rax_5'."""
        return self._rax_5

    @rax_5.setter
    def rax_5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rax_5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rax_5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rax_5 = value

    @builtins.property
    def rax_6(self):
        """Message field 'rax_6'."""
        return self._rax_6

    @rax_6.setter
    def rax_6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rax_6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rax_6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rax_6 = value
