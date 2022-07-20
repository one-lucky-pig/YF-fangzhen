import numpy as np
from numpy import pi,sin,cos

# 四元素转旋转矩阵
def q_to_r(q):
    w, x, y, z = q
    r = np.eye(3)
    r[0, 0] = 1 - 2 * y ** 2 - 2 * z ** 2
    r[0, 1] = 2 * x * y - 2 * w * z
    r[0, 2] = 2 * x * z + 2 * w * y
    r[1, 0] = 2 * x * y + 2 * w * z
    r[1, 1] = 1 - 2 * x ** 2 - 2 * z ** 2
    r[1, 2] = 2 * y * z - 2 * w * x
    r[2, 0] = 2 * x * z - 2 * w * y
    r[2, 1] = 2 * y * z + 2 * w * x
    r[2, 2] = 1 - 2 * x ** 2 - 2 * y ** 2
    return r

# 齐次变换矩阵求逆
def inv_T(T):
    R = T[:3, :3].transpose()
    P = np.dot(-R, T[:3, 3])
    res = np.eye(4)
    res[:3, 3] = P
    res[:3, :3] = R
    return res

def rotx(t):
    m=np.eye(3)
    m[1, 1] = cos(t)
    m[2, 1] = sin(t)
    m[1, 2] = -sin(t)
    m[2, 2] = cos(t)
    return m


def roty(t):
    m = np.eye(3)
    m[0, 0] = cos(t)
    m[2, 0] = -sin(t)
    m[0, 2] = sin(t)
    m[2, 2] = cos(t)
    return m


def rotz(t):
    m = np.eye(3)
    m[0, 0] = cos(t)
    m[1, 0] = sin(t)
    m[0, 1] = -sin(t)
    m[1, 1] = cos(t)
    return m


def euler_to_T(x,y,z):
    return np.dot(np.dot(rotz(z),roty(y)),rotx(x))