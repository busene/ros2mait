# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2srrc_data:msg/Specs.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'ee_vector'
# Member 'robot_max'
# Member 'robot_min'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Specs(type):
    """Metaclass of message 'Specs'."""

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
            module = import_type_support('ros2srrc_data')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2srrc_data.msg.Specs')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__specs
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__specs
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__specs
            cls._TYPE_SUPPORT = module.type_support_msg__msg__specs
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__specs

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Specs(metaclass=Metaclass_Specs):
    """Message class 'Specs'."""

    __slots__ = [
        '_ee_max',
        '_ee_min',
        '_ee_vector',
        '_robot_max',
        '_robot_min',
    ]

    _fields_and_field_types = {
        'ee_max': 'double',
        'ee_min': 'double',
        'ee_vector': 'sequence<double>',
        'robot_max': 'sequence<double>',
        'robot_min': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.ee_max = kwargs.get('ee_max', float())
        self.ee_min = kwargs.get('ee_min', float())
        self.ee_vector = array.array('d', kwargs.get('ee_vector', []))
        self.robot_max = array.array('d', kwargs.get('robot_max', []))
        self.robot_min = array.array('d', kwargs.get('robot_min', []))

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
        if self.ee_max != other.ee_max:
            return False
        if self.ee_min != other.ee_min:
            return False
        if self.ee_vector != other.ee_vector:
            return False
        if self.robot_max != other.robot_max:
            return False
        if self.robot_min != other.robot_min:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def ee_max(self):
        """Message field 'ee_max'."""
        return self._ee_max

    @ee_max.setter
    def ee_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ee_max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ee_max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ee_max = value

    @builtins.property
    def ee_min(self):
        """Message field 'ee_min'."""
        return self._ee_min

    @ee_min.setter
    def ee_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ee_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ee_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ee_min = value

    @builtins.property
    def ee_vector(self):
        """Message field 'ee_vector'."""
        return self._ee_vector

    @ee_vector.setter
    def ee_vector(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'ee_vector' array.array() must have the type code of 'd'"
            self._ee_vector = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'ee_vector' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._ee_vector = array.array('d', value)

    @builtins.property
    def robot_max(self):
        """Message field 'robot_max'."""
        return self._robot_max

    @robot_max.setter
    def robot_max(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'robot_max' array.array() must have the type code of 'd'"
            self._robot_max = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'robot_max' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._robot_max = array.array('d', value)

    @builtins.property
    def robot_min(self):
        """Message field 'robot_min'."""
        return self._robot_min

    @robot_min.setter
    def robot_min(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'robot_min' array.array() must have the type code of 'd'"
            self._robot_min = value
            return
        if __debug__:
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'robot_min' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._robot_min = array.array('d', value)
