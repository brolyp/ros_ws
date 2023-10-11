from gym_environment import armEnv
import os

from stable_baselines3 import PPO
from stable_baselines3.common.evaluation import evaluate_policy
from time import sleep

env = armEnv()
arm_path = os.path.join('Training', 'SavedModels', 'hybrid_model_PPO')

log_path = os.path.join('Training', 'Logs')

# LOAD OR CREATE NEW
model = PPO.load(arm_path, env)
#model = PPO('MlpPolicy', env, verbose=1, tensorboard_log= log_path)

print(model.policy)

#print(evaluate_policy(model, env, n_eval_episodes=1, render=False))
