from setuptools import setup

package_name = 'tutorial_python'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='moajouz',
    maintainer_email='moajouz@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            "node = tutorial_python.node:main",
            "publisher=tutorial_python.publisher:main",
            "subscriber=tutorial_python.subscriber:main"
        ],
    },
)
