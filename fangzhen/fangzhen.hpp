#ifndef fangzhen_H_INCLUDED
#define fangzhen_H_INCLUDED

#include <NXOpen/Session.hxx>
#include <NXOpen/UI.hxx>
#include <NXOpen/NXMessageBox.hxx>
#include <NXOpen/Callback.hxx>
#include <NXOpen/NXException.hxx>
#include <NXOpen/BlockStyler_UIBlock.hxx>
#include <NXOpen/BlockStyler_BlockDialog.hxx>
#include <NXOpen/BlockStyler_PropertyList.hxx>
#include <NXOpen/BlockStyler_TabControl.hxx>
#include <NXOpen/BlockStyler_Group.hxx>
#include <NXOpen/BlockStyler_SpecifyPoint.hxx>
#include <NXOpen/BlockStyler_DoubleBlock.hxx>
#include <NXOpen/BlockStyler_Enumeration.hxx>
#include <NXOpen/BlockStyler_IntegerBlock.hxx>
#include <NXOpen/BlockStyler_DoubleTable.hxx>
#include <NXOpen/BlockStyler_Button.hxx>
#include <NXOpen/BlockStyler_Toggle.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/UI.hxx>
#include <NXOpen/NXMessageBox.hxx>
#include <NXOpen/Callback.hxx>
#include <NXOpen/NXException.hxx>
#include <NXOpen/BlockStyler_UIBlock.hxx>
#include <NXOpen/BlockStyler_BlockDialog.hxx>
#include <NXOpen/BlockStyler_PropertyList.hxx>
#include <NXOpen/BlockStyler_TabControl.hxx>
#include <NXOpen/BlockStyler_Group.hxx>
#include <NXOpen/BlockStyler_SpecifyPoint.hxx>
#include <NXOpen/BlockStyler_DoubleBlock.hxx>
#include <NXOpen/BlockStyler_Enumeration.hxx>
#include <NXOpen/BlockStyler_IntegerBlock.hxx>
#include <NXOpen/BlockStyler_Toggle.hxx>
#include <NXOpen/BlockStyler_DoubleTable.hxx>
#include <NXOpen/BlockStyler_Button.hxx>
#include <NXOpen/BlockStyler_StringBlock.hxx>
#include <NXOpen/Session.hxx>
#include <NXOpen/UI.hxx>
#include <NXOpen/NXMessageBox.hxx>
#include <NXOpen/Callback.hxx>
#include <NXOpen/NXException.hxx>
#include <NXOpen/BlockStyler_UIBlock.hxx>
#include <NXOpen/BlockStyler_BlockDialog.hxx>
#include <NXOpen/BlockStyler_PropertyList.hxx>
#include <NXOpen/BlockStyler_Group.hxx>
#include <NXOpen/BlockStyler_SpecifyPoint.hxx>
#include <NXOpen/BlockStyler_Enumeration.hxx>
#include <NXOpen/BlockStyler_ExpressionBlock.hxx>
#include <NXOpen/BlockStyler_Button.hxx>
#include <NXOpen/CurveCollection.hxx>
#include <NXOpen/NXObject.hxx>
#include <NXOpen/Part.hxx>
#include <NXOpen/PartCollection.hxx>
#include <NXOpen/Point.hxx>
#include <NXOpen/PointCollection.hxx>
#include <NXOpen/BlockStyler_Tree.hxx>
#include <NXOpen/BlockStyler_Node.hxx>
#include <NXOpen/BlockStyler_TabControl.hxx>
#include <NXOpen/BlockStyler_SpecifyPoint.hxx>
#include <NXOpen/BlockStyler_Label.hxx>
#include <NXOpen/BlockStyler_Toggle.hxx>
#include <NXOpen/BlockStyler_DrawingArea.hxx>
#include <NXOpen/BlockStyler_CurveCollector.hxx>
#include <NXOpen/BlockStyler_ListBox.hxx>
#include <NXOpen/BlockStyler_ReverseDirection.hxx>

