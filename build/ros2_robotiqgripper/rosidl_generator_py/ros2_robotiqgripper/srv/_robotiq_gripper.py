# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_robotiqgripper:srv/RobotiqGripper.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobotiqGripper_Request(type):
    """Metaclass of message 'RobotiqGripper_Request'."""

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
            module = import_type_support('ros2_robotiqgripper')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_robotiqgripper.srv.RobotiqGripper_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robotiq_gripper__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robotiq_gripper__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robotiq_gripper__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robotiq_gripper__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robotiq_gripper__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotiqGripper_Request(metaclass=Metaclass_RobotiqGripper_Request):
    """Message class 'RobotiqGripper_Request'."""

    __slots__ = [
        '_action',
    ]

    _fields_and_field_types = {
        'action': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.action = kwargs.get('action', str())

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
        if self.action != other.action:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'action' field must be of type 'str'"
        self._action = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_RobotiqGripper_Response(type):
    """Metaclass of message 'RobotiqGripper_Response'."""

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
            module = import_type_support('ros2_robotiqgripper')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_robotiqgripper.srv.RobotiqGripper_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__robotiq_gripper__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__robotiq_gripper__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__robotiq_gripper__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__robotiq_gripper__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__robotiq_gripper__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RobotiqGripper_Response(metaclass=Metaclass_RobotiqGripper_Response):
    """Message class 'RobotiqGripper_Response'."""

    __slots__ = [
        '_success',
        '_value',
        '_average',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'value': 'int64',
        'average': 'float',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
        self.value = kwargs.get('value', int())
        self.average = kwargs.get('average', float())
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
        if self.success != other.success:
            return False
        if self.value != other.value:
            return False
        if self.average != other.average:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'value' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'value' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._value = value

    @builtins.property
    def average(self):
        """Message field 'average'."""
        return self._average

    @average.setter
    def average(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'average' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'average' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._average = value

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


class Metaclass_RobotiqGripper(type):
    """Metaclass of service 'RobotiqGripper'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros2_robotiqgripper')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_robotiqgripper.srv.RobotiqGripper')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__robotiq_gripper

            from ros2_robotiqgripper.srv import _robotiq_gripper
            if _robotiq_gripper.Metaclass_RobotiqGripper_Request._TYPE_SUPPORT is None:
                _robotiq_gripper.Metaclass_RobotiqGripper_Request.__import_type_support__()
            if _robotiq_gripper.Metaclass_RobotiqGripper_Response._TYPE_SUPPORT is None:
                _robotiq_gripper.Metaclass_RobotiqGripper_Response.__import_type_support__()


class RobotiqGripper(metaclass=Metaclass_RobotiqGripper):
    from ros2_robotiqgripper.srv._robotiq_gripper import RobotiqGripper_Request as Request
    from ros2_robotiqgripper.srv._robotiq_gripper import RobotiqGripper_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
