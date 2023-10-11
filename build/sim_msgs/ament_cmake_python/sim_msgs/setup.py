from setuptools import find_packages
from setuptools import setup

setup(
    name='sim_msgs',
    version='0.0.1',
    packages=find_packages(
        include=('sim_msgs', 'sim_msgs.*')),
)
