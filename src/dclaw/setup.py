from setuptools import setup

package_name = 'dclaw'

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
    maintainer='songwoo',
    maintainer_email='thddn191@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'test = dclaw.test:main',
            'test_thread = dclaw.test_thread:main',
            'test_sim = dclaw.test_sim:main',
            'dclaw_sim = dclaw.dclaw_sim:main',
            'dclaw_real = dclaw.dclaw_real:main',
            'dclaw_task_ball_up = dclaw.dclaw_task_ball_up:main'
        ],
    },
)
