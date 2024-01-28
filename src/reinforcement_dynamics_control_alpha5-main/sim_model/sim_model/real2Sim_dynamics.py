import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from sim_msgs.msg import SimInput
from .dynamicsService import DynamicsService
from scipy.integrate import solve_ivp
import numpy as np
import array  as arr
import copy
import time

class Real2Sim_Dynamic_Publisher(Node):

    def __init__(self):
        super().__init__("Real2Sim_Dynamic_Publisher")
        self.declare_parameter("frequency", 20)
        self.frequency = self.get_parameter("frequency").value

        self.declare_parameter('joint_names', ['alpha_axis_a', 'alpha_axis_b', 'alpha_axis_c', 'alpha_axis_d', 'alpha_axis_e'])
        self.joint_names = self.get_parameter('joint_names').value

        self.declare_parameter("frame_id", "base_link")
        self.declare_parameter("tool_frame_id", "alpha_standard_jaws_base_link")
        self.frame_id = self.get_parameter("frame_id").value
        self.tool_frame_id = self.get_parameter("tool_frame_id").value

        self.dynamic_Service = DynamicsService(self)
        self.joint_state_publisher = self.create_publisher(JointState, "joint_states", 10)
        self.create_subscription(SimInput, "joint_input", self.simulate, 10)
        self.create_subscription(JointState, "joint_configure", self.configure_home, 10)

        
        self.theta = arr.array('d', np.add([0.0 ,0.0 ,0.0 ,0.0 ,0.0],self.dynamic_Service.thetaOffset)).tolist()
        #self.theta = [6.3, 3.4, 3.4, 6.3, 0.0]
        #self.theta.reverse()
        self.dtheta = arr.array('d', [0.0, 0.0 ,0.0, 0.0, 0.0]).tolist()
        self.t_prev = 0.00

        self.create_timer(1/self.frequency, self.publish_joint_state)

    def publish_joint_state(self):
        # self.get_logger().info(f' publishing joint state {self.theta}')
        joint_state = JointState()
        joint_state.header.stamp = self.get_clock().now().to_msg()
        joint_state.name = self.joint_names
        joint_state.position = copy.deepcopy(self.theta)
        joint_state.velocity = copy.deepcopy(self.dtheta)
        #self.get_logger().info(f' dynamic states publishing {joint_state}')
        self.joint_state_publisher.publish(joint_state)

    def configure_home(self, config: JointState):
        # self.get_logger().info(f'configuring {config.position}')
        self.theta = config.position
        self.dtheta = config.velocity

    def update_state(self, t, thet, thetd):
        [thet0 ,thet1,thet2,thet3]  = thet
        [thet0d, thet1d,thet2d, thet3d]  = thetd
        self.theta = [self.theta[0] , thet3, thet2, thet1, thet0]
        self.dtheta = [self.dtheta[0] , thet3d, thet2d, thet1d, thet0d]
        #time.sleep((t - self.t_prev) if (t - self.t_prev) > 0 else 0)
    
    def simulate(self, input :SimInput):
        t_span = (0, self.dynamic_Service.time_step)
        y0 = [self.theta[4],self.dtheta[4],self.theta[3],self.dtheta[3],self.theta[2],self.dtheta[2],self.theta[1],self.dtheta[1]]
        args = (input.joint_torque.torque, input.joint_disturbance.disturbance,)
        states = solve_ivp(self.dSdt, t_span= t_span, y0=y0, method='LSODA', args = args)
        self.update_state(states.t[-1], states.y.T[-1,::2], states.y.T[-1,1::2])
        # self.get_logger().info(f'Executing dynamics for t_span {t_span} sec :: {states.message}')
        return states

    def qd_func(self, thetad):
        return thetad

    def dSdt(self, t,S , tau, noise):
        #self.get_logger().info(f' dynamic states at t = {t} ::: { S }')
        # self.get_logger().info(f"noise ::: {noise}")
        thet0, thet0d, thet1, thet1d, thet2, thet2d, thet3, thet3d = S
        thetalist = [thet0, thet1, thet2, thet3]
        dthetalist = [thet0d, thet1d, thet2d, thet3d]

        # update visualization states
        self.update_state(t, thetalist, dthetalist)
        [ddq0,ddq1,ddq2,ddq3] = np.array(self.dynamic_Service.forward_dynamics(thetalist, dthetalist, tau))
        self.t_prev = t
        return [
            self.qd_func(thet0d),
            ddq0[0]+noise[0],
            self.qd_func(thet1d),
            ddq1[0]+noise[1],
            self.qd_func(thet2d),
            ddq2[0]+noise[2],
            self.qd_func(thet3d),
            ddq3[0]+noise[3]
        ]
    

def main(args = None):
    rclpy.init(args=args)
    dyrepr = Real2Sim_Dynamic_Publisher()
    try:
        rclpy.spin(dyrepr)
    except KeyboardInterrupt:
        dyrepr.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()