#include <uf.h>
#include <uf_ui.h>
#include <uf_exit.h>
#include <uf_styler.h>
#include <uf_mb.h> 
#include <uf_defs.h>
#include <uf_ui_types.h>
#include <uf_curve.h>
#include <uf_obj.h>
#include <uf_modl.h>
#include <uf_part.h>
#include <uf_trns.h>
#include <uf_mtx.h>
#include <uf_ui_ugopen.h>
#include <uf_defs.h>
#include <uf_ui_types.h>
#include <uf_defs.h>
#include <uf_ui_types.h>

#include <Windows.h>
#include <stdio.h> 
#include <iostream>
#include <iomanip>
#include <stdlib.h> 
#include <time.h>
#include <fstream>
#include <vector>
#include <map>
#include <unordered_map>
#include <cmath>
#include <string>
#include <Eigen/Dense>
#include <assert.h>
#include <ctime>

#include "point.h"
#include "utility.h"
#include "station.h"
#include "robot.h"
#include "irb5500.h"
#include "irb5400.h"
#include "p250ib.h"
#include "process_data.h"
#include "dynamic_simulation.h"

//------------------------------------------------------------------------------
//Bit Option for Property: SnapPointTypesEnabled
//------------------------------------------------------------------------------
#define              SnapPointTypesEnabled_UserDefined (1 << 0);
#define                 SnapPointTypesEnabled_Inferred (1 << 1);
#define           SnapPointTypesEnabled_ScreenPosition (1 << 2);
#define                 SnapPointTypesEnabled_EndPoint (1 << 3);
#define                 SnapPointTypesEnabled_MidPoint (1 << 4);
#define             SnapPointTypesEnabled_ControlPoint (1 << 5);
#define             SnapPointTypesEnabled_Intersection (1 << 6);
#define                SnapPointTypesEnabled_ArcCenter (1 << 7);
#define            SnapPointTypesEnabled_QuadrantPoint (1 << 8);
#define            SnapPointTypesEnabled_ExistingPoint (1 << 9);
#define             SnapPointTypesEnabled_PointonCurve (1 <<10);
#define           SnapPointTypesEnabled_PointonSurface (1 <<11);
#define         SnapPointTypesEnabled_PointConstructor (1 <<12);
#define     SnapPointTypesEnabled_TwocurveIntersection (1 <<13);
#define             SnapPointTypesEnabled_TangentPoint (1 <<14);
#define                    SnapPointTypesEnabled_Poles (1 <<15);
#define         SnapPointTypesEnabled_BoundedGridPoint (1 <<16);
#define         SnapPointTypesEnabled_FacetVertexPoint (1 <<17);
//------------------------------------------------------------------------------
//Bit Option for Property: SnapPointTypesOnByDefault
//------------------------------------------------------------------------------
#define          SnapPointTypesOnByDefault_UserDefined (1 << 0);
#define             SnapPointTypesOnByDefault_Inferred (1 << 1);
#define       SnapPointTypesOnByDefault_ScreenPosition (1 << 2);
#define             SnapPointTypesOnByDefault_EndPoint (1 << 3);
#define             SnapPointTypesOnByDefault_MidPoint (1 << 4);
#define         SnapPointTypesOnByDefault_ControlPoint (1 << 5);
#define         SnapPointTypesOnByDefault_Intersection (1 << 6);
#define            SnapPointTypesOnByDefault_ArcCenter (1 << 7);
#define        SnapPointTypesOnByDefault_QuadrantPoint (1 << 8);
#define        SnapPointTypesOnByDefault_ExistingPoint (1 << 9);
#define         SnapPointTypesOnByDefault_PointonCurve (1 <<10);
#define       SnapPointTypesOnByDefault_PointonSurface (1 <<11);
#define     SnapPointTypesOnByDefault_PointConstructor (1 <<12);
#define SnapPointTypesOnByDefault_TwocurveIntersection (1 <<13);
#define         SnapPointTypesOnByDefault_TangentPoint (1 <<14);
#define                SnapPointTypesOnByDefault_Poles (1 <<15);
#define     SnapPointTypesOnByDefault_BoundedGridPoint (1 <<16);
#define     SnapPointTypesOnByDefault_FacetVertexPoint (1 <<17);
//------------------------------------------------------------------------------
//Bit Option for Property: EntityType
//------------------------------------------------------------------------------
#define                          EntityType_AllowEdges (1 << 0);
#define                         EntityType_AllowCurves (1 << 2);
#define                          EntityType_AllowPoint (1 << 3);
#define                         EntityType_AllowBodies (1 << 6);
//------------------------------------------------------------------------------
//Bit Option for Property: CurveRules
//------------------------------------------------------------------------------
#define                         CurveRules_SingleCurve (1 << 0);
#define                     CurveRules_ConnectedCurves (1 << 1);
#define                       CurveRules_TangentCurves (1 << 2);
#define                           CurveRules_FaceEdges (1 << 3);
#define                           CurveRules_BodyEdges (1 << 4);
#define                          CurveRules_SheetEdges (1 << 5);
#define                       CurveRules_FeatureCurves (1 << 6);
#define                         CurveRules_VertexEdges (1 << 8);
#define                  CurveRules_VertexTangentEdges (1 << 9);
#define                CurveRules_RegionBoundaryCurves (1 <<11);
#define                   CurveRules_OuterEdgesofFaces (1 <<13);
#define                     CurveRules_RibTopFaceEdges (1 <<14);
#define            CurveRules_FeatureIntersectionEdges (1 <<15);
//------------------------------------------------------------------------------
// Namespaces needed for following template
//------------------------------------------------------------------------------

