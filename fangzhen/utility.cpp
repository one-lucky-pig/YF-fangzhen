#include "utility.h"

//uc1601((char*)to_string(count).c_str(), 1);

//获取当前工程路径
string get_curpro_path(string cur_path) {
	ifstream readFile(cur_path);
	string cur;
	readFile >> cur;
	string category = cur.substr(1, 2);
	string folder = cur.substr(0, 9);
	string path = category;
	path += "\\";
	path += folder;
	path += "\\";
	path += cur;
	path += "\\";
	readFile.close();
	return path;
}

//获取当前工程号
string get_curpro_name(string cur_path) {
	ifstream readFile(cur_path);
	string cur;
	readFile >> cur;
	return cur;
}


//获取指定目录下所有文件
void getfiles(string path, vector<string>& files) {
	long hFile = 0;
	struct _finddata_t fileinfo;
	string p;
	if ((hFile = _findfirst(p.assign(path).append("\\*").c_str(), &fileinfo))
		!= -1) {
		do {
			if ((fileinfo.attrib & _A_SUBDIR)) {
				if (strcmp(fileinfo.name, ".") != 0
					&& strcmp(fileinfo.name, "..") != 0)
					getfiles(p.assign(path).append("\\").append(fileinfo.name),
						files);
			}
			else {
				files.push_back(
					p.assign(path).append("\\").append(fileinfo.name));
			}
		} while (_findnext(hFile, &fileinfo) == 0);
		_findclose(hFile);
	}
}

//删除一个目录（包括下面所有文件）
void delete_folder(string folder_path) {
	vector<string> files;
	getfiles(folder_path, files);
	for (int i = 0; i<files.size(); i++)
		DeleteFile(files[i].c_str());
	RemoveDirectory(folder_path.c_str());
}

//以指定字符分割字符串
vector<string> split(char* str, char* sep) {
	char *p;
	vector<string> result;
	p = strtok(str, sep);
	while (p) {
		result.push_back(p);
		p = strtok(NULL, sep);
	}
	return result;
}

//字符串去除指定字符ch
void trim(string &s, char ch) {
	int index = 0;
	if (!s.empty())
	{
		while ((index = s.find(ch, index)) != string::npos)
		{
			s.erase(index, 1);
		}
	}
}

//读取文件全部内容
vector<NXOpen::NXString> get_file_content(string filename) {
	vector<NXOpen::NXString> s;
	ifstream inf;
	inf.open(filename);
	string line;
	while (getline(inf, line))
	{
		s.push_back(line);
	}
	inf.close();
	return s;
}

//获取.ini文件中所有的section名称
//filePath:.ini文件路径
//allSectionNames:存获取的section名称
void getAllSectionNames(char* filePath, vector<char*> &allSectionNames) {
	char names[1028];
	char* name;
	int i, j = 0;
	GetPrivateProfileSectionNames(names, sizeof(names), filePath);
	for (i = 0; i<1028; i++) {
		if (names[i] == '\0') {
			if (i == 0) break;
			else {
				name = (char*)malloc(sizeof(char));
				strncpy(name, names + j, i - j);
				allSectionNames.push_back(name);
				if (i + 1<1028 && names[i + 1] == '\0') break;
				j = i + 1;
			}
		}
	}
}

//获取当前路径
string current_directory() {
	char buf[80];
	getcwd(buf, sizeof(buf));
	string s;
	s =buf;
	return s+"\\";
}


//检查某一目录是否存在
BOOL CheckFolderExist(const string &strPath)
{
	WIN32_FIND_DATA  FindFileData;
	BOOL bValue = false;
	HANDLE hFind = FindFirstFile(strPath.c_str(), &FindFileData);
	if ((hFind != INVALID_HANDLE_VALUE) && (FindFileData.dwFileAttributes & FILE_ATTRIBUTE_DIRECTORY))
	{
		bValue = TRUE;
	}
	FindClose(hFind);
	return bValue;
}

//创建一个文件夹，如果已有文件夹，该文件夹下内容会清空
bool create_floder(string path){
	bool flag = true;
	vector<string> files;
	if(CheckFolderExist(path)){
		getfiles(path, files);
		for (int i = 0; i<files.size(); i++)
			DeleteFile(files[i].c_str());
		return true;
	}
	vector<string> result = split((char*)path.c_str(), "\\");
	int size = result.size();
	string temp = result[0];
	
	for (int i = 1; i < size; i++) {
		temp += "\\" + result[i];
		if (!CheckFolderExist(temp)) {
			flag=CreateDirectory(temp.c_str(), NULL);
			if (!flag) return flag;
		}			
				
	}
	return flag;
}

