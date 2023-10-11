from traj_environment import armEnv
import os

from stable_baselines3 import PPO
from stable_baselines3.common.evaluation import evaluate_policy
from time import sleep

env = armEnv()
arm_path = os.path.join('Training', 'SavedModels', 't_hybrid_model_PPO')

log_path = os.path.join('Training', 'Logs')

# LOAD OR CREATE NEW
model = PPO.load(arm_path, env, learning_rate=0.0005)
#model = PPO('MlpPolicy', env, verbose=1, tensorboard_log= log_path)

env.reset()
sleep(2)
model.learn(total_timesteps=400000)
model.save(arm_path)


env.reset()


#print(evaluate_policy(model, env, n_eval_episodes=1, render=False))
