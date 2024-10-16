# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_rapid_msgs:msg/ExtJoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ExtJoint(type):
    """Metaclass of message 'ExtJoint'."""

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
                'abb_rapid_msgs.msg.ExtJoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ext_joint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ext_joint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ext_joint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ext_joint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ext_joint

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ExtJoint(metaclass=Metaclass_ExtJoint):
    """Message class 'ExtJoint'."""

    __slots__ = [
        '_eax_a',
        '_eax_b',
        '_eax_c',
        '_eax_d',
        '_eax_e',
        '_eax_f',
    ]

    _fields_and_field_types = {
        'eax_a': 'float',
        'eax_b': 'float',
        'eax_c': 'float',
        'eax_d': 'float',
        'eax_e': 'float',
        'eax_f': 'float',
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
        self.eax_a = kwargs.get('eax_a', float())
        self.eax_b = kwargs.get('eax_b', float())
        self.eax_c = kwargs.get('eax_c', float())
        self.eax_d = kwargs.get('eax_d', float())
        self.eax_e = kwargs.get('eax_e', float())
        self.eax_f = kwargs.get('eax_f', float())

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
        if self.eax_a != other.eax_a:
            return False
        if self.eax_b != other.eax_b:
            return False
        if self.eax_c != other.eax_c:
            return False
        if self.eax_d != other.eax_d:
            return False
        if self.eax_e != other.eax_e:
            return False
        if self.eax_f != other.eax_f:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def eax_a(self):
        """Message field 'eax_a'."""
        return self._eax_a

    @eax_a.setter
    def eax_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eax_a' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'eax_a' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._eax_a = value

    @builtins.property
    def eax_b(self):
        """Message field 'eax_b'."""
        return self._eax_b

    @eax_b.setter
    def eax_b(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eax_b' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'eax_b' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._eax_b = value

    @builtins.property
    def eax_c(self):
        """Message field 'eax_c'."""
        return self._eax_c

    @eax_c.setter
    def eax_c(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eax_c' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'eax_c' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._eax_c = value

    @builtins.property
    def eax_d(self):
        """Message field 'eax_d'."""
        return self._eax_d

    @eax_d.setter
    def eax_d(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eax_d' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'eax_d' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._eax_d = value

    @builtins.property
    def eax_e(self):
        """Message field 'eax_e'."""
        return self._eax_e

    @eax_e.setter
    def eax_e(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eax_e' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'eax_e' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._eax_e = value

    @builtins.property
    def eax_f(self):
        """Message field 'eax_f'."""
        return self._eax_f

    @eax_f.setter
    def eax_f(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eax_f' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'eax_f' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._eax_f = value
