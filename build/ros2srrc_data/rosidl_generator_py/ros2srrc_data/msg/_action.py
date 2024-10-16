# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2srrc_data:msg/Action.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Action(type):
    """Metaclass of message 'Action'."""

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
                'ros2srrc_data.msg.Action')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__action
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__action
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__action
            cls._TYPE_SUPPORT = module.type_support_msg__msg__action
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__action

            from ros2srrc_data.msg import Joint
            if Joint.__class__._TYPE_SUPPORT is None:
                Joint.__class__.__import_type_support__()

            from ros2srrc_data.msg import Joints
            if Joints.__class__._TYPE_SUPPORT is None:
                Joints.__class__.__import_type_support__()

            from ros2srrc_data.msg import Linkattacher
            if Linkattacher.__class__._TYPE_SUPPORT is None:
                Linkattacher.__class__.__import_type_support__()

            from ros2srrc_data.msg import Xyz
            if Xyz.__class__._TYPE_SUPPORT is None:
                Xyz.__class__.__import_type_support__()

            from ros2srrc_data.msg import Xyzypr
            if Xyzypr.__class__._TYPE_SUPPORT is None:
                Xyzypr.__class__.__import_type_support__()

            from ros2srrc_data.msg import Ypr
            if Ypr.__class__._TYPE_SUPPORT is None:
                Ypr.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Action(metaclass=Metaclass_Action):
    """Message class 'Action'."""

    __slots__ = [
        '_action',
        '_speed',
        '_movej',
        '_mover',
        '_movel',
        '_movexyzw',
        '_movexyz',
        '_moveypr',
        '_moverot',
        '_moverp',
        '_moveg',
        '_attach',
        '_detach',
    ]

    _fields_and_field_types = {
        'action': 'string',
        'speed': 'double',
        'movej': 'ros2srrc_data/Joints',
        'mover': 'ros2srrc_data/Joint',
        'movel': 'ros2srrc_data/Xyz',
        'movexyzw': 'ros2srrc_data/Xyzypr',
        'movexyz': 'ros2srrc_data/Xyz',
        'moveypr': 'ros2srrc_data/Ypr',
        'moverot': 'ros2srrc_data/Ypr',
        'moverp': 'ros2srrc_data/Xyzypr',
        'moveg': 'double',
        'attach': 'ros2srrc_data/Linkattacher',
        'detach': 'ros2srrc_data/Linkattacher',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2srrc_data', 'msg'], 'Joints'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2srrc_data', 'msg'], 'Joint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2srrc_data', 'msg'], 'Xyz'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2srrc_data', 'msg'], 'Xyzypr'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2srrc_data', 'msg'], 'Xyz'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2srrc_data', 'msg'], 'Ypr'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2srrc_data', 'msg'], 'Ypr'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2srrc_data', 'msg'], 'Xyzypr'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2srrc_data', 'msg'], 'Linkattacher'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['ros2srrc_data', 'msg'], 'Linkattacher'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.action = kwargs.get('action', str())
        self.speed = kwargs.get('speed', float())
        from ros2srrc_data.msg import Joints
        self.movej = kwargs.get('movej', Joints())
        from ros2srrc_data.msg import Joint
        self.mover = kwargs.get('mover', Joint())
        from ros2srrc_data.msg import Xyz
        self.movel = kwargs.get('movel', Xyz())
        from ros2srrc_data.msg import Xyzypr
        self.movexyzw = kwargs.get('movexyzw', Xyzypr())
        from ros2srrc_data.msg import Xyz
        self.movexyz = kwargs.get('movexyz', Xyz())
        from ros2srrc_data.msg import Ypr
        self.moveypr = kwargs.get('moveypr', Ypr())
        from ros2srrc_data.msg import Ypr
        self.moverot = kwargs.get('moverot', Ypr())
        from ros2srrc_data.msg import Xyzypr
        self.moverp = kwargs.get('moverp', Xyzypr())
        self.moveg = kwargs.get('moveg', float())
        from ros2srrc_data.msg import Linkattacher
        self.attach = kwargs.get('attach', Linkattacher())
        from ros2srrc_data.msg import Linkattacher
        self.detach = kwargs.get('detach', Linkattacher())

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
        if self.speed != other.speed:
            return False
        if self.movej != other.movej:
            return False
        if self.mover != other.mover:
            return False
        if self.movel != other.movel:
            return False
        if self.movexyzw != other.movexyzw:
            return False
        if self.movexyz != other.movexyz:
            return False
        if self.moveypr != other.moveypr:
            return False
        if self.moverot != other.moverot:
            return False
        if self.moverp != other.moverp:
            return False
        if self.moveg != other.moveg:
            return False
        if self.attach != other.attach:
            return False
        if self.detach != other.detach:
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

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed = value

    @builtins.property
    def movej(self):
        """Message field 'movej'."""
        return self._movej

    @movej.setter
    def movej(self, value):
        if __debug__:
            from ros2srrc_data.msg import Joints
            assert \
                isinstance(value, Joints), \
                "The 'movej' field must be a sub message of type 'Joints'"
        self._movej = value

    @builtins.property
    def mover(self):
        """Message field 'mover'."""
        return self._mover

    @mover.setter
    def mover(self, value):
        if __debug__:
            from ros2srrc_data.msg import Joint
            assert \
                isinstance(value, Joint), \
                "The 'mover' field must be a sub message of type 'Joint'"
        self._mover = value

    @builtins.property
    def movel(self):
        """Message field 'movel'."""
        return self._movel

    @movel.setter
    def movel(self, value):
        if __debug__:
            from ros2srrc_data.msg import Xyz
            assert \
                isinstance(value, Xyz), \
                "The 'movel' field must be a sub message of type 'Xyz'"
        self._movel = value

    @builtins.property
    def movexyzw(self):
        """Message field 'movexyzw'."""
        return self._movexyzw

    @movexyzw.setter
    def movexyzw(self, value):
        if __debug__:
            from ros2srrc_data.msg import Xyzypr
            assert \
                isinstance(value, Xyzypr), \
                "The 'movexyzw' field must be a sub message of type 'Xyzypr'"
        self._movexyzw = value

    @builtins.property
    def movexyz(self):
        """Message field 'movexyz'."""
        return self._movexyz

    @movexyz.setter
    def movexyz(self, value):
        if __debug__:
            from ros2srrc_data.msg import Xyz
            assert \
                isinstance(value, Xyz), \
                "The 'movexyz' field must be a sub message of type 'Xyz'"
        self._movexyz = value

    @builtins.property
    def moveypr(self):
        """Message field 'moveypr'."""
        return self._moveypr

    @moveypr.setter
    def moveypr(self, value):
        if __debug__:
            from ros2srrc_data.msg import Ypr
            assert \
                isinstance(value, Ypr), \
                "The 'moveypr' field must be a sub message of type 'Ypr'"
        self._moveypr = value

    @builtins.property
    def moverot(self):
        """Message field 'moverot'."""
        return self._moverot

    @moverot.setter
    def moverot(self, value):
        if __debug__:
            from ros2srrc_data.msg import Ypr
            assert \
                isinstance(value, Ypr), \
                "The 'moverot' field must be a sub message of type 'Ypr'"
        self._moverot = value

    @builtins.property
    def moverp(self):
        """Message field 'moverp'."""
        return self._moverp

    @moverp.setter
    def moverp(self, value):
        if __debug__:
            from ros2srrc_data.msg import Xyzypr
            assert \
                isinstance(value, Xyzypr), \
                "The 'moverp' field must be a sub message of type 'Xyzypr'"
        self._moverp = value

    @builtins.property
    def moveg(self):
        """Message field 'moveg'."""
        return self._moveg

    @moveg.setter
    def moveg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'moveg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'moveg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._moveg = value

    @builtins.property
    def attach(self):
        """Message field 'attach'."""
        return self._attach

    @attach.setter
    def attach(self, value):
        if __debug__:
            from ros2srrc_data.msg import Linkattacher
            assert \
                isinstance(value, Linkattacher), \
                "The 'attach' field must be a sub message of type 'Linkattacher'"
        self._attach = value

    @builtins.property
    def detach(self):
        """Message field 'detach'."""
        return self._detach

    @detach.setter
    def detach(self, value):
        if __debug__:
            from ros2srrc_data.msg import Linkattacher
            assert \
                isinstance(value, Linkattacher), \
                "The 'detach' field must be a sub message of type 'Linkattacher'"
        self._detach = value
