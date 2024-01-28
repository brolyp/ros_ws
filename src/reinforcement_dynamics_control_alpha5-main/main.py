import gym 
from gym import Env
from gym.spaces import Discrete, Box, Dict, Tuple, MultiBinary, MultiDiscrete
from environment import RobotEnv
import numpy as np
import random
import os
import rclpy


from stable_baselines3 import PPO
from stable_baselines3.common.vec_env import DummyVecEnv
from stable_baselines3.common.evaluation import evaluate_policy

## HYPERPARAMETERS ####
maxTimesteps = 5000




class armEnv(Env):
    def __init__(self):
        # Normalize action space?
        self.action_space = Box(low= np.array([-8.0e-2, -1.5e-2, -0.9e-2 , -0.7e-2]),
                                high=np.array([6.6e-2, 2.3e-2, 1.2e-2, 0.5e-2]), shape=(4, ))
        #self.action_space = Box(low= np.array([-8.0, -1.5, -0.9 , -0.7]),high=np.array([6.6, 2.3, 1.2, 0.5]), shape=(4, ))
        self.observation_space = Box(low = np.array([0.019246665760874748, 1.452919602394104, 0.004350273869931698, 5.734236240386963,
                                                      -0.46, -0.2, -0.23, -0.23]),
                                     high= np.array([6.3, 3.4, 3.4, 5.8,
                                                      0.38, 0.19, 0.21, 0.23]), shape=(8, ))
        
        self.target_state  = np.array([0.2, 2.4, 0.2, 0.2, 0.0, 0.0, 0.0, 0.0])   #Box(-1,1, shape=(8,)).sample()
        self.initial_state  =  np.array([0.1, 1.2, 0.1, 0.1, 0.0, 0.0, 0.0, 0.0])  ## Box(-1,1, shape=(8, )).sample()
        self.current_state = self.initial_state
        self.timestep = maxTimesteps
        print("\nSTARTING STATE: ", self.current_state)
        print("TARGET STATE: ", self.target_state, "\n")

        #create ROS2 node
        rclpy.init(args=None)
        self.node = rclpy.create_node("robot_env")
        self.robot = RobotEnv(self.node)

    def step(self, action):
        #set action
        self.robot ._set_action(action)

        #get observation
        _obs  = self.robot._get_obs()
        self.current_state = np.concatenate((_obs[0:4], _obs[4:8]), axis=0)
        
        #print("theta: ", self.current_state[0:4])
        #print("dtheta: ", self.current_state[4:8] , '\n')

        #error2 = self.target_state[0:4] - self.current_state[0:4]
        #error2 = np.sum(error2*error2)
        
        theta2 = self.target_state[0:4] - self.current_state[0:4]
        theta2 = np.sum(theta2*theta2)
        
        dtheta2 = self.target_state[4:8] - self.current_state[4:8]
        dtheta2 = np.sum(dtheta2*dtheta2)
        
        torque2 = np.sum(action*action)
   
        reward = -(theta2 + 0.1 * dtheta2 + 0.001 * torque2)
        #reward = -error2
        
        
        if self.timestep % 100 == 0:
            print(self.timestep)
            print(reward)
            
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
        self.timestep = maxTimesteps
        return self.initial_state        

        
env = armEnv()
arm_path = os.path.join('Training', 'SavedModels', 'model_PPO')

log_path = os.path.join('Training', 'Logs')
model = PPO.load(arm_path, env)

#model = PPO('MlpPolicy', env, verbose=1, tensorboard_log= log_path)
#model.learn(total_timesteps=500000)
#model.save(arm_path)
    
    
print(evaluate_policy(model, env, n_eval_episodes=10, render=False))


        
        
        
        
        
        
