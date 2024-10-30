from setuptools import find_packages, setup

package_name = 'rest_api'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools', 'flask', 'flask_cors'],
    zip_safe=True,
    maintainer='fai',
    maintainer_email='f.hernandezt@uniandes.edu.co',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'rest_api_node = rest_api.rest_api_node:main'
        ],
    },
)
