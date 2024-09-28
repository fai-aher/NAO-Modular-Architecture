from setuptools import find_packages, setup

package_name = 'integration'

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
    maintainer='fai',
    maintainer_email='fai@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'integration_interface = integration.integration_interface:main',
            'task_one = integration.tasks.task_one:main',
            'demo_task = integration.tasks.demo_task:main',
        ],
    },
)
