import os
import rclpy
import threading
import mujoco_py
import math
import os
from dynamixel_sdk import *
from dclaw_interfaces.srv import GetPosition,SetPositions
from dclaw_interfaces.msg import SetPosition
from rclpy.node import Node

# 10[0],20[3],30[6] : 0-> 1000, 11,12,21,22,31,320 -> 2000
positions_deg = [0, 0, 0, 0, 0, 0, 0, 0, 0] # 10 11 12 20 21 22 30 31 32


class MinimalService(Node) :
    global packetHandler, portHandler, DXL_IDs, positions_deg
    def __init__(self):
        super().__init__('dclaw_sim_py_node')
        self.srv = self.create_service(SetPositions, 'set_positions', self.get_present_pos)

    def get_present_pos(self, req, res):
        idx = int(req.id)
        pos_deg = req.position
        if idx in [0,1,2] :
            idx = idx + 3
        elif idx in [3,4,5] :
            idx = idx - 3
        positions_deg[idx] = pos_deg
        print("Present Position of idx %f = %f" % (req.id, req.position))
        
        # self.get_logger().info('Incoming request\na: %d b: %d' % (request.a, request.b))
        res.position = pos_deg
        return res
            
def ros():
    minimal_service = MinimalService()
    rclpy.spin(minimal_service)

def simulate():
    global positions_deg
    print("play simulate")
    mj_path = mujoco_py.utils.discover_mujoco()
    mj_path = mj_path+'/model/robel_sim/dclaw/dclaw3xh.xml'
    xml_path = os.path.join(mj_path)
    # '/home/songwoo/.mujoco/mujoco210/model/robel_sim/dclaw/dclaw3xh.xml'   => install mujoco210
    model = mujoco_py.load_model_from_path(xml_path)

    sim = mujoco_py.MjSim(model)
    viewer = mujoco_py.MjViewer(sim)
    t=0
    while True:  
        for idx, position_deg in enumerate(positions_deg) :
            print(f'{idx}, {position_deg}')
            sim.data.ctrl[idx] = position_deg
            # sim.data.ctrl[1] = 90   # actuator ID 11
            # sim.data.ctrl[2] = 90   # actuator ID 12
            # sim.data.ctrl[3] = 180 # actuator ID 20  (actuactor degree which is abs(45) bounded by .mjcf)
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
