from setuptools import setup
from setuptools import find_packages

package_name = 'sim_model'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='mr-robot',
    maintainer_email='emorg31@lsu.edu',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'real2Sim_kinematics = sim_model.real2Sim_kinematics:main',
            'real2Sim_dynamics = sim_model.real2Sim_dynamics:main'
        ],
    },
)
