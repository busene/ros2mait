# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_robot_msgs:msg/SystemState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemState(type):
    """Metaclass of message 'SystemState'."""

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
            module = import_type_support('abb_robot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'abb_robot_msgs.msg.SystemState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__system_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__system_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__system_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__system_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__system_state

            from abb_robot_msgs.msg import MechanicalUnitState
            if MechanicalUnitState.__class__._TYPE_SUPPORT is None:
                MechanicalUnitState.__class__.__import_type_support__()

            from abb_robot_msgs.msg import RAPIDTaskState
            if RAPIDTaskState.__class__._TYPE_SUPPORT is None:
                RAPIDTaskState.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SystemState(metaclass=Metaclass_SystemState):
    """Message class 'SystemState'."""

    __slots__ = [
        '_header',
        '_motors_on',
        '_auto_mode',
        '_rapid_running',
        '_rapid_tasks',
        '_mechanical_units',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'motors_on': 'boolean',
        'auto_mode': 'boolean',
        'rapid_running': 'boolean',
        'rapid_tasks': 'sequence<abb_robot_msgs/RAPIDTaskState>',
        'mechanical_units': 'sequence<abb_robot_msgs/MechanicalUnitState>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['abb_robot_msgs', 'msg'], 'RAPIDTaskState')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['abb_robot_msgs', 'msg'], 'MechanicalUnitState')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.motors_on = kwargs.get('motors_on', bool())
        self.auto_mode = kwargs.get('auto_mode', bool())
        self.rapid_running = kwargs.get('rapid_running', bool())
        self.rapid_tasks = kwargs.get('rapid_tasks', [])
        self.mechanical_units = kwargs.get('mechanical_units', [])

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
        if self.header != other.header:
            return False
        if self.motors_on != other.motors_on:
            return False
        if self.auto_mode != other.auto_mode:
            return False
        if self.rapid_running != other.rapid_running:
            return False
        if self.rapid_tasks != other.rapid_tasks:
            return False
        if self.mechanical_units != other.mechanical_units:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def motors_on(self):
        """Message field 'motors_on'."""
        return self._motors_on

    @motors_on.setter
    def motors_on(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motors_on' field must be of type 'bool'"
        self._motors_on = value

    @builtins.property
    def auto_mode(self):
        """Message field 'auto_mode'."""
        return self._auto_mode

    @auto_mode.setter
    def auto_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_mode' field must be of type 'bool'"
        self._auto_mode = value

    @builtins.property
    def rapid_running(self):
        """Message field 'rapid_running'."""
        return self._rapid_running

    @rapid_running.setter
    def rapid_running(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rapid_running' field must be of type 'bool'"
        self._rapid_running = value

    @builtins.property
    def rapid_tasks(self):
        """Message field 'rapid_tasks'."""
        return self._rapid_tasks

    @rapid_tasks.setter
    def rapid_tasks(self, value):
        if __debug__:
            from abb_robot_msgs.msg import RAPIDTaskState
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
                 all(isinstance(v, RAPIDTaskState) for v in value) and
                 True), \
                "The 'rapid_tasks' field must be a set or sequence and each value of type 'RAPIDTaskState'"
        self._rapid_tasks = value

    @builtins.property
    def mechanical_units(self):
        """Message field 'mechanical_units'."""
        return self._mechanical_units

    @mechanical_units.setter
    def mechanical_units(self, value):
        if __debug__:
            from abb_robot_msgs.msg import MechanicalUnitState
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
                 all(isinstance(v, MechanicalUnitState) for v in value) and
                 True), \
                "The 'mechanical_units' field must be a set or sequence and each value of type 'MechanicalUnitState'"
        self._mechanical_units = value
