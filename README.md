# YF-fangzhen
针对汽车外饰喷涂工艺，研究机器人离线编程技术的汽车部件数学模型信息提取技术、喷涂轨迹自动规划技术、机器人运动仿 真技术，实现机器人程序文件的自动识别和读取。基于NXOpen二次开发框架开发喷涂机器人离线自动编程软件

工程全部文件：
robot.h：定义机器人抽象类Robot
irb5500.h：定义ABB IRB5500机器人类IRB5500，继承于Robot类
irb5400.h：定义ABB IRB5400机器人类IRB5400，继承于IRB5500类
p250ib.h：定义FANUC P250IB机器人类P250IB，继承于Robot类
p250ia.h：继承P250IA机器人（DH参数、限位参数、逆解偏移距离）

point.h：定义点（轨迹点、密集点、点云）类Point_p
station.h：定义工作站类Station

process_data.h：定义对轨迹点坐标系转换、插值、采样等函数
trajectory_planning.h：定义运动节拍计算相关函数
dynamic_simulation.h：定义带外部轴运动节拍计算相关函数

utility.h：定义了一些实用函数
fangzhen.h：主模块，定义UI控件，各控件功能函数，全部定义在fangzhen类
