# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_rapid_msgs:msg/Pose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Pose(type):
    """Metaclass of message 'Pose'."""

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
                'abb_rapid_msgs.msg.Pose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pose

            from abb_rapid_msgs.msg import Orient
            if Orient.__class__._TYPE_SUPPORT is None:
                Orient.__class__.__import_type_support__()

            from abb_rapid_msgs.msg import Pos
            if Pos.__class__._TYPE_SUPPORT is None:
                Pos.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Pose(metaclass=Metaclass_Pose):
    """Message class 'Pose'."""

    __slots__ = [
        '_trans',
        '_rot',
    ]

    _fields_and_field_types = {
        'trans': 'abb_rapid_msgs/Pos',
        'rot': 'abb_rapid_msgs/Orient',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['abb_rapid_msgs', 'msg'], 'Pos'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_msgs', 'msg'], 'Orient'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from abb_rapid_msgs.msg import Pos
        self.trans = kwargs.get('trans', Pos())
        from abb_rapid_msgs.msg import Orient
        self.rot = kwargs.get('rot', Orient())

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
        if self.trans != other.trans:
            return False
        if self.rot != other.rot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def trans(self):
        """Message field 'trans'."""
        return self._trans

    @trans.setter
    def trans(self, value):
        if __debug__:
            from abb_rapid_msgs.msg import Pos
            assert \
                isinstance(value, Pos), \
                "The 'trans' field must be a sub message of type 'Pos'"
        self._trans = value

    @builtins.property
    def rot(self):
        """Message field 'rot'."""
        return self._rot

    @rot.setter
    def rot(self, value):
        if __debug__:
            from abb_rapid_msgs.msg import Orient
            assert \
                isinstance(value, Orient), \
                "The 'rot' field must be a sub message of type 'Orient'"
        self._rot = value
