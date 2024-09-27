from setuptools import find_packages, setup

package_name = 'nao_qi_ros2_package'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='fai',
    maintainer_email='f.hernandezt@uniandes.edu.co',
    description='ROS2 package to communicate with NAO robot using qi SDK and Python 3',
    license='',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'nao_talker = nao_qi_ros2_package.nao_talker:main',
        ],
    },
)
