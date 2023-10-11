import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument , ExecuteProcess
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node
from launch_ros.descriptions import ParameterValue
from launch.substitutions import TextSubstitution , LaunchConfiguration
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():

    desc_pkg_share = get_package_share_directory('sim_alpha_description')
    urdf_file_name = 'urdf/alpha_5_example.urdf.xacro'
    urdf_path = os.path.join(desc_pkg_share, urdf_file_name)

    share_directory = get_package_share_directory('sim_bringup')
    rviz_config_file = os.path.join(share_directory, 'rviz/rviz.rviz')

    rviz_delay = 2

    # Add delay to the RVIZ node
    delayed_rviz_node = ExecuteProcess(
        cmd=['bash', '-c', f'sleep {rviz_delay} && ros2 run rviz2 rviz2 -d {rviz_config_file}'],
        name='delayed_rviz_node'
    )

    # Define LaunchDescription variable
    ld = LaunchDescription([
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': ParameterValue(
            Command(['xacro ', str(urdf_path)]), value_type=str)}]),

        Node(
            package='sim_model',
            executable='real2Sim_dynamics',
            parameters=[{
                "frame_id": "base_link",
                "tool_frame_id": "alpha_standard_jaws_base_link",
                "joints":[0x01, 0x02, 0x03, 0x04, 0x05],
                "joint_names":['alpha_axis_a', 'alpha_axis_b', 'alpha_axis_c', 'alpha_axis_d', 'alpha_axis_e'],
            }]
        ),

        Node(
            package='sim_model',
            executable='real2Sim_kinematics',
            parameters=[{
                "frame_id": "base_link",
                "tool_frame_id": "alpha_standard_jaws_base_link"
            }]
        )
    ])
    ld.add_action(delayed_rviz_node)
    return ld