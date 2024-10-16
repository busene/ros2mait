# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_rapid_sm_addin_msgs:msg/StateMachineState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_StateMachineState(type):
    """Metaclass of message 'StateMachineState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SM_STATE_UNKNOWN': 1,
        'SM_STATE_IDLE': 2,
        'SM_STATE_INITIALIZE': 3,
        'SM_STATE_RUN_RAPID_ROUTINE': 4,
        'SM_STATE_RUN_EGM_ROUTINE': 5,
        'EGM_ACTION_UNKNOWN': 1,
        'EGM_ACTION_NONE': 2,
        'EGM_ACTION_RUN_JOINT': 3,
        'EGM_ACTION_RUN_POSE': 4,
        'EGM_ACTION_STOP': 5,
        'EGM_ACTION_START_STREAM': 6,
        'EGM_ACTION_STOP_STREAM': 7,
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
                'abb_rapid_sm_addin_msgs.msg.StateMachineState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__state_machine_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__state_machine_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__state_machine_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__state_machine_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__state_machine_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SM_STATE_UNKNOWN': cls.__constants['SM_STATE_UNKNOWN'],
            'SM_STATE_IDLE': cls.__constants['SM_STATE_IDLE'],
            'SM_STATE_INITIALIZE': cls.__constants['SM_STATE_INITIALIZE'],
            'SM_STATE_RUN_RAPID_ROUTINE': cls.__constants['SM_STATE_RUN_RAPID_ROUTINE'],
            'SM_STATE_RUN_EGM_ROUTINE': cls.__constants['SM_STATE_RUN_EGM_ROUTINE'],
            'EGM_ACTION_UNKNOWN': cls.__constants['EGM_ACTION_UNKNOWN'],
            'EGM_ACTION_NONE': cls.__constants['EGM_ACTION_NONE'],
            'EGM_ACTION_RUN_JOINT': cls.__constants['EGM_ACTION_RUN_JOINT'],
            'EGM_ACTION_RUN_POSE': cls.__constants['EGM_ACTION_RUN_POSE'],
            'EGM_ACTION_STOP': cls.__constants['EGM_ACTION_STOP'],
            'EGM_ACTION_START_STREAM': cls.__constants['EGM_ACTION_START_STREAM'],
            'EGM_ACTION_STOP_STREAM': cls.__constants['EGM_ACTION_STOP_STREAM'],
        }

    @property
    def SM_STATE_UNKNOWN(self):
        """Message constant 'SM_STATE_UNKNOWN'."""
        return Metaclass_StateMachineState.__constants['SM_STATE_UNKNOWN']

    @property
    def SM_STATE_IDLE(self):
        """Message constant 'SM_STATE_IDLE'."""
        return Metaclass_StateMachineState.__constants['SM_STATE_IDLE']

    @property
    def SM_STATE_INITIALIZE(self):
        """Message constant 'SM_STATE_INITIALIZE'."""
        return Metaclass_StateMachineState.__constants['SM_STATE_INITIALIZE']

    @property
    def SM_STATE_RUN_RAPID_ROUTINE(self):
        """Message constant 'SM_STATE_RUN_RAPID_ROUTINE'."""
        return Metaclass_StateMachineState.__constants['SM_STATE_RUN_RAPID_ROUTINE']

    @property
    def SM_STATE_RUN_EGM_ROUTINE(self):
        """Message constant 'SM_STATE_RUN_EGM_ROUTINE'."""
        return Metaclass_StateMachineState.__constants['SM_STATE_RUN_EGM_ROUTINE']

    @property
    def EGM_ACTION_UNKNOWN(self):
        """Message constant 'EGM_ACTION_UNKNOWN'."""
        return Metaclass_StateMachineState.__constants['EGM_ACTION_UNKNOWN']

    @property
    def EGM_ACTION_NONE(self):
        """Message constant 'EGM_ACTION_NONE'."""
        return Metaclass_StateMachineState.__constants['EGM_ACTION_NONE']

    @property
    def EGM_ACTION_RUN_JOINT(self):
        """Message constant 'EGM_ACTION_RUN_JOINT'."""
        return Metaclass_StateMachineState.__constants['EGM_ACTION_RUN_JOINT']

    @property
    def EGM_ACTION_RUN_POSE(self):
        """Message constant 'EGM_ACTION_RUN_POSE'."""
        return Metaclass_StateMachineState.__constants['EGM_ACTION_RUN_POSE']

    @property
    def EGM_ACTION_STOP(self):
        """Message constant 'EGM_ACTION_STOP'."""
        return Metaclass_StateMachineState.__constants['EGM_ACTION_STOP']

    @property
    def EGM_ACTION_START_STREAM(self):
        """Message constant 'EGM_ACTION_START_STREAM'."""
        return Metaclass_StateMachineState.__constants['EGM_ACTION_START_STREAM']

    @property
    def EGM_ACTION_STOP_STREAM(self):
        """Message constant 'EGM_ACTION_STOP_STREAM'."""
        return Metaclass_StateMachineState.__constants['EGM_ACTION_STOP_STREAM']


class StateMachineState(metaclass=Metaclass_StateMachineState):
    """
    Message class 'StateMachineState'.

    Constants:
      SM_STATE_UNKNOWN
      SM_STATE_IDLE
      SM_STATE_INITIALIZE
      SM_STATE_RUN_RAPID_ROUTINE
      SM_STATE_RUN_EGM_ROUTINE
      EGM_ACTION_UNKNOWN
      EGM_ACTION_NONE
      EGM_ACTION_RUN_JOINT
      EGM_ACTION_RUN_POSE
      EGM_ACTION_STOP
      EGM_ACTION_START_STREAM
      EGM_ACTION_STOP_STREAM
    """

    __slots__ = [
        '_rapid_task',
        '_sm_state',
        '_egm_action',
    ]

    _fields_and_field_types = {
        'rapid_task': 'string',
        'sm_state': 'uint8',
        'egm_action': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.rapid_task = kwargs.get('rapid_task', str())
        self.sm_state = kwargs.get('sm_state', int())
        self.egm_action = kwargs.get('egm_action', int())

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
        if self.rapid_task != other.rapid_task:
            return False
        if self.sm_state != other.sm_state:
            return False
        if self.egm_action != other.egm_action:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def rapid_task(self):
        """Message field 'rapid_task'."""
        return self._rapid_task

    @rapid_task.setter
    def rapid_task(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'rapid_task' field must be of type 'str'"
        self._rapid_task = value

    @builtins.property
    def sm_state(self):
        """Message field 'sm_state'."""
        return self._sm_state

    @sm_state.setter
    def sm_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sm_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sm_state' field must be an unsigned integer in [0, 255]"
        self._sm_state = value

    @builtins.property
    def egm_action(self):
        """Message field 'egm_action'."""
        return self._egm_action

    @egm_action.setter
    def egm_action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'egm_action' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'egm_action' field must be an unsigned integer in [0, 255]"
        self._egm_action = value
