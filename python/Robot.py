import numpy as np
from numpy import sin,cos,arctan2,pi

class Robot():

    def __init__(self):
        self.dh=[]
        self.offset=np.eye(4)

    # MDH建模法，相邻两连杆变换矩阵
    def T(self,i):
        theta = self.dh[i][0]
        d = self.dh[i][1]
        a = self.dh[i][2]
        alpha = self.dh[i][3]
        m=np.eye(4)
        m[0, 0] = cos(theta)
        m[0, 1] = -sin(theta)
        m[0, 2] = 0
        m[0, 3] = a
        m[1, 0] = sin(theta) * cos(alpha)
        m[1, 1] = cos(theta) * cos(alpha)
        m[1, 2] = -sin(alpha)
        m[1, 3] = -sin(alpha) * d
        m[2, 0] = sin(theta) * sin(alpha)
        m[2, 1] = cos(theta) * sin(alpha)
        m[2, 2] = cos(alpha)
        m[2, 3] = cos(alpha) * d
        return m

    # 计算正解
    def FK(self,thetas):
        if len(self.dh)==7:
            for i in range(5):
                self.dh[i][0] = thetas[i]
            self.dh[5][0] = -thetas[4]
            self.dh[6][0] = thetas[5]
            Td=np.eye(4)
            for i in range(7):
                Td = np.dot(Td,self.T(i))
            return Td

    def normal_range(self,theta):
        if -pi<=theta<=pi: return theta
        if theta<-pi:
            while True:
                theta+=2*pi
                if -pi <= theta <= pi: return theta
        if theta>pi:
            while True:
                theta -= 2 * pi
                if -pi <= theta <= pi: return theta

    def cal_t1(self,Td):
        return []

    def cal_t2(self,Td,t1):
        return []

    def cal_t3(self,Td,t1,t2):
        return []

    def cal_t5(self,Td,t1,t2,t3):
        return []

    def cal_t4(self,Td,t1,t2,t3,t5):
        return []

    def cal_t6(self,Td,t1,t2,t3,t5):
        return []

    def c_to_p(self,thetas):
        return []

    def p_to_c(self,thetas):
        return []

    # 简化机构求逆解
    def IK(self,Td):
        solutions=[]
        t1s=self.cal_t1(Td)
        for t1 in t1s:
            t2s=self.cal_t2(Td,t1)
            for t2 in t2s:
                t3s=self.cal_t3(Td,t1,t2)
                for t3 in t3s:
                    t5s=self.cal_t5(Td,t1,t2,t3)
                    for t5 in t5s:
                        t4s=self.cal_t4(Td,t1,t2,t3,t5)
                        for t4 in t4s:
                            t6s=self.cal_t6(Td,t1,t2,t3,t5)
                            for t6 in t6s:
                                s=[t1,t2,t3,t4,t5,t6]
                                solutions.append(s)
        return solutions

    # 计算末端位置误差矩阵
    def cal_perr(self,Td,Ta):
        return Td[:3,3]-Ta[:3,3]

    # 迭代过程中选择最优解（与thetas最接近的那组解）
    def choice_best_solution(self,solutions,thetas):
        best_solution=[]
        min_error=np.inf
        for s in solutions:
            error=0
            for i in range(6):
                error+=(s[i]-thetas[i])**2
            if error<min_error:
                best_solution=s
                min_error=error
        return best_solution

    # 末端补偿迭代法
    # acc：末端位置误差精度，单位: mm
    def end_method_iter(self,Td,thetas,acc=0.01):
        offset_i,offset1=np.eye(4),np.eye(4)
        Ta=self.FK(thetas)
        perr=self.cal_perr(Td,Ta)
        error=np.sqrt(sum([i**2 for i in perr]))
        while error>acc:
            offset_i[0,3]=perr[0]
            offset_i[1,3]=perr[1]
            offset_i[2,3]=perr[2]
            offset1=np.dot(offset_i,offset1)
            solutions = self.IK(np.dot(offset1,np.dot(Td, self.offset)))
            thetas=self.choice_best_solution(solutions, thetas)
            Ta = self.FK(thetas)
            perr = self.cal_perr(Td, Ta)
            error = np.sqrt(sum([i ** 2 for i in perr]))
        return thetas

    # 选择最优解，即与上一逆解值误差最小（5轴误差加倍）
    # 注意：误差值计算要在先将角度值转化为控制器角度
    def select_solution(self,solutions,last_thetas):
        factor=[1,1,1,1,2,1]
        #self.p_to_c(last_thetas)
        best_solution=None
        min_error=np.inf
        for s in solutions:
            # self.p_to_c(s)
            # if abs(s[3]-last_thetas[3])>100*pi/180 or abs(s[5]-last_thetas[5])>100*pi/180:
            #     continue
            error=0
            for i in range(6):
                error+=factor[i]*abs(s[i]-last_thetas[i])
            if error<min_error:
                best_solution=s
                min_error=error
            # self.c_to_p(s)
        # self.c_to_p(last_thetas)
        if best_solution is None:
            print("F")
        # dj=[]
        # for i in range(6):
        #     dj.append(abs(last_thetas[i]-best_solution[i])*180/pi)
        # if dj[3]>150 or dj[5]>150:
        #     factor = [1, 1, 1, 2, 1, 2]
        #     self.p_to_c(last_thetas)
        #     best_solution = None
        #     min_error = np.inf
        #     for s in solutions:
        #         self.p_to_c(s)
        #         error = 0
        #         for i in range(6):
        #             error += factor[i] * abs(s[i] - last_thetas[i])
        #         if error < min_error:
        #             best_solution = s
        #             min_error = error
        #         self.c_to_p(s)
        #     self.c_to_p(last_thetas)
        return best_solution

    # 求出某一点的准确逆解
    def inv_solution(self,Td,last_thetas):
        solutions=self.IK(np.dot(Td,self.offset))
        if solutions==[]:
            solutions.append(last_thetas.copy())

        # for s in solutions:
        #     s=s.copy()
        #     self.p_to_c(s)
        #     o=" ".join([str(j*180/pi) for j in s])
        #     print('\033[31m %s \033[0m'%o)
        # print('-'*20)

        best_solution=self.select_solution(solutions,last_thetas)
        final_solution=self.end_method_iter(Td,best_solution)
        return final_solution

    # 求出行走一段轨迹所有轨迹点的逆解
    def path(self,points_data,ini_thetas,soft=True):
        last_thetas=ini_thetas
        res=[]
        for i,Td in enumerate(points_data):
            # print(i+1)
            try:
                s=self.inv_solution(Td,last_thetas)
            except:
                if soft:
                    s=last_thetas.copy()
                else:
                    break
            # self.p_to_c(s)
            # for i in s:
            #     print(i*180/pi,end=" ")
            # print()
            res.append(s.copy())
            # self.c_to_p(s)
            # last_thetas=s.copy()

        res=np.array(res)
        return res

    # 插值点逆解求解及选取
    def interpolation_path(self,data,ps,index):
        ini_thetas=ps[0]
        last_thetas = ini_thetas
        res=[]
        c=1
        j=index[c]
        for i,Td in enumerate(data):
            if i>j:
                j=index[c+1]
                c+=1
            solutions=self.IK(np.dot(Td,self.offset))
            if solutions == []:
                res.append(last_thetas.copy())
            else:
                best_solution=None
                error=np.inf
                for s in solutions:
                    s1=[t*180/pi for t in s]
                    e=sum([abs(s1[k]-ps[c-1][k]) for k in range(6)])+sum([abs(s1[k]-ps[c][k]) for k in range(6)])
                    if e<error:
                        error=e
                        best_solution=s
                final_solution = self.end_method_iter(Td, best_solution)
                res.append(final_solution.copy())
            last_thetas = res[-1].copy()
        res = np.array(res)
        return res

