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

//�������ܼ��� dense_points
//�켣�� points

class DllExport fangzhen
{
public:
	//���º���ΪNX�Զ�����
    static Session *theSession;
    static UI *theUI;
    fangzhen(); //���캯��
    ~fangzhen(); //��������
    int Show(); //��ʾ����
	void initialize_cb(); //��ʼ������
	void dialogShown_cb(); //��ʾ����
	int close_cb();
	
	void update_connect_point();
	void add_remove_points();
	//�رս���
	int update_cb(NXOpen::BlockStyler::UIBlock* block); //���ؼ����ܺ���
	PropertyList* GetBlockProperties(const char *blockID); //��ȡ�ؼ�����

	void initialize_connectPoints();//��ʼ���������ӵ�
	
	POINT_p *cur_point;//��ǰ��
	POINT_p *temp_point;//��ʱ��
	vector<POINT_p> points;//��켣��
	vector<POINT_p> dense_points; //���ܼ���
	vector<POINT_p> origin_points;//�洢ԭʼ����
	vector< vector<POINT_p*> > group_points;//�洢�ܼ�����Ϳ���ǵ�
	vector<tag_t> tag_line;			//�켣��tag
	vector<tag_t> tag_points;		 //�켣��tag
	vector<tag_t> tag_dense_points;	 //�ܼ���tag
	vector<tag_t> tag_origin_points; //ԭʼ����tag
	vector<tag_t> tag_line_dense_points;//�ܼ�������tag
	vector< vector<tag_t> > tag_group_point;//�洢�ܼ�����Ϳ���ǵ�tag
	string create_key(POINT_p &point); //Ϊĳ���㴴��key
	string create_key(double x,double y,double z); //Ϊĳ�����괴��key
	void create_trans_point(const POINT_p & ref_point, POINT_p & new_point, double no, double param_1[6], double param_2[6], double param_3_1[6], double param_3_2[6], double param_4[6], double param_5[6], double param_negtive_1[6], double param_negtive_2[6], double param_negtive_3[6], double param_negtive_4[6], double param_101[6], double param_102[6], double param_103[6], double param_104[6], double param_105[6], double param_202[6], double param_203[6], double param_204[6], double param_205[6], double param_302[6], double param_303[6], double param_304[6], double param_305[6], double param_402[6], double param_403[6], double param_404[6], double param_405[6], double param_502[6], double param_503[6], double param_504[6], double param_505[6], double param_602[6], double param_603[6], double param_604[6], double param_605[6], double param_702[6], double param_703[6], double param_704[6], double param_705[6]);
	unordered_map<string, POINT_p*> origin_points_map;//�洢ԭʼ���ƣ�ת��Ϊģ������ϵ�£���map
	unordered_map<string, POINT_p*> points_map;// //�洢�켣�㣨ת��Ϊģ������ϵ�£���map
	Robot* robot;	//������
	Station station; //����վ
	double robot_ini_thetas[6];	//������home����̬
	tag_t tool_tag; //�����ģʵ��tag
	vector<double*> MATX_trans;//���ܼ���ÿ�����任����
	int first_point;//�����һ�����ܼ�����index
	int last_point;//�������һ�����ܼ�����index
	int first_copy_point;//��̬���������һ����index
	int last_copy_point;//��̬�����������һ����index

	int first_cut_point;//ԭʼ�켣�Ͽ���ʼ��,��������
	int last_cut_point;//ԭʼ�켣�Ͽ�������,��������
	vector<POINT_p> added_points;//�ֶ����ӵ�����
	vector<tag_t> tag_added_points;//�ֶ����ӵ�����
	vector<tag_t> tag_all_points;//���еĵ���tag
	POINT_p cur_add_point;//��ǰ��
	bool is_show = false;


	vector<tag_t> tag_line_copy;//��������ͻ����ʾ�߶�tag
	bool sim_first;//�Ƿ��һ�θ��������
	bool affirmed;//�Ƿ�����˲���ȷ�ϣ��ɷ�ȥ������
	bool R_changed;//�Ƿ�ı���ת��뾶
	double width_distance;//������
	string coor_name;//��������ϵ����
	string tool_name;//��������
	char work_type[100];//�������
	char tool_type[100];//�����𣨱���ǹ��
	char tool_path[100];//������ģ·��
	char pa[100];//���ƾ��ȣ�������Ϳ��������õ�
	char robotnum[100];//�����˱��
	string process_data_path;//�м�����·��
	string output_path;//����ļ�·��
	string filename;//������׺�ļ���
	Point3d origin_p;//ԭ�㣨��������ʹ�ã�
	vector<MatrixXd> ini_pose;//�켣��ĳ�ʼ��̬����̬����ʱ�õ�
	vector<double*> joint_data;//�����˹ؽڽ�
	unordered_map<int, int> dense_point_match;//���ܼ���index���������Ĺ켣��index
	unordered_map<int, int> point_match;//����켣������ܼ���index
	vector<POINT_p> backup_points;//�汸�ݹ켣��
	vector<int> limit_index; //����⡢��λ�켣���±�
	vector<int> limit_dense_index; //����⡢��λ�ܼ����±�
	unordered_map<int, string> part_model_path; //��ÿ��������part����ģ·��
	vector<tag_t> robot_parts_tag; //������˲���tag
	vector< vector<int> > check_pose_result; //��̬�����
	vector<MatrixXd> data_r; //������ĩ�˵�6��ʵʱλ������
	bool reversed;//�켣�Ƿ�����

