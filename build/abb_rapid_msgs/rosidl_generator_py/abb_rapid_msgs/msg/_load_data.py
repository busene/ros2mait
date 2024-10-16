# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_rapid_msgs:msg/LoadData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LoadData(type):
    """Metaclass of message 'LoadData'."""

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
                'abb_rapid_msgs.msg.LoadData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__load_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__load_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__load_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__load_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__load_data

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


class LoadData(metaclass=Metaclass_LoadData):
    """Message class 'LoadData'."""

    __slots__ = [
        '_mass',
        '_cog',
        '_aom',
        '_ix',
        '_iy',
        '_iz',
    ]

    _fields_and_field_types = {
        'mass': 'float',
        'cog': 'abb_rapid_msgs/Pos',
        'aom': 'abb_rapid_msgs/Orient',
        'ix': 'float',
        'iy': 'float',
        'iz': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_msgs', 'msg'], 'Pos'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_msgs', 'msg'], 'Orient'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.mass = kwargs.get('mass', float())
        from abb_rapid_msgs.msg import Pos
        self.cog = kwargs.get('cog', Pos())
        from abb_rapid_msgs.msg import Orient
        self.aom = kwargs.get('aom', Orient())
        self.ix = kwargs.get('ix', float())
        self.iy = kwargs.get('iy', float())
        self.iz = kwargs.get('iz', float())

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
        if self.mass != other.mass:
            return False
        if self.cog != other.cog:
            return False
        if self.aom != other.aom:
            return False
        if self.ix != other.ix:
            return False
        if self.iy != other.iy:
            return False
        if self.iz != other.iz:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def mass(self):
        """Message field 'mass'."""
        return self._mass

    @mass.setter
    def mass(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mass' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mass' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mass = value

    @builtins.property
    def cog(self):
        """Message field 'cog'."""
        return self._cog

    @cog.setter
    def cog(self, value):
        if __debug__:
            from abb_rapid_msgs.msg import Pos
            assert \
                isinstance(value, Pos), \
                "The 'cog' field must be a sub message of type 'Pos'"
        self._cog = value

    @builtins.property
    def aom(self):
        """Message field 'aom'."""
        return self._aom

    @aom.setter
    def aom(self, value):
        if __debug__:
            from abb_rapid_msgs.msg import Orient
            assert \
                isinstance(value, Orient), \
                "The 'aom' field must be a sub message of type 'Orient'"
        self._aom = value

    @builtins.property
    def ix(self):
        """Message field 'ix'."""
        return self._ix

    @ix.setter
    def ix(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ix' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ix' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ix = value

    @builtins.property
    def iy(self):
        """Message field 'iy'."""
        return self._iy

    @iy.setter
    def iy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'iy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'iy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._iy = value

    @builtins.property
    def iz(self):
        """Message field 'iz'."""
        return self._iz

    @iz.setter
    def iz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'iz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'iz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._iz = value
