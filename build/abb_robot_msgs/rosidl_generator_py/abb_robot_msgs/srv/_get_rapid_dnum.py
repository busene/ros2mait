# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_robot_msgs:srv/GetRAPIDDnum.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetRAPIDDnum_Request(type):
    """Metaclass of message 'GetRAPIDDnum_Request'."""

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
                'abb_robot_msgs.srv.GetRAPIDDnum_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_rapid_dnum__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_rapid_dnum__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_rapid_dnum__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_rapid_dnum__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_rapid_dnum__request

            from abb_robot_msgs.msg import RAPIDSymbolPath
            if RAPIDSymbolPath.__class__._TYPE_SUPPORT is None:
                RAPIDSymbolPath.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRAPIDDnum_Request(metaclass=Metaclass_GetRAPIDDnum_Request):
    """Message class 'GetRAPIDDnum_Request'."""

    __slots__ = [
        '_path',
    ]

    _fields_and_field_types = {
        'path': 'abb_robot_msgs/RAPIDSymbolPath',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['abb_robot_msgs', 'msg'], 'RAPIDSymbolPath'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from abb_robot_msgs.msg import RAPIDSymbolPath
        self.path = kwargs.get('path', RAPIDSymbolPath())

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
        if self.path != other.path:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def path(self):
        """Message field 'path'."""
        return self._path

    @path.setter
    def path(self, value):
        if __debug__:
            from abb_robot_msgs.msg import RAPIDSymbolPath
            assert \
                isinstance(value, RAPIDSymbolPath), \
                "The 'path' field must be a sub message of type 'RAPIDSymbolPath'"
        self._path = value


# Import statements for member types

# already imported above
# import builtins

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetRAPIDDnum_Response(type):
    """Metaclass of message 'GetRAPIDDnum_Response'."""

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
                'abb_robot_msgs.srv.GetRAPIDDnum_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_rapid_dnum__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_rapid_dnum__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_rapid_dnum__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_rapid_dnum__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_rapid_dnum__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetRAPIDDnum_Response(metaclass=Metaclass_GetRAPIDDnum_Response):
    """Message class 'GetRAPIDDnum_Response'."""

    __slots__ = [
        '_value',
        '_result_code',
        '_message',
    ]

    _fields_and_field_types = {
        'value': 'double',
        'result_code': 'uint16',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.value = kwargs.get('value', float())
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
        if self.value != other.value:
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
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'value' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._value = value

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


class Metaclass_GetRAPIDDnum(type):
    """Metaclass of service 'GetRAPIDDnum'."""

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
                'abb_robot_msgs.srv.GetRAPIDDnum')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_rapid_dnum

            from abb_robot_msgs.srv import _get_rapid_dnum
            if _get_rapid_dnum.Metaclass_GetRAPIDDnum_Request._TYPE_SUPPORT is None:
                _get_rapid_dnum.Metaclass_GetRAPIDDnum_Request.__import_type_support__()
            if _get_rapid_dnum.Metaclass_GetRAPIDDnum_Response._TYPE_SUPPORT is None:
                _get_rapid_dnum.Metaclass_GetRAPIDDnum_Response.__import_type_support__()


class GetRAPIDDnum(metaclass=Metaclass_GetRAPIDDnum):
    from abb_robot_msgs.srv._get_rapid_dnum import GetRAPIDDnum_Request as Request
    from abb_robot_msgs.srv._get_rapid_dnum import GetRAPIDDnum_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')