//将str中的某个字符替换成另一个字符
string replace(string str, char c, string sub) {
	int index = 0;
	string ss = str;
	if (!str.empty())
	{
		while ((index = ss.find(c)) != string::npos)
		{
			ss = ss.replace(index, 1, sub);
		}
	}
	return ss;
}


//从字符串中提取数字 
int parse_digit(char* str) {
	int cnt_int = 0;
	for (int i = 0; str[i] != '\0'; ++i) //当a数组元素不为结束符时.遍历字符串a.
	{
		if (str[i] >= '0'&& str[i] <= '9') //如果是数字.
		{
			cnt_int *= 10;
			cnt_int += str[i] - '0'; //数字字符的ascii-字符'0'的ascii码就等于该数字.
		}
	}
	return cnt_int;
}

MatrixXd rotx(double t) {
	MatrixXd m = MatrixXd(3, 3);
	m.setIdentity();
	m(1, 1) = cos(t);
	m(2, 1) = sin(t);
	m(1, 2) = -sin(t);
	m(2, 2) = cos(t);
	return m;
}
MatrixXd roty(double t) {
	MatrixXd m = MatrixXd(3, 3);
	m.setIdentity();
	m(0,0) = cos(t);
	m(2,0) = -sin(t);
	m(0, 2) = sin(t);
	m(2, 2) = cos(t);
	return m;
}
MatrixXd rotz(double t) {
	MatrixXd m = MatrixXd(3, 3);
	m.setIdentity();
	m(0, 0) = cos(t);
	m(1, 0) = sin(t);
	m(0, 1) = -sin(t);
	m(1, 1) = cos(t);
	return m;
}

MatrixXd euler_to_T(double x, double y, double z) {
	return rotz(z)*roty(y)*rotx(x);
}

MatrixXd trans_to_T(double* trans) {
	MatrixXd T(4, 4);
	T.setIdentity();
	int r, c;
	for (int i = 0; i < 16; i++) {
		r = i / 4;
		c = i % 4;
		T(r, c) = trans[i];
	}
	return T;
}


//变换矩阵转四元数
//double quate[4];
void trans_to_quate_fz(double *trans, double* quate) {
		/*double q1, q2, q3, q4, tt, m, t;
		tt = 1 + trans[0] + trans[5] + trans[10];

		if (abs(tt) > 1.0e-5) {
			q1 = sqrt(tt) / 2.0;
			q2 = (trans[9] - trans[6]) / (4 * q1);
			q3 = (trans[2] - trans[8]) / (4 * q1);
			q4 = (trans[4] - trans[1]) / (4 * q1);
		}
		else {
			m = max(max(trans[0], trans[5]), trans[10]);
			if (m == trans[0]) {
				t = sqrt(1 + trans[0] - trans[5] - trans[10]);
				q1 = (trans[9] - trans[6]) / t;
				q2 = t / 4;
				q3 = (trans[2] + trans[8]) / t;
				q4 = (trans[1] + trans[4]) / t;
			}

			if (m == trans[5]) {
				t = sqrt(1 - trans[0] + trans[5] - trans[10]);
				q1 = (trans[2] - trans[8]) / t;
				q2 = (trans[1] + trans[4]) / t;
				q3 = t / 4;
				q4 = (trans[9] + trans[6]) / t;
			}

			if (m == trans[10]) {
				t = sqrt(1 - trans[0] - trans[5] + trans[10]);
				q1 = (trans[4] - trans[1]) / t;
				q2 = (trans[2] + trans[8]) / t;
				q3 = (trans[6] - trans[9]) / t;
				q4 = t / 4;
			}
		}

		quate[0] = q1;
		quate[1] = q2;
		quate[2] = q3;
		quate[3] = q4;*/

	double u = trans[0] + trans[5] + trans[10];
	double maxv = u;
	if (trans[0] > maxv) maxv = trans[0];
	if (trans[5] > maxv) maxv = trans[5];
	if (trans[10] > maxv) maxv = trans[10];
	double q1, q2, q3, q4;
	if (maxv == u) {
		double tt = 1 + trans[0] + trans[5] + trans[10];
		q1 = sqrt(tt) / 2.0;
		q2 = (trans[9] - trans[6]) / (4 * q1);
		q3 = (trans[2] - trans[8]) / (4 * q1);
		q4 = (trans[4] - trans[1]) / (4 * q1);
	}
	else if (maxv == trans[0]) {
		q2 = sqrt(trans[0]-trans[5]-trans[10]+1) / 2;
		q1 = (trans[9] - trans[6]) / (4 * q2);
		q3 = (trans[2] - trans[8]) / (4 * q1);
		q4 = (trans[4] - trans[1]) / (4 * q1);
	}
	else if (maxv == trans[5]) {
		q3 = sqrt(-trans[0] + trans[5] - trans[10] + 1) / 2;
		q1= (trans[2] - trans[8]) / (4 * q3);
		q2 = (trans[9] - trans[6]) / (4 * q1);
		q4= (trans[4] - trans[1]) / (4 * q1);
	}
	else {
		q4 = sqrt(-trans[0] - trans[5] + trans[10] + 1) / 2;
		q1 = (trans[4] - trans[1]) / (4 * q4);
		q2 = (trans[9] - trans[6]) / (4 * q1);
		q3 = (trans[2] - trans[8]) / (4 * q1);
	}
	quate[0] = q1;
	quate[1] = q2;
	quate[2] = q3;
	quate[3] = q4;
}

