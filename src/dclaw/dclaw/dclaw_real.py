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

from dynamixel_sdk import *
from dclaw_interfaces.srv import GetPosition, SetPositions
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

positions_deg = [0, 0, 0, 0, 0, 0, 0, 0, 0] # 10 11 12 20 21 22 30 31 32
SIM_SCALE = 4
MOTOR_SCALE = 4096

class MinimalService(Node) :
    global packetHandler, portHandler, DXL_IDs
    def __init__(self):
        super().__init__('dclaw_read_py_node')

        # self.srv = self.create_service(GetPosition, 'get_position', self.get_present_pos)
        self.client = self.create_client(SetPositions, "set_positions")
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')
        print('server is ok')
        self.req = SetPositions.Request()

    def send_request(self, idx, deg):
        
        # for idx, id in enumerate(DXL_IDs) :
            
        self.req.id = idx
        self.req.position = positions_deg[idx]
        self.future = self.client.call_async(self.req)
            
        rclpy.spin_until_future_complete(self, self.future)

        return self.future.result()
    
def ros():
    minimal_service = MinimalService()
    while True :
        for idx, deg in enumerate(positions_deg) :
            response = minimal_service.send_request(idx, deg)
            # minimal_service.get_logger().info(f'simulator setting cur position to {idx}, {response.position}')
        # minimal_service.destroy_node()
    rclpy.shutdown()

def set_curr_position():
    global positions_deg, packetHandler, portHandler, DXL_IDs
    while True :
        for idx, id in enumerate(DXL_IDs) :
            dxl_comm_result, dxl_error = packetHandler.write1ByteTxRx(portHandler, id, ADDR_TORQUE_ENABLE, TORQUE_DISABLE)
            dxl_present_position, dxl_comm_result, dxl_error = packetHandler.read4ByteTxRx(portHandler, id, ADDR_PRESENT_POSITION)

            if id in [10,20,30] :
                
                # 0 -> 1000
                # print(f'actuator id : {id}')
                # print(f'dxl_present_position : {id}, {dxl_present_position}')
                
                theta = (float(SIM_SCALE/MOTOR_SCALE)*dxl_present_position)-float(SIM_SCALE/MOTOR_SCALE)*1000.0
                print(f'theta : {id}, {theta}')
                positions_deg[idx] = theta
            else : #  11, 21, 31
                # print(f'dxl_present_position : {id}, {dxl_present_position}')
                theta = (float(SIM_SCALE/MOTOR_SCALE)*dxl_present_position)-float(SIM_SCALE/MOTOR_SCALE)*2000.0
                print(f'theta : {id}, {theta}')
                positions_deg[idx] = theta
        # print(f'all{positions_deg}')
def dclaw_read_py_node():
    rclpy.init(args=None)
    t1 = threading.Thread(target=ros)
    t2 = threading.Thread(target=set_curr_position)
    t1.start()
    t2.start()

def main():
    # Open port
    try:
       portHandler.openPort()
       print("Succeeded to open the port")
    except:
        print("Failed to open the port")
        print("Press any key to terminate...")
        getch()
        quit()

    # Set port baudrate
    try:
        portHandler.setBaudRate(BAUDRATE)
        print("Succeeded to change the baudrate")
    except:
        print("Failed to change the baudrate")
        print("Press any key to terminate...")
        getch()
        quit()

    # Enable Dynamixel Torque
    dxl_comm_result, dxl_error = packetHandler.write1ByteTxRx(portHandler, DXL_ID, ADDR_TORQUE_ENABLE, TORQUE_ENABLE)
    if dxl_comm_result != COMM_SUCCESS:
        print("%s" % packetHandler.getTxRxResult(dxl_comm_result))
        print("Press any key to terminate...")
        getch()
        quit()
    elif dxl_error != 0:
        print("%s" % packetHandler.getRxPacketError(dxl_error))
        print("Press any key to terminate...")
        getch()
        quit()
    else:
        print("DYNAMIXEL has been successfully connected")

    print("Ready to get & set Position.")

    dclaw_read_py_node()


if __name__ == '__main__':
    main()
