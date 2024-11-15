from setuptools import find_packages
from setuptools import setup

setup(
    name='speech_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('speech_interfaces', 'speech_interfaces.*')),
)
