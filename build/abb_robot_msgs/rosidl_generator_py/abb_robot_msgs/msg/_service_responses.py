# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_robot_msgs:msg/ServiceResponses.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ServiceResponses(type):
    """Metaclass of message 'ServiceResponses'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCESS': '',
        'RC_SUCCESS': 1,
        'FAILED': 'Service failed (e.g. timeout or resource not found, see the DEBUG log for details)',
        'RC_FAILED': 2,
        'SERVER_IS_BUSY': 'Server is busy',
        'RC_SERVER_IS_BUSY': 1001,
        'EMPTY_FILENAME': 'Filename is empty',
        'RC_EMPTY_FILENAME': 2001,
        'EMPTY_SIGNAL_NAME': 'Signal name is empty',
        'RC_EMPTY_SIGNAL_NAME': 2002,
        'EMPTY_RAPID_TASK_NAME': 'RAPID task name is empty',
        'RC_EMPTY_RAPID_TASK_NAME': 2003,
        'EMPTY_RAPID_MODULE_NAME': 'RAPID module name is empty',
        'RC_EMPTY_RAPID_MODULE_NAME': 2004,
        'EMPTY_RAPID_SYMBOL_NAME': 'RAPID symbol name is empty',
        'RC_EMPTY_RAPID_SYMBOL_NAME': 2005,
        'NOT_IN_AUTO_MODE': 'Robot controller is not in AUTO mode',
        'RC_NOT_IN_AUTO_MODE': 3001,
        'MOTORS_ARE_OFF': 'Motors are off',
        'RC_MOTORS_ARE_OFF': 3002,
        'MOTORS_ARE_ON': 'Motors are on',
        'RC_MOTORS_ARE_ON': 3003,
        'RAPID_NOT_STOPPED': 'RAPID has not been stopped',
        'RC_RAPID_NOT_STOPPED': 3004,
        'RAPID_NOT_RUNNING': 'RAPID is not running',
        'RC_RAPID_NOT_RUNNING': 3005,
        'SM_RUNTIME_STATES_MISSING': 'No runtime states received for any StateMachine Add-In instance',
        'RC_SM_RUNTIME_STATES_MISSING': 4001,
        'SM_UNKNOWN_RAPID_TASK': 'RAPID task not found among known StateMachine Add-In instances',
        'RC_SM_UNKNOWN_RAPID_TASK': 4002,
        'SM_UNINITIALIZED': 'StateMachine Add-In instance has not been initialized',
        'RC_SM_UNINITIALIZED': 4003,
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
                'abb_robot_msgs.msg.ServiceResponses')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__service_responses
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__service_responses
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__service_responses
            cls._TYPE_SUPPORT = module.type_support_msg__msg__service_responses
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__service_responses

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCESS': cls.__constants['SUCCESS'],
            'RC_SUCCESS': cls.__constants['RC_SUCCESS'],
            'FAILED': cls.__constants['FAILED'],
            'RC_FAILED': cls.__constants['RC_FAILED'],
            'SERVER_IS_BUSY': cls.__constants['SERVER_IS_BUSY'],
            'RC_SERVER_IS_BUSY': cls.__constants['RC_SERVER_IS_BUSY'],
            'EMPTY_FILENAME': cls.__constants['EMPTY_FILENAME'],
            'RC_EMPTY_FILENAME': cls.__constants['RC_EMPTY_FILENAME'],
            'EMPTY_SIGNAL_NAME': cls.__constants['EMPTY_SIGNAL_NAME'],
            'RC_EMPTY_SIGNAL_NAME': cls.__constants['RC_EMPTY_SIGNAL_NAME'],
            'EMPTY_RAPID_TASK_NAME': cls.__constants['EMPTY_RAPID_TASK_NAME'],
            'RC_EMPTY_RAPID_TASK_NAME': cls.__constants['RC_EMPTY_RAPID_TASK_NAME'],
            'EMPTY_RAPID_MODULE_NAME': cls.__constants['EMPTY_RAPID_MODULE_NAME'],
            'RC_EMPTY_RAPID_MODULE_NAME': cls.__constants['RC_EMPTY_RAPID_MODULE_NAME'],
            'EMPTY_RAPID_SYMBOL_NAME': cls.__constants['EMPTY_RAPID_SYMBOL_NAME'],
            'RC_EMPTY_RAPID_SYMBOL_NAME': cls.__constants['RC_EMPTY_RAPID_SYMBOL_NAME'],
            'NOT_IN_AUTO_MODE': cls.__constants['NOT_IN_AUTO_MODE'],
            'RC_NOT_IN_AUTO_MODE': cls.__constants['RC_NOT_IN_AUTO_MODE'],
            'MOTORS_ARE_OFF': cls.__constants['MOTORS_ARE_OFF'],
            'RC_MOTORS_ARE_OFF': cls.__constants['RC_MOTORS_ARE_OFF'],
            'MOTORS_ARE_ON': cls.__constants['MOTORS_ARE_ON'],
            'RC_MOTORS_ARE_ON': cls.__constants['RC_MOTORS_ARE_ON'],
            'RAPID_NOT_STOPPED': cls.__constants['RAPID_NOT_STOPPED'],
            'RC_RAPID_NOT_STOPPED': cls.__constants['RC_RAPID_NOT_STOPPED'],
            'RAPID_NOT_RUNNING': cls.__constants['RAPID_NOT_RUNNING'],
            'RC_RAPID_NOT_RUNNING': cls.__constants['RC_RAPID_NOT_RUNNING'],
            'SM_RUNTIME_STATES_MISSING': cls.__constants['SM_RUNTIME_STATES_MISSING'],
            'RC_SM_RUNTIME_STATES_MISSING': cls.__constants['RC_SM_RUNTIME_STATES_MISSING'],
            'SM_UNKNOWN_RAPID_TASK': cls.__constants['SM_UNKNOWN_RAPID_TASK'],
            'RC_SM_UNKNOWN_RAPID_TASK': cls.__constants['RC_SM_UNKNOWN_RAPID_TASK'],
            'SM_UNINITIALIZED': cls.__constants['SM_UNINITIALIZED'],
            'RC_SM_UNINITIALIZED': cls.__constants['RC_SM_UNINITIALIZED'],
        }

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_ServiceResponses.__constants['SUCCESS']

    @property
    def RC_SUCCESS(self):
        """Message constant 'RC_SUCCESS'."""
        return Metaclass_ServiceResponses.__constants['RC_SUCCESS']

    @property
    def FAILED(self):
        """Message constant 'FAILED'."""
        return Metaclass_ServiceResponses.__constants['FAILED']

    @property
    def RC_FAILED(self):
        """Message constant 'RC_FAILED'."""
        return Metaclass_ServiceResponses.__constants['RC_FAILED']

    @property
    def SERVER_IS_BUSY(self):
        """Message constant 'SERVER_IS_BUSY'."""
        return Metaclass_ServiceResponses.__constants['SERVER_IS_BUSY']

    @property
    def RC_SERVER_IS_BUSY(self):
        """Message constant 'RC_SERVER_IS_BUSY'."""
        return Metaclass_ServiceResponses.__constants['RC_SERVER_IS_BUSY']

    @property
    def EMPTY_FILENAME(self):
        """Message constant 'EMPTY_FILENAME'."""
        return Metaclass_ServiceResponses.__constants['EMPTY_FILENAME']

    @property
    def RC_EMPTY_FILENAME(self):
        """Message constant 'RC_EMPTY_FILENAME'."""
        return Metaclass_ServiceResponses.__constants['RC_EMPTY_FILENAME']

    @property
    def EMPTY_SIGNAL_NAME(self):
        """Message constant 'EMPTY_SIGNAL_NAME'."""
        return Metaclass_ServiceResponses.__constants['EMPTY_SIGNAL_NAME']

    @property
    def RC_EMPTY_SIGNAL_NAME(self):
        """Message constant 'RC_EMPTY_SIGNAL_NAME'."""
        return Metaclass_ServiceResponses.__constants['RC_EMPTY_SIGNAL_NAME']

    @property
    def EMPTY_RAPID_TASK_NAME(self):
        """Message constant 'EMPTY_RAPID_TASK_NAME'."""
        return Metaclass_ServiceResponses.__constants['EMPTY_RAPID_TASK_NAME']

    @property
    def RC_EMPTY_RAPID_TASK_NAME(self):
        """Message constant 'RC_EMPTY_RAPID_TASK_NAME'."""
        return Metaclass_ServiceResponses.__constants['RC_EMPTY_RAPID_TASK_NAME']

    @property
    def EMPTY_RAPID_MODULE_NAME(self):
        """Message constant 'EMPTY_RAPID_MODULE_NAME'."""
        return Metaclass_ServiceResponses.__constants['EMPTY_RAPID_MODULE_NAME']

    @property
    def RC_EMPTY_RAPID_MODULE_NAME(self):
        """Message constant 'RC_EMPTY_RAPID_MODULE_NAME'."""
        return Metaclass_ServiceResponses.__constants['RC_EMPTY_RAPID_MODULE_NAME']

    @property
    def EMPTY_RAPID_SYMBOL_NAME(self):
        """Message constant 'EMPTY_RAPID_SYMBOL_NAME'."""
        return Metaclass_ServiceResponses.__constants['EMPTY_RAPID_SYMBOL_NAME']

    @property
    def RC_EMPTY_RAPID_SYMBOL_NAME(self):
        """Message constant 'RC_EMPTY_RAPID_SYMBOL_NAME'."""
        return Metaclass_ServiceResponses.__constants['RC_EMPTY_RAPID_SYMBOL_NAME']

    @property
    def NOT_IN_AUTO_MODE(self):
        """Message constant 'NOT_IN_AUTO_MODE'."""
        return Metaclass_ServiceResponses.__constants['NOT_IN_AUTO_MODE']

    @property
    def RC_NOT_IN_AUTO_MODE(self):
        """Message constant 'RC_NOT_IN_AUTO_MODE'."""
        return Metaclass_ServiceResponses.__constants['RC_NOT_IN_AUTO_MODE']

    @property
    def MOTORS_ARE_OFF(self):
        """Message constant 'MOTORS_ARE_OFF'."""
        return Metaclass_ServiceResponses.__constants['MOTORS_ARE_OFF']

    @property
    def RC_MOTORS_ARE_OFF(self):
        """Message constant 'RC_MOTORS_ARE_OFF'."""
        return Metaclass_ServiceResponses.__constants['RC_MOTORS_ARE_OFF']

    @property
    def MOTORS_ARE_ON(self):
        """Message constant 'MOTORS_ARE_ON'."""
        return Metaclass_ServiceResponses.__constants['MOTORS_ARE_ON']

    @property
    def RC_MOTORS_ARE_ON(self):
        """Message constant 'RC_MOTORS_ARE_ON'."""
        return Metaclass_ServiceResponses.__constants['RC_MOTORS_ARE_ON']

    @property
    def RAPID_NOT_STOPPED(self):
        """Message constant 'RAPID_NOT_STOPPED'."""
        return Metaclass_ServiceResponses.__constants['RAPID_NOT_STOPPED']

    @property
    def RC_RAPID_NOT_STOPPED(self):
        """Message constant 'RC_RAPID_NOT_STOPPED'."""
        return Metaclass_ServiceResponses.__constants['RC_RAPID_NOT_STOPPED']

    @property
    def RAPID_NOT_RUNNING(self):
        """Message constant 'RAPID_NOT_RUNNING'."""
        return Metaclass_ServiceResponses.__constants['RAPID_NOT_RUNNING']

    @property
    def RC_RAPID_NOT_RUNNING(self):
        """Message constant 'RC_RAPID_NOT_RUNNING'."""
        return Metaclass_ServiceResponses.__constants['RC_RAPID_NOT_RUNNING']

    @property
    def SM_RUNTIME_STATES_MISSING(self):
        """Message constant 'SM_RUNTIME_STATES_MISSING'."""
        return Metaclass_ServiceResponses.__constants['SM_RUNTIME_STATES_MISSING']

    @property
    def RC_SM_RUNTIME_STATES_MISSING(self):
        """Message constant 'RC_SM_RUNTIME_STATES_MISSING'."""
        return Metaclass_ServiceResponses.__constants['RC_SM_RUNTIME_STATES_MISSING']

    @property
    def SM_UNKNOWN_RAPID_TASK(self):
        """Message constant 'SM_UNKNOWN_RAPID_TASK'."""
        return Metaclass_ServiceResponses.__constants['SM_UNKNOWN_RAPID_TASK']

    @property
    def RC_SM_UNKNOWN_RAPID_TASK(self):
        """Message constant 'RC_SM_UNKNOWN_RAPID_TASK'."""
        return Metaclass_ServiceResponses.__constants['RC_SM_UNKNOWN_RAPID_TASK']

    @property
    def SM_UNINITIALIZED(self):
        """Message constant 'SM_UNINITIALIZED'."""
        return Metaclass_ServiceResponses.__constants['SM_UNINITIALIZED']

    @property
    def RC_SM_UNINITIALIZED(self):
        """Message constant 'RC_SM_UNINITIALIZED'."""
        return Metaclass_ServiceResponses.__constants['RC_SM_UNINITIALIZED']


class ServiceResponses(metaclass=Metaclass_ServiceResponses):
    """
    Message class 'ServiceResponses'.

    Constants:
      SUCCESS
      RC_SUCCESS
      FAILED
      RC_FAILED
      SERVER_IS_BUSY
      RC_SERVER_IS_BUSY
      EMPTY_FILENAME
      RC_EMPTY_FILENAME
      EMPTY_SIGNAL_NAME
      RC_EMPTY_SIGNAL_NAME
      EMPTY_RAPID_TASK_NAME
      RC_EMPTY_RAPID_TASK_NAME
      EMPTY_RAPID_MODULE_NAME
      RC_EMPTY_RAPID_MODULE_NAME
      EMPTY_RAPID_SYMBOL_NAME
      RC_EMPTY_RAPID_SYMBOL_NAME
      NOT_IN_AUTO_MODE
      RC_NOT_IN_AUTO_MODE
      MOTORS_ARE_OFF
      RC_MOTORS_ARE_OFF
      MOTORS_ARE_ON
      RC_MOTORS_ARE_ON
      RAPID_NOT_STOPPED
      RC_RAPID_NOT_STOPPED
      RAPID_NOT_RUNNING
      RC_RAPID_NOT_RUNNING
      SM_RUNTIME_STATES_MISSING
      RC_SM_RUNTIME_STATES_MISSING
      SM_UNKNOWN_RAPID_TASK
      RC_SM_UNKNOWN_RAPID_TASK
      SM_UNINITIALIZED
      RC_SM_UNINITIALIZED
    """

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)
