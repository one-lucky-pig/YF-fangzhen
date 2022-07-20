from Robot import Robot
import numpy as np
from numpy import pi, sin, cos, arctan2, sqrt


class IRB5500(Robot):

    def __init__(self):
        super().__init__()
        self.dh = [[0, 340, 0, 0], [-pi / 2, 0, 0, -pi / 2], [0, 0, 1300, 0], [-pi / 2, 1507.5, 0, -pi / 2],
                   [0, 79.35, 0, 35 * pi / 180],
                   [0, 79.35, 0, -70 * pi / 180], [-pi / 2, 82.501, 0, 35 * pi / 180]]

        # self.dh = [[0, 340, 0, 0], [-pi / 2, 0, 0, -pi / 2], [0, 0, 1300, 0], [-pi / 2, 1507.5, 0, -pi / 2],
        #            [0, 0, 0, 35 * pi / 180],
        #            [0, 0, 0, -70 * pi / 180], [-pi / 2,0, 0, 35 * pi / 180]]

        self.offset[2, 3] = -212.5

    def cal_t1(self, Td):
        px = Td[0, 3]
        py = Td[1, 3]
        t1 = arctan2(py, px)
        t11 = arctan2(-py, -px)
        res = [t1, t11]
        return res

    def cal_t2(self, Td, t1):
        px = Td[0, 3]
        py = Td[1, 3]
        pz = Td[2, 3]
        a1 = self.dh[1][2]
        d1 = self.dh[0][1]
        T1 = px / cos(t1) - a1
        T3 = pz - d1
        d4 = self.dh[3][1]
        a2 = self.dh[2][2]
        a3 = self.dh[3][2]
        M = (d4 * d4 + a3 * a3 - T1 * T1 - T3 * T3 - a2 * a2) / (2 * a2)
        d = T1 * T1 + T3 * T3 - M * M
        res = []
        if d >= 0:
            t2 = arctan2(T3, -T1) - arctan2(sqrt(d), M)
            t21 = arctan2(T3, -T1) + arctan2(sqrt(d), M)
            res.append(self.normal_range(t2))
            res.append(self.normal_range(t21))
            # res.append(t2 - 2 * pi)
            # res.append(t21 - 2 * pi)
        return res

    def cal_t3(self, Td, t1, t2):
        px = Td[0, 3]
        py = Td[1, 3]
        pz = Td[2, 3]
        a1 = self.dh[1][2]
        d1 = self.dh[0][1]
        d4 = self.dh[3][1]
        a2 = self.dh[2][2]
        a3 = self.dh[3][2]
        T1 = px / cos(t1) - a1
        T3 = pz - d1
        A = T1 - a2 * cos(t2)
        B = -T3 - a2 * sin(t2)
        res = []
        t3 = arctan2(a3 * B - d4 * A, a3 * A + d4 * B) - t2
        res.append(self.normal_range(t3))
        return res

    def cal_t5(self, Td, t1, t2, t3):
        beta = 35 * pi / 180
        ax = Td[0, 2]
        ay = Td[1, 2]
        az = Td[2, 2]
        A = 2 * pow(sin(beta), 4)
        B = 4 * sin(beta) * sin(beta) - 4 * pow(sin(beta), 4)
        C = ax * sin(t2 + t3) * cos(t1) + ay * sin(t2 + t3) * sin(t1) + az * cos(
            t2 + t3) + 2 * pow(sin(beta), 4) - 4 * sin(beta) * sin(beta) + 1
        delta = B * B - 4 * A * C
        res = []
        if delta >= 0:
            D1 = (-B + sqrt(delta)) / (2 * A)
            D2 = (-B - sqrt(delta)) / (2 * A)
            if -1 <= D1 <= 1:
                res.append(arctan2(sqrt(1 - D1 * D1), D1))
                res.append(arctan2(-sqrt(1 - D1 * D1), D1))
            if -1 <= D2 <= 1:
                res.append(arctan2(sqrt(1 - D2 * D2), D2))
                res.append(arctan2(-sqrt(1 - D2 * D2), D2))
        return res

    def cal_t4(self, Td, t1, t2, t3, t5):
        beta = 35 * pi / 180
        ax = Td[0, 2]
        ay = Td[1, 2]
        az = Td[2, 2]
        cb2 = cos(beta) * cos(beta)
        a = -2 * cos(beta) * sin(beta) * (cos(t5) - 1) * (cos(t5) + cb2 - cb2 * cos(t5))
        b = -2 * sin(beta) * sin(t5) * (cos(t5) + cb2 - cb2 * cos(t5))
        c = ay * cos(t1) - ax * sin(t1)
        d = ax * cos(t1) * cos(t2 + t3) + ay * sin(t1) * cos(t2 + t3) - az * sin(t2 + t3)
        t4 = arctan2(a * d - b * c, a * c + b * d)
        res = []
        res.append(t4 + 2 * pi)
        #res.append(t4 + pi)
        res.append(t4)
        #res.append(t4 - pi)
        res.append(t4 - 2 * pi)
        return res

    def cal_t6(self, Td, t1, t2, t3, t5):
        beta = 35 * pi / 180
        nx = Td[0, 0]
        ny = Td[1, 0]
        nz = Td[2, 0]
        ox = Td[0, 1]
        oy = Td[1, 1]
        oz = Td[2, 1]
        cb2 = cos(beta) * cos(beta)
        a = -2 * cos(beta) * sin(beta) * (cos(t5) - 1) * (cos(t5) + cb2 - cb2 * cos(t5))
        b = 2 * sin(beta) * sin(t5) * (cos(t5) + cb2 - cb2 * cos(t5))
        c = -ox * cos(t1) * sin(t2 + t3) - oy * sin(t1) * sin(t2 + t3) - oz * cos(t2 + t3)
        d = -nx * cos(t1) * sin(t2 + t3) - ny * sin(t1) * sin(t2 + t3) - nz * cos(t2 + t3)
        t6 = arctan2(a * d - b * c, a * c + b * d)
        res = []
        res.append(t6 + 2 * pi)
        #res.append(t6 + pi)
        res.append(t6)
        #res.append(t6 - pi)
        res.append(t6 - 2 * pi)
        return res

    def c_to_p(self, thetas):
        thetas[1] = thetas[1] - pi / 2
        thetas[3] = thetas[3] - pi / 2
        thetas[5] = thetas[5] - pi / 2

    def p_to_c(self, thetas):
        thetas[1] = thetas[1] + pi / 2
        thetas[3] = thetas[3] + pi / 2
        thetas[5] = thetas[5] + pi / 2

# if __name__ == '__main__':
#     robot=IRB5500()
#     thetas=np.array([-9.75,-23.51,43.54,8.92,-13.14,-81.58])*pi/180
#     thetas = np.array([0, 0, 55, -8.42, 0, -81.58]) * pi / 180
#     robot.c_to_p(thetas)
#     # T=np.array([[0.0989050558040732,-0.696639309209164,0.710674732916103,1681.65417687322],[-0.773316395688671,0.395522770146976,0.495489998075703,-2106.66221286982],
#     #             [-0.626172917072602,-0.598624940525032,-0.499591670251449,1059.59716586230],[0,0,0,1]])
#     # T=np.array([[-0.0224,-0.3307,0.9435,1085.18],[-0.9310,0.3509,0.1009,-147.53],[-0.3644,-0.8761,-0.3158,946.63],[0,0,0,1]])
#     # s=robot.inv_solution(T,thetas)
#     # robot.p_to_c(s)
#     # for i in s:
#     #     print(i*180/pi,end=" ")
#     # print()
#     T=robot.FK(thetas)
#     print(T)
