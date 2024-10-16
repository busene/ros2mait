# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_rapid_msgs:msg/JointTarget.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointTarget(type):
    """Metaclass of message 'JointTarget'."""

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
                'abb_rapid_msgs.msg.JointTarget')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__joint_target
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__joint_target
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__joint_target
            cls._TYPE_SUPPORT = module.type_support_msg__msg__joint_target
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__joint_target

            from abb_rapid_msgs.msg import ExtJoint
            if ExtJoint.__class__._TYPE_SUPPORT is None:
                ExtJoint.__class__.__import_type_support__()

            from abb_rapid_msgs.msg import RobJoint
            if RobJoint.__class__._TYPE_SUPPORT is None:
                RobJoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointTarget(metaclass=Metaclass_JointTarget):
    """Message class 'JointTarget'."""

    __slots__ = [
        '_robax',
        '_extax',
    ]

    _fields_and_field_types = {
        'robax': 'abb_rapid_msgs/RobJoint',
        'extax': 'abb_rapid_msgs/ExtJoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['abb_rapid_msgs', 'msg'], 'RobJoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_msgs', 'msg'], 'ExtJoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from abb_rapid_msgs.msg import RobJoint
        self.robax = kwargs.get('robax', RobJoint())
        from abb_rapid_msgs.msg import ExtJoint
        self.extax = kwargs.get('extax', ExtJoint())

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
        if self.robax != other.robax:
            return False
        if self.extax != other.extax:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def robax(self):
        """Message field 'robax'."""
        return self._robax

    @robax.setter
    def robax(self, value):
        if __debug__:
            from abb_rapid_msgs.msg import RobJoint
            assert \
                isinstance(value, RobJoint), \
                "The 'robax' field must be a sub message of type 'RobJoint'"
        self._robax = value

    @builtins.property
    def extax(self):
        """Message field 'extax'."""
        return self._extax

    @extax.setter
    def extax(self, value):
        if __debug__:
            from abb_rapid_msgs.msg import ExtJoint
            assert \
                isinstance(value, ExtJoint), \
                "The 'extax' field must be a sub message of type 'ExtJoint'"
        self._extax = value