//数组形式向量点乘
double dot(double* v1, double* v2,int n) {
	double res = 0;
	for (int i = 0; i < n; ++i)
		res += v1[i] * v2[i];
	return res;
}

//数组形式向量求模
double len(double* v,int n) {
	double res = 0;
	for (int i = 0; i < n; ++i)
		res += v[i] * v[i];
	return sqrt(res);
}

//斯密特正交化辅助函数
void fun(double* v1, double* v2,double* res,int n) {
	double l = len(v2, 3);
	double t = dot(v1, v2, n) / (l*l);
	for (int i = 0; i < n; i++)
		res[i] = t*v2[i];
}

//数组形式向量归一化
void normalize(double* v, int n) {
	double l = len(v, n);
	for (int i = 0; i < n; ++i)
		v[i] = v[i] / l;
}

//斯密特正交化
void orth_normal(double* mat) {
	double m[3][3];
	m[0][0] = mat[0];
	m[0][1] = mat[4];
	m[0][2] = mat[8];

	m[1][0] = mat[1];
	m[1][1] = mat[5];
	m[1][2] = mat[9];

	m[2][0] = mat[2];
	m[2][1] = mat[6];
	m[2][2] = mat[10];

	normalize(m[0],3);

	double r[3];
	fun(m[1], m[0], r, 3);
	for (int i = 0; i < 3; ++i)
		m[1][i] -= r[i];
	normalize(m[1], 3);

	double r1[3];
	fun(m[2], m[0], r, 3);
	fun(m[2], m[1], r1, 3);
	for (int i = 0; i < 3; ++i)
		m[2][i] = m[2][i] - r[i] - r1[i];
	normalize(m[2], 3);

	mat[0]= m[0][0];
	mat[4] = m[0][1];
	mat[8] = m[0][2];

	mat[1] = m[1][0];
	mat[5] = m[1][1];;
	mat[9] = m[1][2];

	mat[2] = m[2][0];
	mat[6] = m[2][1];
    mat[10]= m[2][2];
}

//旋转矩阵转欧拉角
void T_to_euler(MatrixXd T, double* euler) {
	euler[0] = atan2(T(2, 1), T(2, 2))*180/pi;
	euler[1] = atan2(-T(2, 0), sqrt(T(2, 1)*T(2,1)+ T(2, 2)*T(2,2)))*180/pi;
	euler[2] = atan2(T(1,0),T(0,0))*180/pi;
	euler[3] = T(0, 3);
	euler[4] = T(1, 3);
	euler[5] = T(2, 3);
}

//齐次变换矩阵求逆
MatrixXd inv_T(MatrixXd &T) {
	MatrixXd R = T.block(0, 0, 3, 3).transpose();
	MatrixXd P = -R*T.block(0, 3, 3, 1);
	MatrixXd res(4, 4);
	res.setIdentity();
	res.block(0, 3, 3, 1) = P;
	res.block(0, 0, 3, 3) = R;
	return res;
}