#define pi 3.141592653

using namespace std;
using namespace NXOpen;
using namespace NXOpen::BlockStyler;

//程序中密集点 dense_points
//轨迹点 points

class DllExport fangzhen
{
public:
	//以下函数为NX自动生成
    static Session *theSession;
    static UI *theUI;
    fangzhen(); //构造函数
    ~fangzhen(); //析构函数
    int Show(); //显示界面
	void initialize_cb(); //初始化界面
	void dialogShown_cb(); //显示界面
	int close_cb();
	
	void update_connect_point();
	void add_remove_points();
	//关闭界面
	int update_cb(NXOpen::BlockStyler::UIBlock* block); //各控件功能函数
	PropertyList* GetBlockProperties(const char *blockID); //获取控件属性

	void initialize_connectPoints();//初始化界面连接点
	
	POINT_p *cur_point;//当前点
	POINT_p *temp_point;//临时点
	vector<POINT_p> points;//存轨迹点
	vector<POINT_p> dense_points; //存密集点
	vector<POINT_p> origin_points;//存储原始点云
	vector< vector<POINT_p*> > group_points;//存储密集点喷涂覆盖点
	vector<tag_t> tag_line;			//轨迹线tag
	vector<tag_t> tag_points;		 //轨迹点tag
	vector<tag_t> tag_dense_points;	 //密集点tag
	vector<tag_t> tag_origin_points; //原始点云tag
	vector<tag_t> tag_line_dense_points;//密集点连线tag
	vector< vector<tag_t> > tag_group_point;//存储密集点喷涂覆盖点tag
	string create_key(POINT_p &point); //为某个点创建key
	string create_key(double x,double y,double z); //为某个坐标创建key
	void create_trans_point(const POINT_p & ref_point, POINT_p & new_point, double no, double param_1[6], double param_2[6], double param_3_1[6], double param_3_2[6], double param_4[6], double param_5[6], double param_negtive_1[6], double param_negtive_2[6], double param_negtive_3[6], double param_negtive_4[6], double param_101[6], double param_102[6], double param_103[6], double param_104[6], double param_105[6], double param_202[6], double param_203[6], double param_204[6], double param_205[6], double param_302[6], double param_303[6], double param_304[6], double param_305[6], double param_402[6], double param_403[6], double param_404[6], double param_405[6], double param_502[6], double param_503[6], double param_504[6], double param_505[6], double param_602[6], double param_603[6], double param_604[6], double param_605[6], double param_702[6], double param_703[6], double param_704[6], double param_705[6]);
	unordered_map<string, POINT_p*> origin_points_map;//存储原始点云（转换为模型坐标系下）的map
	unordered_map<string, POINT_p*> points_map;// //存储轨迹点（转换为模型坐标系下）的map
	Robot* robot;	//机器人
	Station station; //工作站
	double robot_ini_thetas[6];	//机器人home点姿态
	tag_t tool_tag; //喷具数模实体tag
	vector<double*> MATX_trans;//存密集点每两点间变换矩阵
	int first_point;//仿真第一个（密集）点index
	int last_point;//仿真最后一个（密集）点index
	int first_copy_point;//姿态复制区间第一个点index
	int last_copy_point;//姿态复制区间最后一个点index

