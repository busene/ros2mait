# generated from rosidl_generator_py/resource/_idl.py.em
# with input from abb_rapid_sm_addin_msgs:msg/EGMSettings.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EGMSettings(type):
    """Metaclass of message 'EGMSettings'."""

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
            module = import_type_support('abb_rapid_sm_addin_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'abb_rapid_sm_addin_msgs.msg.EGMSettings')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__egm_settings
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__egm_settings
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__egm_settings
            cls._TYPE_SUPPORT = module.type_support_msg__msg__egm_settings
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__egm_settings

            from abb_rapid_sm_addin_msgs.msg import EGMActivateSettings
            if EGMActivateSettings.__class__._TYPE_SUPPORT is None:
                EGMActivateSettings.__class__.__import_type_support__()

            from abb_rapid_sm_addin_msgs.msg import EGMRunSettings
            if EGMRunSettings.__class__._TYPE_SUPPORT is None:
                EGMRunSettings.__class__.__import_type_support__()

            from abb_rapid_sm_addin_msgs.msg import EGMSetupSettings
            if EGMSetupSettings.__class__._TYPE_SUPPORT is None:
                EGMSetupSettings.__class__.__import_type_support__()

            from abb_rapid_sm_addin_msgs.msg import EGMStopSettings
            if EGMStopSettings.__class__._TYPE_SUPPORT is None:
                EGMStopSettings.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EGMSettings(metaclass=Metaclass_EGMSettings):
    """Message class 'EGMSettings'."""

    __slots__ = [
        '_allow_egm_motions',
        '_use_presync',
        '_setup_uc',
        '_activate',
        '_run',
        '_stop',
    ]

    _fields_and_field_types = {
        'allow_egm_motions': 'boolean',
        'use_presync': 'boolean',
        'setup_uc': 'abb_rapid_sm_addin_msgs/EGMSetupSettings',
        'activate': 'abb_rapid_sm_addin_msgs/EGMActivateSettings',
        'run': 'abb_rapid_sm_addin_msgs/EGMRunSettings',
        'stop': 'abb_rapid_sm_addin_msgs/EGMStopSettings',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_sm_addin_msgs', 'msg'], 'EGMSetupSettings'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_sm_addin_msgs', 'msg'], 'EGMActivateSettings'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_sm_addin_msgs', 'msg'], 'EGMRunSettings'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['abb_rapid_sm_addin_msgs', 'msg'], 'EGMStopSettings'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.allow_egm_motions = kwargs.get('allow_egm_motions', bool())
        self.use_presync = kwargs.get('use_presync', bool())
        from abb_rapid_sm_addin_msgs.msg import EGMSetupSettings
        self.setup_uc = kwargs.get('setup_uc', EGMSetupSettings())
        from abb_rapid_sm_addin_msgs.msg import EGMActivateSettings
        self.activate = kwargs.get('activate', EGMActivateSettings())
        from abb_rapid_sm_addin_msgs.msg import EGMRunSettings
        self.run = kwargs.get('run', EGMRunSettings())
        from abb_rapid_sm_addin_msgs.msg import EGMStopSettings
        self.stop = kwargs.get('stop', EGMStopSettings())

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
        if self.allow_egm_motions != other.allow_egm_motions:
            return False
        if self.use_presync != other.use_presync:
            return False
        if self.setup_uc != other.setup_uc:
            return False
        if self.activate != other.activate:
            return False
        if self.run != other.run:
            return False
        if self.stop != other.stop:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def allow_egm_motions(self):
        """Message field 'allow_egm_motions'."""
        return self._allow_egm_motions

    @allow_egm_motions.setter
    def allow_egm_motions(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'allow_egm_motions' field must be of type 'bool'"
        self._allow_egm_motions = value

    @builtins.property
    def use_presync(self):
        """Message field 'use_presync'."""
        return self._use_presync

    @use_presync.setter
    def use_presync(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'use_presync' field must be of type 'bool'"
        self._use_presync = value

    @builtins.property
    def setup_uc(self):
        """Message field 'setup_uc'."""
        return self._setup_uc

    @setup_uc.setter
    def setup_uc(self, value):
        if __debug__:
            from abb_rapid_sm_addin_msgs.msg import EGMSetupSettings
            assert \
                isinstance(value, EGMSetupSettings), \
                "The 'setup_uc' field must be a sub message of type 'EGMSetupSettings'"
        self._setup_uc = value

    @builtins.property
    def activate(self):
        """Message field 'activate'."""
        return self._activate

    @activate.setter
    def activate(self, value):
        if __debug__:
            from abb_rapid_sm_addin_msgs.msg import EGMActivateSettings
            assert \
                isinstance(value, EGMActivateSettings), \
                "The 'activate' field must be a sub message of type 'EGMActivateSettings'"
        self._activate = value

    @builtins.property
    def run(self):
        """Message field 'run'."""
        return self._run

    @run.setter
    def run(self, value):
        if __debug__:
            from abb_rapid_sm_addin_msgs.msg import EGMRunSettings
            assert \
                isinstance(value, EGMRunSettings), \
                "The 'run' field must be a sub message of type 'EGMRunSettings'"
        self._run = value

    @builtins.property
    def stop(self):
        """Message field 'stop'."""
        return self._stop

    @stop.setter
    def stop(self, value):
        if __debug__:
            from abb_rapid_sm_addin_msgs.msg import EGMStopSettings
            assert \
                isinstance(value, EGMStopSettings), \
                "The 'stop' field must be a sub message of type 'EGMStopSettings'"
        self._stop = value
