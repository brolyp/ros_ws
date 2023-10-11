# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sim_msgs:msg/Filter.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Filter(type):
    """Metaclass of message 'Filter'."""

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
            module = import_type_support('sim_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sim_msgs.msg.Filter')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__filter
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__filter
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__filter
            cls._TYPE_SUPPORT = module.type_support_msg__msg__filter
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__filter

            from geometry_msgs.msg import PoseStamped
            if PoseStamped.__class__._TYPE_SUPPORT is None:
                PoseStamped.__class__.__import_type_support__()

            from sensor_msgs.msg import JointState
            if JointState.__class__._TYPE_SUPPORT is None:
                JointState.__class__.__import_type_support__()

            from sim_msgs.msg import JointCurrent
            if JointCurrent.__class__._TYPE_SUPPORT is None:
                JointCurrent.__class__.__import_type_support__()

            from tf2_msgs.msg import TFMessage
            if TFMessage.__class__._TYPE_SUPPORT is None:
                TFMessage.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Filter(metaclass=Metaclass_Filter):
    """Message class 'Filter'."""

    __slots__ = [
        '_joint_currents',
        '_endeffector_pose',
        '_joint_states',
        '_j_tf',
    ]

    _fields_and_field_types = {
        'joint_currents': 'sim_msgs/JointCurrent',
        'endeffector_pose': 'geometry_msgs/PoseStamped',
        'joint_states': 'sensor_msgs/JointState',
        'j_tf': 'tf2_msgs/TFMessage',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sim_msgs', 'msg'], 'JointCurrent'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'PoseStamped'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'JointState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['tf2_msgs', 'msg'], 'TFMessage'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sim_msgs.msg import JointCurrent
        self.joint_currents = kwargs.get('joint_currents', JointCurrent())
        from geometry_msgs.msg import PoseStamped
        self.endeffector_pose = kwargs.get('endeffector_pose', PoseStamped())
        from sensor_msgs.msg import JointState
        self.joint_states = kwargs.get('joint_states', JointState())
        from tf2_msgs.msg import TFMessage
        self.j_tf = kwargs.get('j_tf', TFMessage())

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
        if self.joint_currents != other.joint_currents:
            return False
        if self.endeffector_pose != other.endeffector_pose:
            return False
        if self.joint_states != other.joint_states:
            return False
        if self.j_tf != other.j_tf:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def joint_currents(self):
        """Message field 'joint_currents'."""
        return self._joint_currents

    @joint_currents.setter
    def joint_currents(self, value):
        if __debug__:
            from sim_msgs.msg import JointCurrent
            assert \
                isinstance(value, JointCurrent), \
                "The 'joint_currents' field must be a sub message of type 'JointCurrent'"
        self._joint_currents = value

    @builtins.property
    def endeffector_pose(self):
        """Message field 'endeffector_pose'."""
        return self._endeffector_pose

    @endeffector_pose.setter
    def endeffector_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import PoseStamped
            assert \
                isinstance(value, PoseStamped), \
                "The 'endeffector_pose' field must be a sub message of type 'PoseStamped'"
        self._endeffector_pose = value

    @builtins.property
    def joint_states(self):
        """Message field 'joint_states'."""
        return self._joint_states

    @joint_states.setter
    def joint_states(self, value):
        if __debug__:
            from sensor_msgs.msg import JointState
            assert \
                isinstance(value, JointState), \
                "The 'joint_states' field must be a sub message of type 'JointState'"
        self._joint_states = value

    @builtins.property
    def j_tf(self):
        """Message field 'j_tf'."""
        return self._j_tf

    @j_tf.setter
    def j_tf(self, value):
        if __debug__:
            from tf2_msgs.msg import TFMessage
            assert \
                isinstance(value, TFMessage), \
                "The 'j_tf' field must be a sub message of type 'TFMessage'"
        self._j_tf = value
