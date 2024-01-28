import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument , ExecuteProcess
from launch.substitutions import LaunchConfiguration, Command
from launch_ros.actions import Node
from launch_ros.descriptions import ParameterValue
from launch.substitutions import LaunchConfiguration
from launch import LaunchDescription
from launch.conditions import IfCondition

def generate_launch_description():

    desc_pkg_share = get_package_share_directory('sim_alpha_description')
    urdf_file_name = 'urdf/alpha_5_example.urdf.xacro'
    urdf_path = os.path.join(desc_pkg_share, urdf_file_name)

    share_directory = get_package_share_directory('sim_bringup')
    rviz_config_file = os.path.join(share_directory, 'rviz/rviz.rviz')

    rviz_delay = 2

    # Declare a launch argument for using RViz
    use_rviz_arg = DeclareLaunchArgument(
        'use_rviz',
        default_value='true',
        description='Flag to use RViz')

    # Get the value of the 'use_rviz' launch argument
    use_rviz = LaunchConfiguration('use_rviz')

    # Define the RViz node with a delay
    delayed_rviz_node = ExecuteProcess(
        condition=IfCondition(use_rviz),
        cmd=['bash', '-c', f'sleep {rviz_delay} && ros2 run rviz2 rviz2 -d {rviz_config_file}'],
        name='delayed_rviz_node'
    )


    # Define LaunchDescription variable
    ld = LaunchDescription([
        use_rviz_arg,
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
                "frequency": 10,
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
        ),
        delayed_rviz_node
    ])
    return ld