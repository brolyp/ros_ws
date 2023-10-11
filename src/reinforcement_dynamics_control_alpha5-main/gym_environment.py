import gymnasium as gym 
from gymnasium import Env
from gymnasium.spaces import Discrete, Dict, Tuple, MultiBinary, MultiDiscrete
from gym.spaces.box import Box
from environment import RobotEnv
import numpy as np
import random
import os
from time import sleep
import math


import rclpy
from rclpy.node import Node
from simple_pid import PID




print(gym.__version__)

## HYPERPARAMETERS ####
maxTimesteps = 1000

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



    


class armEnv(Env):
    def __init__(self):
        # Normalize action space?
        self.action_space = Box(low= np.array([-8.0e-2, -1.5e-2, -0.9e-2 , -0.7e-2]),
                                high=np.array([6.6e-2, 2.3e-2, 1.2e-2, 0.5e-2]), shape=(4, ))
        #self.action_space = Box(low= np.array([-8.0, -1.5, -0.9 , -0.7]),high=np.array([6.6, 2.3, 1.2, 0.5]), shape=(4, ))
        self.observation_space = Box(low = np.array([0.029, 1.19, 0.016, 0.01,   # theta
                                                      -0.46, -0.2, -0.23, -0.23, # dtheta
                                                      #-8.0e-2, -1.5e-2, -0.9e-2 , -0.7e-2, #PID ACTION
                                                      -math.inf, -math.inf, -math.inf, -math.inf]), #ERROR
                                     high= np.array([6.3, 3.4, 3.4, 5.8,
                                                      0.38, 0.19, 0.21, 0.23,
                                                      #6.6e-2, 2.3e-2, 1.2e-2, 0.5e-2,
                                                      math.inf, math.inf, math.inf, math.inf]), shape=(12, ))
        
        self.target_state  = np.array([0.2, 2.4, 0.2, 0.2, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])   #Box(-1,1, shape=(8,)).sample()
        self.initial_state  =  np.array([1.92466658e-02,  1.45291960e+00,  4.35027387e-03,  5.73423624e+00, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0])  ## Box(-1,1, shape=(8, )).sample()

        self.last_action = [0,0,0,0]

        self.current_state = self.initial_state
        self.timestep = maxTimesteps
        print("\nSTARTING STATE: ", self.current_state)
        print("TARGET STATE: ", self.target_state, "\n")

        #create ROS2 node
        rclpy.init(args=None)
        self.node = rclpy.create_node("robot_env")
        self.robot = RobotEnv(self.node)

        self.desired = self.target_state[0:4]
        self.pid = PID_controller(self.desired)

    def step(self, action):
        
        # FUSE PID AND PPO ACTION
        _obs = self.robot._get_obs()
        pid_action = self.pid.control(_obs[0:4])
        fused_action = [float(sum(x)) for x in zip(pid_action, action)]
        self.robot._set_action(fused_action)

        # compare this new action to last action
        action_change = np.sum(abs(np.array(self.last_action) - np.array(fused_action)))

        # record current action for next step
        self.last_action = fused_action


        # check what happened
        _obs = self.robot._get_obs()
        error = self.target_state[0:4] - _obs[0:4]
        #tmp = np.concatenate((_obs, pid_action), axis=None)
        #cur = np.concatenate((tmp, error), axis=None)
        #self.current_state = np.array(cur)
        self.current_state = np.concatenate((_obs, error), axis=None)

        theta_error = np.sum(abs(self.target_state[0:4] - self.current_state[0:4]))
        dtheta_error = np.sum(abs(self.target_state[4:8] - self.current_state[4:8]))

        reward = -(theta_error + (0.1 * dtheta_error + 0.1 * action_change) * 1/self.timestep)
        
        
        
        if self.timestep % 100 == 0:
            
            print(self.timestep)
            print("State: ", self.current_state)
            print("Action: ", action)
            print("Reward: ", reward)
            
        #print("reward", reward)

        self.timestep -= 1
        # Add OOB Scenario
        if self.timestep <= 0 or reward == 0:
            done = True
        else:
            done = False
            
        info = {}

        return self.current_state, reward, done, info
        
    def render(self):
        pass
        
    def reset(self):
        print("\nEND STATE: ", self.current_state)
        print("TARGET STATE: ", self.target_state, "\n")
        self.current_state = self.initial_state
        self.last_action = [0,0,0,0]
        self.timestep = maxTimesteps
        self.robot._reset()
        sleep(2)
        return self.initial_state        



        
        
        
        
        
        
