from sensor_msgs.msg import JointState
from sim_msgs.msg import JointTorque
from geometry_msgs.msg import PoseStamped
from std_msgs.msg import Float32MultiArray
from rclpy.node import Node
import numpy as np
import array  as arr
import rclpy
from sim_model.dynamicsService import DynamicsService

class RobotEnv():
    def __init__(self,node:Node):
        self.node = node
        self.node.create_subscription(JointState, "joint_states", self.joint_state_handler, 10)
        self.node.create_subscription(PoseStamped, "model_end_effector_pose", self.endeffector_pose_handler, 10)

        self.joint_torque_publisher = self.node.create_publisher(JointTorque, "joint_torque", 10)
        self.joint_configure_publisher = self.node.create_publisher(JointState, "joint_configure", 10)
        self.joint_velocity_publisher = self.node.create_publisher(Float32MultiArray, "command/velocities", 10)

        self.dynamic_Service = DynamicsService(node)

        self.time_obs_ns = 0
        self.time_obs_ns_ = self.time_obs_ns
        self.current_state = [0.0]*8
        self.pose = [0.0, 0.0, 0.0]

    def endeffector_pose_handler(self, output_pose:PoseStamped):
        self.pose[0] = output_pose.pose.position.x
        self.pose[1] = output_pose.pose.position.y
        self.pose[2] = output_pose.pose.position.z

    def joint_state_handler(self, state:JointState):
        self.time_obs_ns = state.header.stamp
        self.current_state[0:4] = np.flip(state.position)[:-1]
        self.current_state[4:8] = np.flip(state.velocity)[:-1]

    def _set_action(self, action):
        msg = JointTorque()
        msg.torque = action
        msg.header.stamp = self.node.get_clock().now().to_msg()
        self.joint_torque_publisher.publish(msg)

    def _get_obs(self):
        """
        Take observation from the environment and return it
        """
        #Spin until a new observation (with a different time stamp)
        while self.time_obs_ns == self.time_obs_ns_:
            rclpy.spin_once(self.node)

        self.time_obs_ns_ = self.time_obs_ns
        return self.current_state
    
    def _reset(self):
        joint_state_msg = JointState()
        self.theta = arr.array('d', np.add([0,0,0,0,0],self.dynamic_Service.thetaOffset)).tolist()
        self.dtheta = arr.array('d', [0,0,0,0,0]).tolist()

        joint_state_msg.position = self.theta
        joint_state_msg.velocity = self.dtheta
        self.joint_configure_publisher.publish(joint_state_msg)
        rclpy.spin_once(self.node)