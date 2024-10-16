# generated from rosidl_generator_py/resource/_idl.py.em
# with input from linkattacher_msgs:srv/DetachLink.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DetachLink_Request(type):
    """Metaclass of message 'DetachLink_Request'."""

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
            module = import_type_support('linkattacher_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'linkattacher_msgs.srv.DetachLink_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detach_link__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detach_link__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detach_link__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detach_link__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detach_link__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetachLink_Request(metaclass=Metaclass_DetachLink_Request):
    """Message class 'DetachLink_Request'."""

    __slots__ = [
        '_model1_name',
        '_link1_name',
        '_model2_name',
        '_link2_name',
    ]

    _fields_and_field_types = {
        'model1_name': 'string',
        'link1_name': 'string',
        'model2_name': 'string',
        'link2_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.model1_name = kwargs.get('model1_name', str())
        self.link1_name = kwargs.get('link1_name', str())
        self.model2_name = kwargs.get('model2_name', str())
        self.link2_name = kwargs.get('link2_name', str())

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
        if self.model1_name != other.model1_name:
            return False
        if self.link1_name != other.link1_name:
            return False
        if self.model2_name != other.model2_name:
            return False
        if self.link2_name != other.link2_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def model1_name(self):
        """Message field 'model1_name'."""
        return self._model1_name

    @model1_name.setter
    def model1_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model1_name' field must be of type 'str'"
        self._model1_name = value

    @builtins.property
    def link1_name(self):
        """Message field 'link1_name'."""
        return self._link1_name

    @link1_name.setter
    def link1_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'link1_name' field must be of type 'str'"
        self._link1_name = value

    @builtins.property
    def model2_name(self):
        """Message field 'model2_name'."""
        return self._model2_name

    @model2_name.setter
    def model2_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model2_name' field must be of type 'str'"
        self._model2_name = value

    @builtins.property
    def link2_name(self):
        """Message field 'link2_name'."""
        return self._link2_name

    @link2_name.setter
    def link2_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'link2_name' field must be of type 'str'"
        self._link2_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_DetachLink_Response(type):
    """Metaclass of message 'DetachLink_Response'."""

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
            module = import_type_support('linkattacher_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'linkattacher_msgs.srv.DetachLink_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__detach_link__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__detach_link__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__detach_link__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__detach_link__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__detach_link__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DetachLink_Response(metaclass=Metaclass_DetachLink_Response):
    """Message class 'DetachLink_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())
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


class Metaclass_DetachLink(type):
    """Metaclass of service 'DetachLink'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('linkattacher_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'linkattacher_msgs.srv.DetachLink')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__detach_link

            from linkattacher_msgs.srv import _detach_link
            if _detach_link.Metaclass_DetachLink_Request._TYPE_SUPPORT is None:
                _detach_link.Metaclass_DetachLink_Request.__import_type_support__()
            if _detach_link.Metaclass_DetachLink_Response._TYPE_SUPPORT is None:
                _detach_link.Metaclass_DetachLink_Response.__import_type_support__()


class DetachLink(metaclass=Metaclass_DetachLink):
    from linkattacher_msgs.srv._detach_link import DetachLink_Request as Request
    from linkattacher_msgs.srv._detach_link import DetachLink_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