	//���ӵ����
	//�ӽ����ȡ���ӵ����
	//����ǹ
	double param_1[6] = { 300,-250,100,80,0,0 };
	double param_2[6] = { 100,-300,-50,60,-10,70 };
	double param_3_1[6] = { 100,-100,50,-20,30,-30 };
	double param_3_2[6] = { -600,-100,50,-20,20,-30 };
	double param_4[6] = { -100,-200,-50,-10,-40,60 };
	double param_5[6] = { -150,-100,100,10,-20,-60 };
	//������
	//����1�����ӵ�
	double param_negtive_1[6] = { 300,-200,300,10,-15,-45 };
	double param_negtive_2[6] = { 400,-200,300,10,-15,-45 };//���������������е���ǹ
	double param_negtive_3[6] = { 0,-150,0,10,-10,60 };//�����ӵ������������е㼰���е����
	double param_negtive_4[6] = { 400,-200,0,70,30,-20 };//���������������е���ǹ
	//ǰ����ǹ��7�����
	//����1�����ӵ�
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
	//���ز���	
	void read_points();	//��ȡ�켣��͵���
	void read_points_param();//��ȡ�켣�����
	void create_points();//�����켣��	
	void import_tool(POINT_p &point);//������ƶ���ĳ��
	void import_tool(double *trans);//������ƶ���λ��
	void create_dense_points();//�����ܼ���
	void set_dense_points_param();//�����ܼ��㹤�ղ���
	void update_mohou();//��Ե�ǰ������Ĥ��ֲ��Ƽ�����ֵ������ʾ
	void cal_points_mohou_distri();//�����ܼ���Ĥ��ֲ�
	void group_bell();//��������Ĥ��
	void group_gun();//������ǹĤ��
	void mohou_stat();//Ĥ����Ϣͳ��
	int match_dense_ponit(POINT_p &point);//����ָ���Ĺ켣�㣬�ҵ�����������ܼ���index
	int match_ponit(POINT_p &point);//����ָ�����ܼ��㣬�ҵ���������Ĺ켣��index
	void cal_transmtx();//����ܼ���ÿ�����ı任����
	void clear_transmtx();//�ͷ��ܼ���ÿ�����ı任����ռ���ڴ�
	void motion(bool paint);//����˶�����
	void initialize_station();	//��ʼ������վ����
	void update_station(); //���¹���վ����
	int cal_points_v(bool f=false);//���ķ���
	void pose_up(POINT_p &point);//��ĳ�㴦���ߡ����ϡ�
	void trans_to_worksys();//���켣��ת������������ϵ
	void save_points();	//����켣��
	bool save_param();//����������
	void write_dat();//дdat�ļ�
	void write_mod();//дmod�ļ�
	void write_ls();//дls�ļ�
	void write_mod_brush();//д����Ϳָ���mod�ļ�
	void write_bt();//дbt�ļ�
	void write_csv();//дcsv�ļ���FANUCˢ�ӱ�
	void write_points_param();//����켣������ļ�
	void release_solution_memo(vector<double*>& joint_data);//�ͷ�����ڴ�ռ�
	void modify_ortho_normalize(double *matx,double *z_dir);//���������λ�������������
	void dense_points_line_visible();//��ʾ�ܼ���켣
	void hide_dense_points_line();//�����ܼ���켣
	void create_dense_point_match();//����dense_point_match
	//void disable_adjust_pose(); //ʹ��̬�������ܲ�����
	//void enable_adjust_pose(); //ʹ��̬�������ܿ���
	bool check_pose();
	void show1601(double num);
	//����λ����λ���
	void show_joint_value(); //��ʾ��ǰ��ؽڽǶ�ֵ
	void backups(); //���ݱ���
	void import_part(int part_no, MatrixXd T); //���������part
	void import_robot(double* joints, MatrixXd base_csys); //���������
	void show_robot(POINT_p &point); //��ʾ������
	bool optimize_pose(); //�Ż���̬
	int helper(double* s, double &best_jj, double jj, int &best_stat); //�Ż���̬��������

	//������
	void save_interp_data(vector<MatrixXd> dt);//�����ֵ��
	void save_joint_data(vector<double*> joint_data);//����ؽڽǶ�
	void save_t_data(vector<double> t_data);//����ʱ������
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
