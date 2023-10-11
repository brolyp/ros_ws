import rclpy
from rclpy.node import Node
from simple_pid import PID
from environment import RobotEnv
import numpy as np
from time import sleep

class PID_controller(Node):
    def __init__(self, desired_theta):
        time_step = 0.05
        self.pid_j0 = PID(Kp=28e-5, Ki=0.0, Kd=50e-4, sample_time=time_step, output_limits=(-8.0e-2, 6.6e-2), setpoint=desired_theta[0])
        self.pid_j1 = PID(Kp=28e-5, Ki=0.0, Kd=40e-4, sample_time=time_step, output_limits=(-1.5e-2, 2.3e-2), setpoint=desired_theta[1])
        self.pid_j2 = PID(Kp=28e-6, Ki=0.0, Kd=40e-5, sample_time=time_step, output_limits=(-0.9e-2, 1.2e-2), setpoint=desired_theta[2])
        self.pid_j3 = PID(Kp=28e-7, Ki=0.0, Kd=30e-6, sample_time=time_step, output_limits=(-1e+2, 1e+2), setpoint=desired_theta[3])
    
    def control(self, current_theta):
        control_j0 = self.pid_j0(current_theta[0])
        control_j1 = self.pid_j1(current_theta[1])        
        control_j2 = self.pid_j2(current_theta[2])  
        control_j3 = self.pid_j3(current_theta[3])
        return [control_j0, control_j1, control_j2, control_j3]

def main(args=None):
    rclpy.init(args=args)
    node = rclpy.create_node("robot_env")
    robot = RobotEnv(node)
    robot._reset()
    sleep(2)
    desired = np.array([0.2, 2.4, 0.2, 0.2])
    pid = PID_controller(desired)
    _obs  = np.array(robot._get_obs())
    for t in range(100):
        _obs = robot._get_obs()
        robot._set_action(pid.control(_obs[0:4]))
        print(_obs[0:4])
    robot._reset()
    sleep(2)
    print(_obs[0:4])

if __name__ == '__main__':
    main()