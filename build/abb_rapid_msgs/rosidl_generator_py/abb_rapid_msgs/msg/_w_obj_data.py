# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_rapid_msgs:msg/WObjData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WObjData(type):
    """Metaclass of message 'WObjData'."""

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
            module = import_type_support('abb_rapid_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'abb_rapid_msgs.msg.WObjData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__w_obj_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__w_obj_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__w_obj_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__w_obj_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__w_obj_data

            from abb_rapid_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class WObjData(metaclass=Metaclass_WObjData):
    """Message class 'WObjData'."""

    __slots__ = [
        '_robhold',
        '_ufprog',
        '_ufmec',
        '_uframe',
        '_oframe',
    ]

    _fields_and_field_types = {
        'robhold': 'boolean',
        'ufprog': 'boolean',
        'ufmec': 'string',
        'uframe': 'abb_rapid_msgs/Pose',
        'oframe': 'abb_rapid_msgs/Pose',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_msgs', 'msg'], 'Pose'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.robhold = kwargs.get('robhold', bool())
        self.ufprog = kwargs.get('ufprog', bool())
        self.ufmec = kwargs.get('ufmec', str())
        from abb_rapid_msgs.msg import Pose
        self.uframe = kwargs.get('uframe', Pose())
        from abb_rapid_msgs.msg import Pose
        self.oframe = kwargs.get('oframe', Pose())

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
        if self.robhold != other.robhold:
            return False
        if self.ufprog != other.ufprog:
            return False
        if self.ufmec != other.ufmec:
            return False
        if self.uframe != other.uframe:
            return False
        if self.oframe != other.oframe:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robhold(self):
        """Message field 'robhold'."""
        return self._robhold

    @robhold.setter
    def robhold(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'robhold' field must be of type 'bool'"
        self._robhold = value

    @builtins.property
    def ufprog(self):
        """Message field 'ufprog'."""
        return self._ufprog

    @ufprog.setter
    def ufprog(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'ufprog' field must be of type 'bool'"
        self._ufprog = value

    @builtins.property
    def ufmec(self):
        """Message field 'ufmec'."""
        return self._ufmec

    @ufmec.setter
    def ufmec(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'ufmec' field must be of type 'str'"
        self._ufmec = value

    @builtins.property
    def uframe(self):
        """Message field 'uframe'."""
        return self._uframe

    @uframe.setter
    def uframe(self, value):
        if __debug__:
            from abb_rapid_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'uframe' field must be a sub message of type 'Pose'"
        self._uframe = value

    @builtins.property
    def oframe(self):
        """Message field 'oframe'."""
        return self._oframe

    @oframe.setter
    def oframe(self, value):
        if __debug__:
            from abb_rapid_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'oframe' field must be a sub message of type 'Pose'"
        self._oframe = value