	int first_cut_point;//原始轨迹断开开始点,就是索引
	int last_cut_point;//原始轨迹断开结束点,就是索引
	vector<POINT_p> added_points;//手动增加点容器
	vector<tag_t> tag_added_points;//手动增加点容器
	vector<tag_t> tag_all_points;//所有的点云tag
	POINT_p cur_add_point;//当前点
	bool is_show = false;


	vector<tag_t> tag_line_copy;//复制区间突出显示线段tag
	bool sim_first;//是否第一次覆盖面仿真
	bool affirmed;//是否进行了参数确认（可否去掉？）
	bool R_changed;//是否改变了转弯半径
	double width_distance;//扇面宽度
	string coor_name;//工件坐标系名称
	string tool_name;//工具名称
	char work_type[100];//工艺类别
	char tool_type[100];//喷具类别（杯、枪）
	char tool_path[100];//工具数模路径
	char pa[100];//点云精度，计算喷涂覆盖面积用到
	char robotnum[100];//机器人编号
	string process_data_path;//中间数据路径
	string output_path;//输出文件路径
	string filename;//不带后缀文件名
	Point3d origin_p;//原点（消除点标记使用）
	vector<MatrixXd> ini_pose;//轨迹点的初始姿态，姿态定向时用到
	vector<double*> joint_data;//机器人关节角
	unordered_map<int, int> dense_point_match;//存密集点index“归属”的轨迹点index
	unordered_map<int, int> point_match;//存离轨迹点最近密集点index
	vector<POINT_p> backup_points;//存备份轨迹点
	vector<int> limit_index; //无逆解、限位轨迹点下标
	vector<int> limit_dense_index; //无逆解、限位密集点下标
	unordered_map<int, string> part_model_path; //存每个机器人part的数模路径
	vector<tag_t> robot_parts_tag; //存机器人部件tag
	vector< vector<int> > check_pose_result; //姿态检查结果
	vector<MatrixXd> data_r; //机器人末端到6轴实时位姿数据
	bool reversed;//轨迹是否倒序了

	//连接点参数
	//从界面读取连接点参数
	//后保喷枪
	double param_1[6] = { 300,-250,100,80,0,0 };
	double param_2[6] = { 100,-300,-50,60,-10,70 };
	double param_3_1[6] = { 100,-100,50,-20,30,-30 };
	double param_3_2[6] = { -600,-100,50,-20,20,-30 };
	double param_4[6] = { -100,-200,-50,-10,-40,60 };
	double param_5[6] = { -150,-100,100,10,-20,-60 };
	//后保旋杯
	//新增1号连接点
	double param_negtive_1[6] = { 300,-200,300,10,-15,-45 };
	double param_negtive_2[6] = { 400,-200,300,10,-15,-45 };//仅适用于旋杯非中点起枪
	double param_negtive_3[6] = { 0,-150,0,10,-10,60 };//此连接点适用于旋杯中点及非中点规则
	double param_negtive_4[6] = { 400,-200,0,70,30,-20 };//仅适用于旋杯非中点起枪
	//前保喷枪，7种情况
	//新增1号连接点
	double param_101[6] = { 300,-200,300,10,-15,-45 };
	double param_102[6] = { 100,-300,-50,60,-10,80 };
	double param_103[6] = { 0,-100,250,0,-40,-100 };
	double param_104[6] = { 0,-100,-50,0,-10,80 };
	double param_105[6] = { 0,-50,50,70,-20,-70 };

