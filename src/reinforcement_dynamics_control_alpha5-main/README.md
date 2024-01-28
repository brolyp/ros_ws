# reinforcement_rm5


## how to use

create a workspace folder
```
mkdir dev_ws
cd dev_ws
mkdir src
cd src
git clone https://github.com/Eddy-Morgan/reinforcement_dynamics_control_alpha5
```

build project
```
cd . #back to dev_ws
colcon build
```
source environment  
```
. install/setup.bash
```

launch simulator
```
ros2 launch sim_bringup alpha_5_simulator.launch.py use_rviz:=false
```