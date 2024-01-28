from sensor_msgs.msg import JointState
from sim_msgs.msg import SimInput ,JointTorque,JointDisturbance
from geometry_msgs.msg import PoseStamped
from rclpy.node import Node
import numpy as np
import array  as arr
from sim_model.real2Sim_dynamics import Real2Sim_Dynamic_Publisher
from sim_model.real2Sim_kinematics import Real2Sim_Kinematics_Publisher

class RobotEnv():
    def __init__(self,node:Node):
        self.node = node
        self.dynamics = Real2Sim_Dynamic_Publisher()
        self.kinematics = Real2Sim_Kinematics_Publisher()
        self.current_state = [0.0]*8
        self.pose = PoseStamped()

    def _set_action(self, action, noise):
        msg = SimInput()
        tau_msg = JointTorque()
        tau_msg.torque = action
        tau_msg.header.stamp = self.node.get_clock().now().to_msg()
        noise_msg = JointDisturbance()
        noise_msg.disturbance = noise
        noise_msg.header.stamp = self.node.get_clock().now().to_msg()
        
        msg.joint_disturbance=noise_msg
        msg.joint_torque=tau_msg
        self.dynamics.simulate(msg)

    def _get_obs(self):
        """
        Take observation from the environment and return it
        """
        self.current_state[0:4] = np.flip(self.dynamics.theta)[:-1]
        self.current_state[4:8] = np.flip(self.dynamics.dtheta)[:-1]
        # self.pose = self.kinematics.convert_km_end_pos_to_pose(self.dynamics.theta)
        return self.current_state

    def _reset(self , start_theta:list[float]=[0.0, 0.0, 0.0, 0.0], start_dtheta:list[float]=[0.0, 0.0, 0.0, 0.0], add_offset=False):
        joint_state_msg = JointState()
        start_theta.append(0.0)
        start_dtheta.append(0.0)
        if add_offset:
            theta = arr.array('d', np.add(np.flip(start_theta), self.dynamics.dynamic_Service.thetaOffset))
            dtheta = arr.array('d', np.flip(start_dtheta))
        else:
            theta = arr.array('d', np.flip(start_theta))
            dtheta = arr.array('d', np.flip(start_dtheta))

        joint_state_msg.position = theta
        joint_state_msg.velocity = dtheta
        self.dynamics.configure_home(joint_state_msg)


    def generate_noise_list(self, n, amplitude=2e-1, noise_type='gaussian'):
        """
        Generate a list of noise or disturbance values for a robot manipulator.

        Parameters:
        - n: The number of noise values to generate.
        - amplitude: The maximum amplitude of the noise.
        - noise_type: The type of noise, e.g., 'gaussian' or 'uniform'.

        Returns:
        - noise_values: A list of noise values.
        """
        if noise_type == 'gaussian':
            noise_values = np.random.normal(0, amplitude, n)
        elif noise_type == 'uniform':
            noise_values = np.random.uniform(-amplitude, amplitude, n)
        else:
            raise ValueError("Unsupported noise type. Choose 'gaussian' or 'uniform'.")
        return noise_values


        

  

   
