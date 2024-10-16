# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_robot_msgs:msg/RAPIDTaskState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RAPIDTaskState(type):
    """Metaclass of message 'RAPIDTaskState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EXECUTION_STATE_UNKNOWN': 1,
        'EXECUTION_STATE_READY': 2,
        'EXECUTION_STATE_STOPPED': 3,
        'EXECUTION_STATE_STARTED': 4,
        'EXECUTION_STATE_UNINITIALIZED': 5,
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
                'abb_robot_msgs.msg.RAPIDTaskState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rapid_task_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rapid_task_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rapid_task_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rapid_task_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rapid_task_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EXECUTION_STATE_UNKNOWN': cls.__constants['EXECUTION_STATE_UNKNOWN'],
            'EXECUTION_STATE_READY': cls.__constants['EXECUTION_STATE_READY'],
            'EXECUTION_STATE_STOPPED': cls.__constants['EXECUTION_STATE_STOPPED'],
            'EXECUTION_STATE_STARTED': cls.__constants['EXECUTION_STATE_STARTED'],
            'EXECUTION_STATE_UNINITIALIZED': cls.__constants['EXECUTION_STATE_UNINITIALIZED'],
        }

    @property
    def EXECUTION_STATE_UNKNOWN(self):
        """Message constant 'EXECUTION_STATE_UNKNOWN'."""
        return Metaclass_RAPIDTaskState.__constants['EXECUTION_STATE_UNKNOWN']

    @property
    def EXECUTION_STATE_READY(self):
        """Message constant 'EXECUTION_STATE_READY'."""
        return Metaclass_RAPIDTaskState.__constants['EXECUTION_STATE_READY']

    @property
    def EXECUTION_STATE_STOPPED(self):
        """Message constant 'EXECUTION_STATE_STOPPED'."""
        return Metaclass_RAPIDTaskState.__constants['EXECUTION_STATE_STOPPED']

    @property
    def EXECUTION_STATE_STARTED(self):
        """Message constant 'EXECUTION_STATE_STARTED'."""
        return Metaclass_RAPIDTaskState.__constants['EXECUTION_STATE_STARTED']

    @property
    def EXECUTION_STATE_UNINITIALIZED(self):
        """Message constant 'EXECUTION_STATE_UNINITIALIZED'."""
        return Metaclass_RAPIDTaskState.__constants['EXECUTION_STATE_UNINITIALIZED']


class RAPIDTaskState(metaclass=Metaclass_RAPIDTaskState):
    """
    Message class 'RAPIDTaskState'.

    Constants:
      EXECUTION_STATE_UNKNOWN
      EXECUTION_STATE_READY
      EXECUTION_STATE_STOPPED
      EXECUTION_STATE_STARTED
      EXECUTION_STATE_UNINITIALIZED
    """

    __slots__ = [
        '_name',
        '_activated',
        '_execution_state',
        '_motion_task',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'activated': 'boolean',
        'execution_state': 'uint8',
        'motion_task': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.activated = kwargs.get('activated', bool())
        self.execution_state = kwargs.get('execution_state', int())
        self.motion_task = kwargs.get('motion_task', bool())

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
        if self.name != other.name:
            return False
        if self.activated != other.activated:
            return False
        if self.execution_state != other.execution_state:
            return False
        if self.motion_task != other.motion_task:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def activated(self):
        """Message field 'activated'."""
        return self._activated

    @activated.setter
    def activated(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'activated' field must be of type 'bool'"
        self._activated = value

    @builtins.property
    def execution_state(self):
        """Message field 'execution_state'."""
        return self._execution_state

    @execution_state.setter
    def execution_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'execution_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'execution_state' field must be an unsigned integer in [0, 255]"
        self._execution_state = value

    @builtins.property
    def motion_task(self):
        """Message field 'motion_task'."""
        return self._motion_task

    @motion_task.setter
    def motion_task(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'motion_task' field must be of type 'bool'"
        self._motion_task = value
