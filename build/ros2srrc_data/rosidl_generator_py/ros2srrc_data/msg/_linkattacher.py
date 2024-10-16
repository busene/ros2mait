# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2srrc_data:msg/Linkattacher.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Linkattacher(type):
    """Metaclass of message 'Linkattacher'."""

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
            module = import_type_support('ros2srrc_data')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2srrc_data.msg.Linkattacher')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__linkattacher
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__linkattacher
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__linkattacher
            cls._TYPE_SUPPORT = module.type_support_msg__msg__linkattacher
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__linkattacher

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Linkattacher(metaclass=Metaclass_Linkattacher):
    """Message class 'Linkattacher'."""

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