	double param_202[6] = { 100,-300,-50,60,-10,80 };
	double param_203[6] = { 50,0,50,-20,-20,-180 };
	double param_204[6] = { 0,-100,-200,0,-10,40 };
	double param_205[6] = { 0,-100 - 200,0,-10,40 };

	double param_302[6] = { 100,-300,-50,60,-10,80 };
	double param_303[6] = { 250,0,150,-10,-40,-100 };
	double param_304[6] = { -700,-400,-50,0,-10,80 };
	double param_305[6] = { 0,0,50,70,0,-70 };

	double param_402[6] = { 100,-300,-50,60,-10,80 };
	double param_403[6] = { -100,-100,250,0,-40,-100 };
	double param_404[6] = { -700,-500,-300,0,-10,80 };
	double param_405[6] = { 0,0,50,70,30,-70 };

	double param_502[6] = { 100,-300,-50,60,-10,80 };
	double param_503[6] = { 200,0,0,-20,-20,-180 };
	double param_504[6] = { -100,0,-100,0,-10,40 };
	double param_505[6] = { -50,-150,50,70,-20,-70 };

	double param_602[6] = { 100,-300,-50,60,-10,80 };
	double param_603[6] = { 200,0,0,-40,-20,-180 };
	double param_604[6] = { -700,-400,-50,0,-10,80 };
	double param_605[6] = { -50,-150,50,70,-20,-70 };

	double param_702[6] = { 100,-300,-50,60,-10,80 };
	double param_703[6] = { 600,-100,200,20,-20,-130 };
	double param_704[6] = { 0,-100,-200,0,-10,50 };
	double param_705[6] = { 0,-50,50,70,-20,-70 };

	bool load_param();
	//加载参数	
	void read_points();	//读取轨迹点和点云
	void read_points_param();//读取轨迹点参数
	void create_points();//创建轨迹点	
	void import_tool(POINT_p &point);//将喷具移动到某点
	void import_tool(double *trans);//将喷具移动到位姿
	void create_dense_points();//生成密集点
	void set_dense_points_param();//设置密集点工艺参数
	void update_mohou();//针对当前点生成膜厚分布推荐参数值，并显示
	void cal_points_mohou_distri();//计算密集点膜厚分布
	void group_bell();//计算旋杯膜厚
	void group_gun();//计算喷枪膜厚
	void mohou_stat();//膜厚信息统计
	int match_dense_ponit(POINT_p &point);//根据指定的轨迹点，找到离它最近的密集点index
	int match_ponit(POINT_p &point);//根据指定的密集点，找到离它最近的轨迹点index
	void cal_transmtx();//求解密集点每两点间的变换矩阵
	void clear_transmtx();//释放密集点每两点间的变换矩阵占用内存
	void motion(bool paint);//喷具运动仿真
	void initialize_station();	//初始化工作站配置
	void update_station(); //更新工作站配置
	int cal_points_v(bool f=false);//节拍仿真
	void pose_up(POINT_p &point);//将某点处工具“朝上”
	void trans_to_worksys();//将轨迹点转换到工件坐标系
	void save_points();	//保存轨迹点
	bool save_param();//保存界面参数
	void write_dat();//写dat文件
	void write_mod();//写mod文件
	void write_ls();//写ls文件
	void write_mod_brush();//写带喷涂指令的mod文件
	void write_bt();//写bt文件
	void write_csv();//写csv文件（FANUC刷子表）
	void write_points_param();//输出轨迹点参数文件
	void release_solution_memo(vector<double*>& joint_data);//释放逆解内存空间
	void modify_ortho_normalize(double *matx,double *z_dir);//针对正交单位化结果进行修正
	void dense_points_line_visible();//显示密集点轨迹
	void hide_dense_points_line();//隐藏密集点轨迹
	void create_dense_point_match();//创建dense_point_match
	//void disable_adjust_pose(); //使姿态调整功能不可用
	//void enable_adjust_pose(); //使姿态调整功能可用
	bool check_pose();
	void show1601(double num);
	//奇异位，限位检查
	void show_joint_value(); //显示当前点关节角度值
	void backups(); //数据备份
	void import_part(int part_no, MatrixXd T); //导入机器人part
	void import_robot(double* joints, MatrixXd base_csys); //导入机器人
	void show_robot(POINT_p &point); //显示机器人
	bool optimize_pose(); //优化姿态
	int helper(double* s, double &best_jj, double jj, int &best_stat); //优化姿态辅助函数

