import os
import numpy as np
from std_msgs.msg import Header
from geometry_msgs.msg import PoseStamped
from scipy.spatial.transform import Rotation
from rclpy.node import Node
import casadi as cs
from ament_index_python.packages import get_package_share_directory

class ForwardKinematicService():
    def __init__(self, node):
        model_pkg_share = get_package_share_directory('sim_alpha_description')
        fk_file_name = 'casadi/fk.casadi'
        fk_path = os.path.join(model_pkg_share, fk_file_name)
        self.forward_kinematics = cs.Function.load(fk_path)


    def compute_fk_callback(self, node:Node, position):
        output_pose = PoseStamped()
        T_fk = self.forward_kinematics(np.flip(position)[:-1])
        # Pose Position
        output_pose.pose.position.x = float(T_fk[0,3])
        output_pose.pose.position.y = float(T_fk[1,3])
        output_pose.pose.position.z = float(T_fk[2,3])

        # rotation object
        rot = Rotation.from_matrix(T_fk[0:3,0:3])
        # convert to quaternion (x, y, z, w)
        rot_quat = rot.as_quat()
        # Pose Orientation (Quaternion)
        output_pose.pose.orientation.x = rot_quat[0]
        output_pose.pose.orientation.y = rot_quat[1]
        output_pose.pose.orientation.z = rot_quat[2]
        output_pose.pose.orientation.w = rot_quat[3]
        #add header
        output_pose.header = self.make_header(node)
        return output_pose
    
    def make_header(self, node:Node):
        hdr = Header()
        hdr.frame_id = node.frame_id
        hdr.stamp = node.get_clock().now().to_msg()
        return hdr