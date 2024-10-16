# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_robot_msgs:srv/SetIOSignal.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetIOSignal_Request(type):
    """Metaclass of message 'SetIOSignal_Request'."""

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
                'abb_robot_msgs.srv.SetIOSignal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_io_signal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_io_signal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_io_signal__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_io_signal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_io_signal__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetIOSignal_Request(metaclass=Metaclass_SetIOSignal_Request):
    """Message class 'SetIOSignal_Request'."""

    __slots__ = [
        '_signal',
        '_value',
    ]

    _fields_and_field_types = {
        'signal': 'string',
        'value': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.signal = kwargs.get('signal', str())
        self.value = kwargs.get('value', str())

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
        if self.signal != other.signal:
            return False
        if self.value != other.value:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def signal(self):
        """Message field 'signal'."""
        return self._signal

    @signal.setter
    def signal(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'signal' field must be of type 'str'"
        self._signal = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'value' field must be of type 'str'"
        self._value = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetIOSignal_Response(type):
    """Metaclass of message 'SetIOSignal_Response'."""

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
                'abb_robot_msgs.srv.SetIOSignal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_io_signal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_io_signal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_io_signal__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_io_signal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_io_signal__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetIOSignal_Response(metaclass=Metaclass_SetIOSignal_Response):
    """Message class 'SetIOSignal_Response'."""

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


class Metaclass_SetIOSignal(type):
    """Metaclass of service 'SetIOSignal'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('abb_robot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'abb_robot_msgs.srv.SetIOSignal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_io_signal

            from abb_robot_msgs.srv import _set_io_signal
            if _set_io_signal.Metaclass_SetIOSignal_Request._TYPE_SUPPORT is None:
                _set_io_signal.Metaclass_SetIOSignal_Request.__import_type_support__()
            if _set_io_signal.Metaclass_SetIOSignal_Response._TYPE_SUPPORT is None:
                _set_io_signal.Metaclass_SetIOSignal_Response.__import_type_support__()


class SetIOSignal(metaclass=Metaclass_SetIOSignal):
    from abb_robot_msgs.srv._set_io_signal import SetIOSignal_Request as Request
    from abb_robot_msgs.srv._set_io_signal import SetIOSignal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
