# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_rapid_sm_addin_msgs:srv/SetSGCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetSGCommand_Request(type):
    """Metaclass of message 'SetSGCommand_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SG_COMMAND_UNKNOWN': 1,
        'SG_COMMAND_NONE': 2,
        'SG_COMMAND_INITIALIZE': 3,
        'SG_COMMAND_CALIBRATE': 4,
        'SG_COMMAND_MOVE_TO': 5,
        'SG_COMMAND_GRIP_IN': 6,
        'SG_COMMAND_GRIP_OUT': 7,
        'SG_COMMAND_BLOW_ON_1': 8,
        'SG_COMMAND_BLOW_ON_2': 9,
        'SG_COMMAND_BLOW_OFF_1': 10,
        'SG_COMMAND_BLOW_OFF_2': 11,
        'SG_COMMAND_VACUUM_ON_1': 12,
        'SG_COMMAND_VACUUM_ON_2': 13,
        'SG_COMMAND_VACUUM_OFF_1': 14,
        'SG_COMMAND_VACUUM_OFF_2': 15,
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
                'abb_rapid_sm_addin_msgs.srv.SetSGCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_sg_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_sg_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_sg_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_sg_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_sg_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SG_COMMAND_UNKNOWN': cls.__constants['SG_COMMAND_UNKNOWN'],
            'SG_COMMAND_NONE': cls.__constants['SG_COMMAND_NONE'],
            'SG_COMMAND_INITIALIZE': cls.__constants['SG_COMMAND_INITIALIZE'],
            'SG_COMMAND_CALIBRATE': cls.__constants['SG_COMMAND_CALIBRATE'],
            'SG_COMMAND_MOVE_TO': cls.__constants['SG_COMMAND_MOVE_TO'],
            'SG_COMMAND_GRIP_IN': cls.__constants['SG_COMMAND_GRIP_IN'],
            'SG_COMMAND_GRIP_OUT': cls.__constants['SG_COMMAND_GRIP_OUT'],
            'SG_COMMAND_BLOW_ON_1': cls.__constants['SG_COMMAND_BLOW_ON_1'],
            'SG_COMMAND_BLOW_ON_2': cls.__constants['SG_COMMAND_BLOW_ON_2'],
            'SG_COMMAND_BLOW_OFF_1': cls.__constants['SG_COMMAND_BLOW_OFF_1'],
            'SG_COMMAND_BLOW_OFF_2': cls.__constants['SG_COMMAND_BLOW_OFF_2'],
            'SG_COMMAND_VACUUM_ON_1': cls.__constants['SG_COMMAND_VACUUM_ON_1'],
            'SG_COMMAND_VACUUM_ON_2': cls.__constants['SG_COMMAND_VACUUM_ON_2'],
            'SG_COMMAND_VACUUM_OFF_1': cls.__constants['SG_COMMAND_VACUUM_OFF_1'],
            'SG_COMMAND_VACUUM_OFF_2': cls.__constants['SG_COMMAND_VACUUM_OFF_2'],
        }

    @property
    def SG_COMMAND_UNKNOWN(self):
        """Message constant 'SG_COMMAND_UNKNOWN'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_UNKNOWN']

    @property
    def SG_COMMAND_NONE(self):
        """Message constant 'SG_COMMAND_NONE'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_NONE']

    @property
    def SG_COMMAND_INITIALIZE(self):
        """Message constant 'SG_COMMAND_INITIALIZE'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_INITIALIZE']

    @property
    def SG_COMMAND_CALIBRATE(self):
        """Message constant 'SG_COMMAND_CALIBRATE'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_CALIBRATE']

    @property
    def SG_COMMAND_MOVE_TO(self):
        """Message constant 'SG_COMMAND_MOVE_TO'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_MOVE_TO']

    @property
    def SG_COMMAND_GRIP_IN(self):
        """Message constant 'SG_COMMAND_GRIP_IN'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_GRIP_IN']

    @property
    def SG_COMMAND_GRIP_OUT(self):
        """Message constant 'SG_COMMAND_GRIP_OUT'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_GRIP_OUT']

    @property
    def SG_COMMAND_BLOW_ON_1(self):
        """Message constant 'SG_COMMAND_BLOW_ON_1'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_BLOW_ON_1']

    @property
    def SG_COMMAND_BLOW_ON_2(self):
        """Message constant 'SG_COMMAND_BLOW_ON_2'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_BLOW_ON_2']

    @property
    def SG_COMMAND_BLOW_OFF_1(self):
        """Message constant 'SG_COMMAND_BLOW_OFF_1'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_BLOW_OFF_1']

    @property
    def SG_COMMAND_BLOW_OFF_2(self):
        """Message constant 'SG_COMMAND_BLOW_OFF_2'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_BLOW_OFF_2']

    @property
    def SG_COMMAND_VACUUM_ON_1(self):
        """Message constant 'SG_COMMAND_VACUUM_ON_1'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_VACUUM_ON_1']

    @property
    def SG_COMMAND_VACUUM_ON_2(self):
        """Message constant 'SG_COMMAND_VACUUM_ON_2'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_VACUUM_ON_2']

    @property
    def SG_COMMAND_VACUUM_OFF_1(self):
        """Message constant 'SG_COMMAND_VACUUM_OFF_1'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_VACUUM_OFF_1']

    @property
    def SG_COMMAND_VACUUM_OFF_2(self):
        """Message constant 'SG_COMMAND_VACUUM_OFF_2'."""
        return Metaclass_SetSGCommand_Request.__constants['SG_COMMAND_VACUUM_OFF_2']


class SetSGCommand_Request(metaclass=Metaclass_SetSGCommand_Request):
    """
    Message class 'SetSGCommand_Request'.

    Constants:
      SG_COMMAND_UNKNOWN
      SG_COMMAND_NONE
      SG_COMMAND_INITIALIZE
      SG_COMMAND_CALIBRATE
      SG_COMMAND_MOVE_TO
      SG_COMMAND_GRIP_IN
      SG_COMMAND_GRIP_OUT
      SG_COMMAND_BLOW_ON_1
      SG_COMMAND_BLOW_ON_2
      SG_COMMAND_BLOW_OFF_1
      SG_COMMAND_BLOW_OFF_2
      SG_COMMAND_VACUUM_ON_1
      SG_COMMAND_VACUUM_ON_2
      SG_COMMAND_VACUUM_OFF_1
      SG_COMMAND_VACUUM_OFF_2
    """

    __slots__ = [
        '_task',
        '_command',
        '_target_position',
    ]

    _fields_and_field_types = {
        'task': 'string',
        'command': 'uint8',
        'target_position': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.task = kwargs.get('task', str())
        self.command = kwargs.get('command', int())
        self.target_position = kwargs.get('target_position', float())

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
        if self.task != other.task:
            return False
        if self.command != other.command:
            return False
        if self.target_position != other.target_position:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def task(self):
        """Message field 'task'."""
        return self._task

    @task.setter
    def task(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'task' field must be of type 'str'"
        self._task = value

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'command' field must be an unsigned integer in [0, 255]"
        self._command = value

    @builtins.property
    def target_position(self):
        """Message field 'target_position'."""
        return self._target_position

    @target_position.setter
    def target_position(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_position' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_position' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_position = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetSGCommand_Response(type):
    """Metaclass of message 'SetSGCommand_Response'."""

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
                'abb_rapid_sm_addin_msgs.srv.SetSGCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_sg_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_sg_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_sg_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_sg_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_sg_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetSGCommand_Response(metaclass=Metaclass_SetSGCommand_Response):
    """Message class 'SetSGCommand_Response'."""

    __slots__ = [
        '_result_code',
        '_message',
    ]

    _fields_and_field_types = {
        'result_code': 'uint16',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result_code = kwargs.get('result_code', int())
        self.message = kwargs.get('message', str())

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
        if self.result_code != other.result_code:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def result_code(self):
        """Message field 'result_code'."""
        return self._result_code

    @result_code.setter
    def result_code(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result_code' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'result_code' field must be an unsigned integer in [0, 65535]"
        self._result_code = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_SetSGCommand(type):
    """Metaclass of service 'SetSGCommand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('abb_rapid_sm_addin_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'abb_rapid_sm_addin_msgs.srv.SetSGCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_sg_command

            from abb_rapid_sm_addin_msgs.srv import _set_sg_command
            if _set_sg_command.Metaclass_SetSGCommand_Request._TYPE_SUPPORT is None:
                _set_sg_command.Metaclass_SetSGCommand_Request.__import_type_support__()
            if _set_sg_command.Metaclass_SetSGCommand_Response._TYPE_SUPPORT is None:
                _set_sg_command.Metaclass_SetSGCommand_Response.__import_type_support__()


class SetSGCommand(metaclass=Metaclass_SetSGCommand):
    from abb_rapid_sm_addin_msgs.srv._set_sg_command import SetSGCommand_Request as Request
    from abb_rapid_sm_addin_msgs.srv._set_sg_command import SetSGCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
