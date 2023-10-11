
import gym 
from gym import Env
from gym.spaces import Discrete, Box, Dict, Tuple, MultiBinary, MultiDiscrete

import numpy as np
import random
import os

import matplotlib.pyplot as plt


from stable_baselines3 import PPO
from stable_baselines3.common.vec_env import DummyVecEnv
from stable_baselines3.common.evaluation import evaluate_policy
'''
de = DynamicEnvironment()
thetalist = np.array([0.1, 0.1, 0.1, 0.1])
dthetalist = np.array([0.1, 0.2, 0.3, 0.1])
taumat = np.array([[0.1, 0.1, 0.1, 0.1],[0.1, 0.1, 0.1, 0.1]])
Ftipmat = np.zeros((np.array(taumat).shape[0], 6))
b = np.array([2, 2, 2, 2])
dt = 0.001

rec = []
for i in range(10):
    thetamat, dthetamat  = de.simulate(thetalist,dthetalist,taumat,Ftipmat, b, dt)
    thetalist = thetamat[-1]
    rec.append(thetalist)
    dthetalist = dthetamat[-1]
    print(thetalist.shape)
    print(thetalist)
    
print(thetamat.shape)
rec = np.stack(rec)
print(rec)
plt.plot(rec[:,0])

'''

from gym_environment import armEnv
from time import sleep

env = armEnv()
arm_path = os.path.join('Training', 'SavedModels', 'hybrid_model_PPO')

log_path = os.path.join('Training', 'Logs')
model = PPO.load(arm_path, env)

rec = []
rec1 = []


obs = env.reset()
sleep(2)
for i in range(0,500):
    action, _states = model.predict(obs)
    obs, rewards, dones, info = env.step(action)
    rec.append(action)
    rec1.append(obs)


rec = np.stack(rec)
rec1 = np.stack(rec1)


plt.subplot(4,1,1)
plt.plot(rec1[:,0])
plt.plot([0,500], [0.2,0.2])
plt.subplot(4,1,2)
plt.plot(rec1[:,1])
plt.plot([0,500], [2.4,2.4])
plt.subplot(4,1,3)
plt.plot(rec1[:,2])
plt.plot([0,500], [0.2,0.2])
plt.subplot(4,1,4)
plt.plot(rec1[:,3])
plt.plot([0,500], [0.2,0.2])
plt.xlabel("PID/PPO Theta Values")

plt.show()

# plot the actions/torques in a seperate plot