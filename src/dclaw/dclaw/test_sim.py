#!/usr/bin/env python

#*******************************************************************************
# Copyright 2021 ROBOTIS CO., LTD.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#*******************************************************************************

#*******************************************************************************
# This example is written for DYNAMIXEL X(excluding XL-320) and MX(2.0) series with U2D2.
# For other series, please refer to the product eManual and modify the Control Table addresses and other definitions.
# To test this example, please follow the commands below.
#
# Open terminal #1
# $ roscore
#
# Open terminal #2
# $ rosrun dynamixel_sdk_examples read_write_node.py
#
# Open terminal #3 (run one of below commands at a time)
# $ rostopic pub -1 /set_position dynamixel_sdk_examples/SetPosition "{id: 1, position: 0}"
# $ rostopic pub -1 /set_position dynamixel_sdk_examples/SetPosition "{id: 1, position: 1000}"
# $ rosservice call /get_position "id: 1"
#
# Author: Will Son
#******************************************************************************/




import os
import rclpy
import threading
import mujoco_py
import math
import os
from dynamixel_sdk import *
from dclaw_interfaces.srv import GetPosition
from dclaw_interfaces.msg import SetPosition
from rclpy.node import Node

if os.name == 'nt':
    import msvcrt
    def getch():
        return msvcrt.getch().decode()
else:
    import sys, tty, termios
    fd = sys.stdin.fileno()
    old_settings = termios.tcgetattr(fd)
    def getch():
        try:
            tty.setraw(sys.stdin.fileno())
            ch = sys.stdin.read(1)
        finally:
            termios.tcsetattr(fd, termios.TCSADRAIN, old_settings)
        return ch

# Control table address
ADDR_TORQUE_ENABLE      = 64               # Control table address is different in Dynamixel model
ADDR_GOAL_POSITION      = 116
ADDR_PRESENT_POSITION   = 132

# Protocol version
PROTOCOL_VERSION            = 2.0               # See which protocol version is used in the Dynamixel

# Default setting
DXL_ID                      = 10                 # Dynamixel ID : 1
DXL_IDs                      = [10,11,12,20,21,22,30,31,32]                 # Dynamixel ID : 1
BAUDRATE                    = 57600             # Dynamixel default baudrate : 57600
DEVICENAME                  = '/dev/ttyUSB0'    # Check which port is being used on your controller
                                                # ex) Windows: "COM1"   Linux: "/dev/ttyUSB0" Mac: "/dev/tty.usbserial-*"

TORQUE_ENABLE               = 1                 # Value for enabling the torque
TORQUE_DISABLE              = 0                 # Value for disabling the torque
DXL_MINIMUM_POSITION_VALUE  = 0               # Dynamixel will rotate between this value
DXL_MAXIMUM_POSITION_VALUE  = 1000            # and this value (note that the Dynamixel would not move when the position value is out of movable range. Check e-manual about the range of the Dynamixel you use.)
DXL_MOVING_STATUS_THRESHOLD = 20                # Dynamixel moving status threshold

portHandler = PortHandler(DEVICENAME)
packetHandler = PacketHandler(PROTOCOL_VERSION)

class MinimalService(Node) :
    global packetHandler, portHandler, DXL_IDs
    def __init__(self):
        super().__init__('read_write_py_node')
        print("hello")
        self.subscription = self.create_subscription(
            SetPosition,
            'set_position',
            self.set_goal_pos_callback,
            10)
        self.subscription

        self.srv = self.create_service(GetPosition, 'get_position', self.get_present_pos)


    def set_goal_pos_callback(self, data):
        print("Set Goal Position of ID %s = %s \n" % (data.id, data.position))
        if data.id == 0 :
            for id in DXL_IDs :
                packetHandler.write4ByteTxRx(portHandler, id, ADDR_TORQUE_ENABLE, TORQUE_ENABLE)
                if id in [10,20,30] :
                    print(id)
                    packetHandler.write4ByteTxRx(portHandler, id, ADDR_GOAL_POSITION, 1000)
                else :
                    packetHandler.write4ByteTxRx(portHandler, id, ADDR_GOAL_POSITION, 2000)
        else :      
            dxl_comm_result, dxl_error = packetHandler.write1ByteTxRx(portHandler, data.id, ADDR_TORQUE_ENABLE, TORQUE_ENABLE)    
            dxl_comm_result, dxl_error = packetHandler.write4ByteTxRx(portHandler, data.id, ADDR_GOAL_POSITION, data.position)

    def get_present_pos(self, req, res):
        dxl_present_position, dxl_comm_result, dxl_error = packetHandler.read4ByteTxRx(portHandler, req.id, ADDR_PRESENT_POSITION)
        print("Present Position of ID %s = %s" % (req.id, dxl_present_position))

        res.position = dxl_present_position 
        return res
            
def ros():
    minimal_service = MinimalService()
    rclpy.spin(minimal_service)

def simulate():
    mj_path = mujoco_py.utils.discover_mujoco()
    mj_path = mj_path+'/model/robel_sim/dclaw/dclaw3xh.xml'
    xml_path = os.path.join(mj_path)
    # '/home/songwoo/.mujoco/mujoco210/model/robel_sim/dclaw/dclaw3xh.xml'   => install mujoco210
    model = mujoco_py.load_model_from_path(xml_path)

    print(xml_path)
    sim = mujoco_py.MjSim(model)
    viewer = mujoco_py.MjViewer(sim)
    t=0
    while True:  
        # sim.data.ctrl[0] = math.cos(t / 10.) * 1   # actuator ID 10 
        sim.data.ctrl[1] = 90   # actuator ID 11
        sim.data.ctrl[2] = 90   # actuator ID 12
        sim.data.ctrl[3] = 180 # actuator ID 20  (actuactor degree which is abs(45) bounded by .mjcf)
        # sim.data.ctrl[4] = math.cos(t / 10.) * 0.1 # actuator ID 21
        # sim.data.ctrl[5] = math.sin(t / 10.) * 0.1 # actuator ID 22
        # sim.data.ctrl[6] = math.cos(t / 10.) * 0.1 # actuator ID 30
        # sim.data.ctrl[7] = math.sin(t / 10.) * 0.1 # actuator ID 31
        # sim.data.ctrl[8] = math.sin(t / 10.) * 0.1 # actuator ID 32
        t += 1
        sim.step(t)
        viewer.render()
        if t > 100 and os.getenv('TESTING') is not None:
            break

def read_write_py_node():
    
    rclpy.init(args=None)
    t1 = threading.Thread(target=ros)
    t2 = threading.Thread(target=simulate)
    t1.start()
    t2.start()



def main():
    read_write_py_node()


if __name__ == '__main__':
    main()
