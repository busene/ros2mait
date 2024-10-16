# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_egm_msgs:msg/EGMChannelState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EGMChannelState(type):
    """Metaclass of message 'EGMChannelState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'EGM_UNDEFINED': 1,
        'EGM_ERROR': 2,
        'EGM_STOPPED': 3,
        'EGM_RUNNING': 4,
        'MOTORS_UNDEFINED': 1,
        'MOTORS_ON': 2,
        'MOTORS_OFF': 3,
        'RAPID_UNDEFINED': 1,
        'RAPID_STOPPED': 2,
        'RAPID_RUNNING': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('abb_egm_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'abb_egm_msgs.msg.EGMChannelState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__egm_channel_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__egm_channel_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__egm_channel_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__egm_channel_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__egm_channel_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'EGM_UNDEFINED': cls.__constants['EGM_UNDEFINED'],
            'EGM_ERROR': cls.__constants['EGM_ERROR'],
            'EGM_STOPPED': cls.__constants['EGM_STOPPED'],
            'EGM_RUNNING': cls.__constants['EGM_RUNNING'],
            'MOTORS_UNDEFINED': cls.__constants['MOTORS_UNDEFINED'],
            'MOTORS_ON': cls.__constants['MOTORS_ON'],
            'MOTORS_OFF': cls.__constants['MOTORS_OFF'],
            'RAPID_UNDEFINED': cls.__constants['RAPID_UNDEFINED'],
            'RAPID_STOPPED': cls.__constants['RAPID_STOPPED'],
            'RAPID_RUNNING': cls.__constants['RAPID_RUNNING'],
        }

    @property
    def EGM_UNDEFINED(self):
        """Message constant 'EGM_UNDEFINED'."""
        return Metaclass_EGMChannelState.__constants['EGM_UNDEFINED']

    @property
    def EGM_ERROR(self):
        """Message constant 'EGM_ERROR'."""
        return Metaclass_EGMChannelState.__constants['EGM_ERROR']

    @property
    def EGM_STOPPED(self):
        """Message constant 'EGM_STOPPED'."""
        return Metaclass_EGMChannelState.__constants['EGM_STOPPED']

    @property
    def EGM_RUNNING(self):
        """Message constant 'EGM_RUNNING'."""
        return Metaclass_EGMChannelState.__constants['EGM_RUNNING']

    @property
    def MOTORS_UNDEFINED(self):
        """Message constant 'MOTORS_UNDEFINED'."""
        return Metaclass_EGMChannelState.__constants['MOTORS_UNDEFINED']

    @property
    def MOTORS_ON(self):
        """Message constant 'MOTORS_ON'."""
        return Metaclass_EGMChannelState.__constants['MOTORS_ON']

    @property
    def MOTORS_OFF(self):
        """Message constant 'MOTORS_OFF'."""
        return Metaclass_EGMChannelState.__constants['MOTORS_OFF']

    @property
    def RAPID_UNDEFINED(self):
        """Message constant 'RAPID_UNDEFINED'."""
        return Metaclass_EGMChannelState.__constants['RAPID_UNDEFINED']

    @property
    def RAPID_STOPPED(self):
        """Message constant 'RAPID_STOPPED'."""
        return Metaclass_EGMChannelState.__constants['RAPID_STOPPED']

    @property
    def RAPID_RUNNING(self):
        """Message constant 'RAPID_RUNNING'."""
        return Metaclass_EGMChannelState.__constants['RAPID_RUNNING']


class EGMChannelState(metaclass=Metaclass_EGMChannelState):
    """
    Message class 'EGMChannelState'.

    Constants:
      EGM_UNDEFINED
      EGM_ERROR
      EGM_STOPPED
      EGM_RUNNING
      MOTORS_UNDEFINED
      MOTORS_ON
      MOTORS_OFF
      RAPID_UNDEFINED
      RAPID_STOPPED
      RAPID_RUNNING
    """

    __slots__ = [
        '_name',
        '_active',
        '_egm_convergence_met',
        '_egm_client_state',
        '_motor_state',
        '_rapid_execution_state',
        '_utilization_rate',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'active': 'boolean',
        'egm_convergence_met': 'boolean',
        'egm_client_state': 'uint8',
        'motor_state': 'uint8',
        'rapid_execution_state': 'uint8',
        'utilization_rate': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.active = kwargs.get('active', bool())
        self.egm_convergence_met = kwargs.get('egm_convergence_met', bool())
        self.egm_client_state = kwargs.get('egm_client_state', int())
        self.motor_state = kwargs.get('motor_state', int())
        self.rapid_execution_state = kwargs.get('rapid_execution_state', int())
        self.utilization_rate = kwargs.get('utilization_rate', float())

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
        if self.active != other.active:
            return False
        if self.egm_convergence_met != other.egm_convergence_met:
            return False
        if self.egm_client_state != other.egm_client_state:
            return False
        if self.motor_state != other.motor_state:
            return False
        if self.rapid_execution_state != other.rapid_execution_state:
            return False
        if self.utilization_rate != other.utilization_rate:
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
    def active(self):
        """Message field 'active'."""
        return self._active

    @active.setter
    def active(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'active' field must be of type 'bool'"
        self._active = value

    @builtins.property
    def egm_convergence_met(self):
        """Message field 'egm_convergence_met'."""
        return self._egm_convergence_met

    @egm_convergence_met.setter
    def egm_convergence_met(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'egm_convergence_met' field must be of type 'bool'"
        self._egm_convergence_met = value

    @builtins.property
    def egm_client_state(self):
        """Message field 'egm_client_state'."""
        return self._egm_client_state

    @egm_client_state.setter
    def egm_client_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'egm_client_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'egm_client_state' field must be an unsigned integer in [0, 255]"
        self._egm_client_state = value

    @builtins.property
    def motor_state(self):
        """Message field 'motor_state'."""
        return self._motor_state

    @motor_state.setter
    def motor_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor_state' field must be an unsigned integer in [0, 255]"
        self._motor_state = value

    @builtins.property
    def rapid_execution_state(self):
        """Message field 'rapid_execution_state'."""
        return self._rapid_execution_state

    @rapid_execution_state.setter
    def rapid_execution_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rapid_execution_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rapid_execution_state' field must be an unsigned integer in [0, 255]"
        self._rapid_execution_state = value

    @builtins.property
    def utilization_rate(self):
        """Message field 'utilization_rate'."""
        return self._utilization_rate

    @utilization_rate.setter
    def utilization_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'utilization_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'utilization_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._utilization_rate = value
