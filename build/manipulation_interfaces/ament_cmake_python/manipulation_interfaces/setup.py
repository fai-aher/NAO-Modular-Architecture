from setuptools import find_packages
from setuptools import setup

setup(
    name='manipulation_interfaces',
    version='0.0.1',
    packages=find_packages(
        include=('manipulation_interfaces', 'manipulation_interfaces.*')),
)