//齐次变换矩阵转四元数
//quate:double[7]
void t_to_q(MatrixXd &T, double* quate) {
	//特殊情况处理
	double e = 0.0001;
	if (abs(T(0, 0)) <= e && abs(T(0, 1)) <= e && abs(T(0, 2)-1) <= e && abs(T(1, 0)-1) <= e && abs(T(1, 1)) <= e && abs(T(1, 2)) <=e && abs(T(2, 0)) <= e && abs(T(2, 1)-1) <= e && abs(T(2, 2)) <= e) {
		quate[0] = 0.5;
		quate[1] = 0.5;
		quate[2] = 0.5;
		quate[3] = 0.5;
		return;
	}
	/*-1 0 0
	  0 0 1 
	  0 1 0*/
	if (abs(T(0, 0)+1) <= e && abs(T(0, 1)) <= e && abs(T(0, 2)) <= e && abs(T(1, 0) ) <= e && abs(T(1, 1)) <= e && abs(T(1, 2)-1) <= e && abs(T(2, 0)) <= e && abs(T(2, 1) - 1) <= e && abs(T(2, 2)) <= e) {
		quate[0] = 0;
		quate[1] = 0;
		quate[2] = -0.70711;
		quate[3] = -0.70711;
		return;
	}

	/*
	 0 1 0
	-1 0 0 
	 0 0 1
	*/
	if (abs(T(0, 0)) <= e && abs(T(0, 1)-1) <= e && abs(T(0, 2)) <= e && abs(T(1, 0)+1) <= e && abs(T(1, 1)) <= e && abs(T(1, 2)) <= e && abs(T(2, 0)) <= e && abs(T(2, 1)) <= e && abs(T(2, 2)-1) <= e) {
		quate[0] = 0.70711;
		quate[1] = 0;
		quate[2] = 0;
		quate[3] = -0.70711;
		return;
	}
	/*
	0 1 0
	0 0 1
	1 0 0
	*/
	if (abs(T(0, 0)) <= e && abs(T(0, 1)-1) <= e && abs(T(0, 2)) <= e && abs(T(1, 0)) <= e && abs(T(1, 1)) <= e && abs(T(1, 2)-1) <= e && abs(T(2, 0)-1) <= e && abs(T(2, 1)) <= e && abs(T(2, 2)) <= e) {
		quate[0] = 0.5;
		quate[1] = -0.5;
		quate[2] = -0.5;
		quate[3] = -0.5;
		return;
	}
	//------------------------
	/*
	0 -1 0
	0 0 1
	-1 0 0
	*/
	if (abs(T(0, 0)) <= e && abs(T(0, 1)+1) <= e && abs(T(0, 2)) <= e && abs(T(1, 0)) <= e && abs(T(1, 1)) <= e && abs(T(1, 2)-1) <= e && abs(T(2, 0)+1) <= e && abs(T(2, 1)) <= e && abs(T(2, 2)) <= e) {
		quate[0] = 0.5;
		quate[1] = -0.5;
		quate[2] = 0.5;
		quate[3] = 0.5;
		return;
	}
	/*
	0 -1 0
	-1 0 0
	0 0 -1
	*/
	if (abs(T(0, 0)) <= e && abs(T(0, 1)+1) <= e && abs(T(0, 2)) <= e && abs(T(1, 0) + 1) <= e && abs(T(1, 1)) <= e && abs(T(1, 2)) <= e && abs(T(2, 0)) <= e && abs(T(2, 1)) <= e && abs(T(2, 2)+1) <= e) {
		quate[0] = 0;
		quate[1] = 0.70711;
		quate[2] = 0.70711;
		quate[3] = 0;
		return;
	}
	/*
	0 -1 0
	1 0 0
	0 0 1
	*/
	if (abs(T(0, 0)) <= e && abs(T(0, 1)+1 ) <= e && abs(T(0, 2)) <= e && abs(T(1, 0)-1 ) <= e && abs(T(1, 1)) <= e && abs(T(1, 2)) <= e && abs(T(2, 0)) <= e && abs(T(2, 1)) <= e && abs(T(2, 2) - 1) <= e) {
		quate[0] = 0.70711;
		quate[1] = 0;
		quate[2] = 0;
		quate[3] = 0.70711;
		return;
	}
	/*
	1 0 0
	0 0 1
	0 -1 0
	*/
	if (abs(T(0, 0)-1) <= e && abs(T(0, 1) <= e && abs(T(0, 2)) <= e && abs(T(1, 0)) <= e && abs(T(1, 1)) <= e && abs(T(1, 2)-1) <= e && abs(T(2, 0)) <= e && abs(T(2, 1)+1) <= e && abs(T(2, 2)) <= e)) {
		quate[0] = 0.70711;
		quate[1] = -0.70711;
		quate[2] = 0;
		quate[3] = 0;
		return;
	}
	/*
	1 0 0
	0 0 1
	0 -1 0
	*/
	if (abs(T(0, 0) - 1) <= e && abs(T(0, 1) <= e && abs(T(0, 2)) <= e && abs(T(1, 0)) <= e && abs(T(1, 1)) <= e && abs(T(1, 2) - 1) <= e && abs(T(2, 0)) <= e && abs(T(2, 1) + 1) <= e && abs(T(2, 2)) <= e)) {
		quate[0] = 0.70711;
		quate[1] = -0.70711;
		quate[2] = 0;
		quate[3] = 0;
		return;
	}
	/*
	1 0 0
	0 -1 0
	0 0 -1
	*/
	if (abs(T(0, 0) - 1) <= e && abs(T(0, 1) <= e && abs(T(0, 2)) <= e && abs(T(1, 0)) <= e && abs(T(1, 1)+1) <= e && abs(T(1, 2) ) <= e && abs(T(2, 0)) <= e && abs(T(2, 1)) <= e && abs(T(2, 2)+1) <= e)) {
		quate[0] = 0;
		quate[1] = 1;
		quate[2] = 0;
		quate[3] = 0;
		return;
	}
	/*
	1 0 0
	0 1 0
	0 0 1
	*/
	if (abs(T(0, 0) - 1) <= e && abs(T(0, 1) <= e && abs(T(0, 2)) <= e && abs(T(1, 0)) <= e && abs(T(1, 1) - 1) <= e && abs(T(1, 2)) <= e && abs(T(2, 0)) <= e && abs(T(2, 1)) <= e && abs(T(2, 2) - 1) <= e)) {
		quate[0] = 1;
		quate[1] = 0;
		quate[2] = 0;
		quate[3] = 0;
		return;
	}


	
	double q1, q2, q3, q4, tt, m, t;
	tt = 1 + T(0, 0) + T(1, 1) + T(2, 2);

	if (abs(tt) > 1.0e-5) {
		q1 = sqrt(tt) / 2.0;
		q2 = (T(2, 1) - T(1, 2)) / (4 * q1);
		q3 = (T(0, 2) - T(2, 0)) / (4 * q1);
		q4 = (T(1, 0) - T(0, 1)) / (4 * q1);
	}
	else {
		m = max(max(T(0, 0), T(1, 1)), T(2, 2));
		if (m == T(0, 0)) {
			t = sqrt(1 + T(0, 0) - T(1, 1) - T(2, 2));
			q1 = (T(2, 1) - T(1, 2)) / t;
			q2 = t / 4;
			q3 = (T(0, 2) + T(2, 0)) / t;
			q4 = (T(0, 1) + T(1, 0)) / t;
		}

		if (m == T(1, 1)) {
			t = sqrt(1 - T(0, 0) + T(1, 1) - T(2, 2));
			q1 = (T(0, 2) - T(2, 0)) / t;
			q2 = (T(0, 1) + T(1, 0)) / t;
			q3 = t / 4;
			q4 = (T(2, 1) + T(1, 2)) / t;
		}

		if (m == T(2, 2)) {
			t = sqrt(1 - T(0, 0) - T(1, 1) + T(2, 2));
			q1 = (T(1, 0) - T(0, 1)) / t;
			q2 = (T(0, 2) + T(2, 0)) / t;
			q3 = (T(1, 2) - T(2, 1)) / t;
			q4 = t / 4;
		}
	}
	quate[0] = q1;
	quate[1] = q2;
	quate[2] = q3;
	quate[3] = q4;
}

//四元数转齐次变换矩阵
//q:double[7]
MatrixXd q_to_t(double* q) {
	double w = q[0];
	double x = q[1];
	double y = q[2];
	double z = q[3];
	MatrixXd T(4, 4);
	T.setIdentity();
	T(0, 0) = 1 - 2 * y *y - 2 * z *z;
	T(0, 1) = 2 * x * y - 2 * w * z;
	T(0, 2) = 2 * x * z + 2 * w * y;
	T(1, 0) = 2 * x * y + 2 * w * z;
	T(1, 1) = 1 - 2 * x *x - 2 * z *z;
	T(1, 2) = 2 * y * z - 2 * w * x;
	T(2, 0) = 2 * x * z - 2 * w * y;
	T(2, 1) = 2 * y * z + 2 * w * x;
	T(2, 2) = 1 - 2 * x *x - 2 * y *y;
	T(0, 3) = q[4];
	T(1, 3) = q[5];
	T(2, 3) = q[6];
	delete q;
	return T;
}

//计算四元数位置距离
//q[7]
double cal_d(double* q1, double*q2) {
	double d = 0;
	for (int i = 4; i < 7; i++)
		d += (q1[i] - q2[i])*(q1[i] - q2[i]);
	return sqrt(d);
}