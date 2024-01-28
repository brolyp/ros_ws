import rclpy
from rclpy.node import Node
from simple_pid import PID
from environment import RobotEnv
import numpy as np
import matplotlib.pyplot as plt

class PID_controller(Node):
    def __init__(self, desired_theta):
        time_step = 0.001
        self.pid_j0 = PID(Kp=20e-4, Ki=0.0, Kd=190e-6, sample_time=time_step, output_limits=(-1.2e-3, 1.2e-3), setpoint=desired_theta[0])
        self.pid_j1 = PID(Kp=17e-4, Ki=0.0, Kd=190e-6, sample_time=time_step, output_limits=(-1.2e-3, 1.2e-3), setpoint=desired_theta[1])
        self.pid_j2 = PID(Kp=350e-4, Ki=0.0, Kd=70e-5, sample_time=time_step, output_limits=(-1e-3, 1e-3), setpoint=desired_theta[2])
        self.pid_j3 = PID(Kp=12e-4, Ki=0.0, Kd=100e-6, sample_time=time_step, output_limits=(-1e-5, 1e-5), setpoint=desired_theta[3])

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
    desired = np.array([2.0, 2.5, 0.5, 4.5])
    pid = PID_controller(desired)

    n = 1000

    x = []
    y3 = []
    y2 = []
    y1 = []
    y0 = []

    for t in range(n):
        _obs = robot._get_obs()

        at = t*0.05
        x.append(at)
        
        y3.append(_obs[3])
        y2.append(_obs[2])
        y1.append(_obs[1])
        y0.append(_obs[0])

        noise = robot.generate_noise_list(n=4, amplitude=0, noise_type = 'gaussian')
        # noise = np.array([0.0, 0.0, 0.0, 1.0])
        torque = pid.control(_obs[0:4])
        # print(torque)
        robot._set_action(torque, noise.tolist())
        print(_obs[0:4])

    # # Plot each line with a unique color and a label
    plt.plot(x, y3, label="Joint 3", color='red')   # Red color for joint 3
    plt.axhline(y = desired[3], color = 'red', linestyle = 'dashed') 
    plt.plot(x, y2, label="Joint 2", color='green') # Green color for joint 2
    plt.axhline(y = desired[2], color = 'green', linestyle = 'dashed') 
    plt.plot(x, y1, label="Joint 1", color='blue')  # Blue color for joint 1
    plt.axhline(y = desired[1], color = 'blue', linestyle = 'dashed') 
    plt.plot(x, y0, label="Joint 0", color='purple')# Purple color for joint 0
    plt.axhline(y = desired[0], color = 'purple', linestyle = 'dashed')
    plt.legend(loc="upper left")
    plt.show()

if __name__ == '__main__':
    main()