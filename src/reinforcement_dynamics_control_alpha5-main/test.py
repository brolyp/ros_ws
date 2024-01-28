import rclpy
from environment import RobotEnv
import numpy as np

rclpy.init(args=None)

robot = RobotEnv(rclpy.create_node("robot_env"))
robot._reset(start_theta=[1.92466658e-02, 1.45291960e+00 ,4.35027387e-03, 5.73423624e+00],
              start_dtheta=[0.0 ,0.0 ,0.0 ,0.0 ], add_offset=False) #home configuration

robot._reset(start_theta=[0.0 ,0.0 ,0.0 ,0.0 ],
              start_dtheta=[0.0 ,0.0 ,0.0 ,0.0 ], add_offset=True) #home configuration can also be achieved with this
obs = np.array(robot._get_obs())
for i in range(1):
    tq = [0.002, 0.002, 0.002, 0.002]
    robot._set_action(tq, [0., 0., 0., 0.])  
    obs = np.array(robot._get_obs())
    print(obs)