	//调试用
	void save_interp_data(vector<MatrixXd> dt);//保存插值点
	void save_joint_data(vector<double*> joint_data);//保存关节角度
	void save_t_data(vector<double> t_data);//保存时间数据
	void save_data_p(vector<MatrixXd> data_p);
	void save_data_p(vector<MatrixXd> data_p,string filepath);
	void save_station_data();

private:
	const char* theDlxFileName;
	NXOpen::BlockStyler::BlockDialog* theDialog;
	NXOpen::BlockStyler::TabControl* tabControl;// Block type: Tabs Page
	NXOpen::BlockStyler::Group* tabPage2;// Block type: Group
	NXOpen::BlockStyler::SpecifyPoint* point04;// Block type: Specify Point
	NXOpen::BlockStyler::Toggle* toggle04;// Block type: Toggle
	NXOpen::BlockStyler::Group* group4;// Block type: Group
	NXOpen::BlockStyler::Button* button02;// Block type: Button
	NXOpen::BlockStyler::DoubleBlock* double015;// Block type: Double
	NXOpen::BlockStyler::ReverseDirection* directionX;// Block type: Reverse Direction
	NXOpen::BlockStyler::Button* button03;// Block type: Button
	NXOpen::BlockStyler::DoubleBlock* double016;// Block type: Double
	NXOpen::BlockStyler::ReverseDirection* directionY;// Block type: Reverse Direction
	NXOpen::BlockStyler::Button* button04;// Block type: Button
	NXOpen::BlockStyler::DoubleBlock* double017;// Block type: Double
	NXOpen::BlockStyler::ReverseDirection* directionZ;// Block type: Reverse Direction
	NXOpen::BlockStyler::Button* button023;// Block type: Button
	NXOpen::BlockStyler::Group* group10;// Block type: Group
	NXOpen::BlockStyler::Button* button08;// Block type: Button
	NXOpen::BlockStyler::Button* button09;// Block type: Button
	NXOpen::BlockStyler::Button* button010;// Block type: Button
	NXOpen::BlockStyler::Button* button011;// Block type: Button
	NXOpen::BlockStyler::DrawingArea* drawingArea01;// Block type: Drawing Area
	NXOpen::BlockStyler::Button* button012;// Block type: Button
	NXOpen::BlockStyler::Button* button013;// Block type: Button
	NXOpen::BlockStyler::Button* button014;// Block type: Button
	NXOpen::BlockStyler::Button* button015;// Block type: Button
	NXOpen::BlockStyler::Button* button016;// Block type: Button
	NXOpen::BlockStyler::Group* group8;// Block type: Group
	NXOpen::BlockStyler::Group* group17;// Block type: Group
	NXOpen::BlockStyler::SpecifyPoint* point09;// Block type: Specify Point
	NXOpen::BlockStyler::Group* group9;// Block type: Group
	NXOpen::BlockStyler::Toggle* toggle0;// Block type: Toggle
	NXOpen::BlockStyler::SpecifyPoint* point05;// Block type: Specify Point
	NXOpen::BlockStyler::SpecifyPoint* point06;// Block type: Specify Point
	NXOpen::BlockStyler::Button* button020;// Block type: Button
	NXOpen::BlockStyler::Button* button021;// Block type: Button
	NXOpen::BlockStyler::Group* group30;// Block type: Group
	NXOpen::BlockStyler::Button* button027;// Block type: Button
	NXOpen::BlockStyler::SpecifyPoint* point07;// Block type: Specify Point
	NXOpen::BlockStyler::SpecifyPoint* point08;// Block type: Specify Point
	NXOpen::BlockStyler::SpecifyPoint* point091;// Block type: Specify Point
	NXOpen::BlockStyler::Button* button025;// Block type: Button
	NXOpen::BlockStyler::Button* button028;// Block type: Button
	NXOpen::BlockStyler::Button* button026;// Block type: Button
	NXOpen::BlockStyler::Group* group15;// Block type: Group
	NXOpen::BlockStyler::Button* button018;// Block type: Button
	NXOpen::BlockStyler::Button* button019;// Block type: Button
	NXOpen::BlockStyler::IntegerBlock* point_no;// Block type: Integer
	NXOpen::BlockStyler::Group* group14;// Block type: Group
	NXOpen::BlockStyler::Button* button017;// Block type: Button
	NXOpen::BlockStyler::Button* button022;// Block type: Button
	NXOpen::BlockStyler::Button* button06;// Block type: Button
	NXOpen::BlockStyler::Group* group16;// Block type: Group
	NXOpen::BlockStyler::ListBox* list_box0;// Block type: List Box
	NXOpen::BlockStyler::Group* tabPage1;// Block type: Group
	NXOpen::BlockStyler::SpecifyPoint* point01;// Block type: Specify Point
	NXOpen::BlockStyler::Group* group1;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer01;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer02;// Block type: Integer
	NXOpen::BlockStyler::Toggle* toggle05;// Block type: Toggle
	NXOpen::BlockStyler::DoubleBlock* double09;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double010;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double011;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double012;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double018;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double08;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double01;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double03;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double014;// Block type: Double
	NXOpen::BlockStyler::Enumeration* enum02;// Block type: Enumeration
	NXOpen::BlockStyler::Group* group6;// Block type: Group
	NXOpen::BlockStyler::Enumeration* enum03;// Block type: Enumeration
	NXOpen::BlockStyler::DoubleBlock* double06;// Block type: Double
	NXOpen::BlockStyler::Button* button05;// Block type: Button
	NXOpen::BlockStyler::Group* group2;// Block type: Group
	NXOpen::BlockStyler::DoubleTable* doubleTable0;// Block type: Double Table
	NXOpen::BlockStyler::DoubleBlock* double05;// Block type: Double
	NXOpen::BlockStyler::Group* group3;// Block type: Group
	NXOpen::BlockStyler::DoubleBlock* double013;// Block type: Double
	NXOpen::BlockStyler::Enumeration* enum0;// Block type: Enumeration
	NXOpen::BlockStyler::DoubleBlock* double02;// Block type: Double
	NXOpen::BlockStyler::IntegerBlock* integer0;// Block type: Integer
	NXOpen::BlockStyler::DoubleBlock* double028;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double029;// Block type: Double
	NXOpen::BlockStyler::Enumeration* enum01;// Block type: Enumeration
	NXOpen::BlockStyler::IntegerBlock* integer03;// Block type: Integer
	NXOpen::BlockStyler::Group* group13;// Block type: Group
	NXOpen::BlockStyler::DoubleTable* doubleTable01;// Block type: Double Table
	NXOpen::BlockStyler::Button* button01;// Block type: Button
	NXOpen::BlockStyler::Group* group12;// Block type: Group
	NXOpen::BlockStyler::CurveCollector* edge_select0;// Block type: Curve Collector
	NXOpen::BlockStyler::Button* button07;// Block type: Button
	NXOpen::BlockStyler::Group* group;// Block type: Group
	NXOpen::BlockStyler::SpecifyPoint* point03;// Block type: Specify Point
	NXOpen::BlockStyler::SpecifyPoint* point02;// Block type: Specify Point
	NXOpen::BlockStyler::DoubleBlock* double0;// Block type: Double
	NXOpen::BlockStyler::Toggle* toggle01;// Block type: Toggle
	NXOpen::BlockStyler::Toggle* toggle02;// Block type: Toggle
	NXOpen::BlockStyler::Toggle* toggle03;// Block type: Toggle
	NXOpen::BlockStyler::Button* button0;// Block type: Button
	NXOpen::BlockStyler::Group* group7;// Block type: Group
	NXOpen::BlockStyler::DoubleBlock* doubleJ1;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* doubleJ2;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* doubleJ3;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* doubleJ4;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* doubleJ5;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* doubleJ6;// Block type: Double
	NXOpen::BlockStyler::Group* tabPage;// Block type: Group
	NXOpen::BlockStyler::SpecifyPoint* point0;// Block type: Specify Point
	NXOpen::BlockStyler::DoubleBlock* double04;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double022;// Block type: Double
	NXOpen::BlockStyler::DrawingArea* drawingArea0;// Block type: Drawing Area
	NXOpen::BlockStyler::Group* group5;// Block type: Group
	NXOpen::BlockStyler::DoubleBlock* double019;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double020;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double021;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double023;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double024;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double025;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double026;// Block type: Double
	NXOpen::BlockStyler::DoubleBlock* double027;// Block type: Double
	NXOpen::BlockStyler::Group* tabPage3;// Block type: Group
	NXOpen::BlockStyler::Group* group11;// Block type: Group
	NXOpen::BlockStyler::TabControl* tabControl1;// Block type: Tabs Page
	NXOpen::BlockStyler::Group* tabPage5;// Block type: Group
	NXOpen::BlockStyler::Enumeration* enum_RB_BELL_ruleType;// Block type: Enumeration
	NXOpen::BlockStyler::Group* group23;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint1X;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint1Y;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint1Z;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint1A;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint1B;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint1C;// Block type: Integer
	NXOpen::BlockStyler::Group* group24;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint2X;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint2Y;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint2Z;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint2A;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint2B;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint2C;// Block type: Integer
	NXOpen::BlockStyler::Group* group25;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint3X;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint3Y;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint3Z;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint3A;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint3B;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_BELL_jointPoint3C;// Block type: Integer
	NXOpen::BlockStyler::Group* tabPage4;// Block type: Group
	NXOpen::BlockStyler::Enumeration* enum_RB_GUN_rule;// Block type: Enumeration
	NXOpen::BlockStyler::Group* group26;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint1X;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint1Y;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint1Z;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint1A;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint1B;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint1C;// Block type: Integer
	NXOpen::BlockStyler::Group* group27;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint2X;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint2Y;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint2Z;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint2A;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint2B;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint2C;// Block type: Integer
	NXOpen::BlockStyler::Group* group28;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint3X;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint3Y;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint3Z;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint3A;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint3B;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint3C;// Block type: Integer
	NXOpen::BlockStyler::Group* group29;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint4X;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint4Y;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint4Z;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint4A;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint4B;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint4C;// Block type: Integer
	NXOpen::BlockStyler::Group* group291;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint5X;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint5Y;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint5Z;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint5A;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint5B;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_RB_GUN_jointPoint5C;// Block type: Integer
	NXOpen::BlockStyler::Button* button0241;// Block type: Button
	NXOpen::BlockStyler::Group* group18;// Block type: Group
	NXOpen::BlockStyler::TabControl* tabControl2;// Block type: Tabs Page
	NXOpen::BlockStyler::Group* tabPage6;// Block type: Group
	NXOpen::BlockStyler::Enumeration* enum_FB_GUN_rule;// Block type: Enumeration
	NXOpen::BlockStyler::Group* group191;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint0X1;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint0Y1;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint0Z1;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint0A1;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint0B1;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint0C1;// Block type: Integer
	NXOpen::BlockStyler::Group* group19;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint1X;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint1Y;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint1Z;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint1A;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint1B;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint1C;// Block type: Integer
	NXOpen::BlockStyler::Group* group20;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint2X;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint2Y;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint2Z;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint2A;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint2B;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint2C;// Block type: Integer
	NXOpen::BlockStyler::Group* group22;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint3X;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint3Y;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint3Z;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint3A;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint3B;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint3C;// Block type: Integer
	NXOpen::BlockStyler::Group* group21;// Block type: Group
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint4X;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint4Y;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint4Z;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint4A;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint4B;// Block type: Integer
	NXOpen::BlockStyler::IntegerBlock* integer_jointPoint4C;// Block type: Integer
	NXOpen::BlockStyler::Button* button024;// Block type: Button

};
#endif //fangzhen_H_INCLUDED
