import casadi as cs
import os
from ament_index_python.packages import get_package_share_directory

class DynamicsService():
    def __init__(self, node):
        model_pkg_share = get_package_share_directory('sim_alpha_description')
        qddot_file_name = 'casadi/qddot.casadi'
        qddot_path = os.path.join(model_pkg_share, qddot_file_name)

        
        self.forward_dynamics = cs.Function.load(qddot_path)
        self.time_step = 0.05
        self.thetaOffset = [0, 5.734236240386963, 0.004350273869931698, 1.452919602394104, 0.019246665760874748]

