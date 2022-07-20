from tools import *
import numpy as np
from IRB5500 import IRB5500

Tt=np.eye(4)
Tt[:3,:3]=q_to_r([0,-0.99994,0.01052,-0.00098])
Tt[0,3]=690.91
Tt[1,3]=-1884.99
Tt[2,3]=84.1

Te=np.eye(4)
Te[:3,:3]=q_to_r([0.00532,-0.86646,0.00907,0.49913])
Te[0,3]=1008.46
Te[1,3]=-1891.78
Te[2,3]=728.4

thetas=np.array([26.4,41.7,50.2,51.4,-54.5,-114.8])*np.pi/180

robot=IRB5500()
robot.c_to_p(thetas)
Te0=robot.FK(thetas)
print(Te0)

