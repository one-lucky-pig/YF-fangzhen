
#include "trajectory_planning.h"


//考虑末端速度和关节速度限制，计算时间间隔
vector<double> cal_t_v(vector<MatrixXd> &space_data, vector<double*> &joint_data, double vmax,Robot *robot) {
	double* joint_v_lim = robot->joint_v_lim;
	assert(space_data.size() == joint_data.size());
	vector<double> T;
	MatrixXd L1, L2;
	double *J1, *J2;
	double maxt,t,ds;
	for (int i = 0; i < space_data.size()-1; i++) {
		L1 = space_data[i].block(0, 3, 3, 1);
		L2 = space_data[i+1].block(0, 3, 3, 1);
		J1 = joint_data[i];
		J2 = joint_data[i + 1];
		
		ds = (L1 - L2).norm();
		maxt = ds / vmax;
		for (int j = 0; j < 6; j++) {
			t = abs(J1[j] - J2[j]) / joint_v_lim[j];
			maxt = max(maxt, t);
		}
		T.push_back(maxt);
	}
	return T;
}

double find_t1(double dq1, double dq2, double dt1, double dt2, double amax) {
	double mult_factor = 1.01;
	double v1 = dq1 / dt1;
	double v2 = dq2 / dt2;
	double a = 2 * (v2 - v1) / (dt1 + dt2);
	while (abs(a) > amax) {
		v1 = dq1 / dt1;
		v2 = dq2 / dt2;
		a = 2 * (v2 - v1) / (dt1 + dt2);
		dt1 *= mult_factor;
	}
	return dt1;
}

double find_t2(double dq1, double dq2, double dt1, double dt2, double amax) {
	double mult_factor = 1.01;
	double v1 = dq1 / dt1;
	double v2 = dq2 / dt2;
	double a = 2 * (v2 - v1) / (dt1 + dt2);
	while (abs(a) > amax) {
		v1 = dq1 / dt1;
		v2 = dq2 / dt2;
		a = 2 * (v2 - v1) / (dt1 + dt2);
		dt2 *= mult_factor;
	}
	return dt2;
}


// 考虑关节加速度限制，计算更新时间间隔
void cal_t_a(vector<double*> &joint_data, vector<double> &time_diff,int max_iteration,Robot *robot) {
	double* amax = robot->joint_a_lim;
	int num_updates = 0;
	int iteration = 0;
	bool backwards = false;
	double q1;
	double q2;
	double q3;
	double dt1;
	double dt2;
	double v1;
	double v2;
	double a;
	int num_joints = 6;
	int num_points = joint_data.size();
	int index, cur, prev, next;
	do
	{
		num_updates = 0;
		iteration++;
		for (unsigned int j = 0; j < num_joints; ++j)
		{
			// Loop forwards, then backwards
			for (int count = 0; count < 2; ++count)
			{
				for (int i = 0; i < num_points - 1; ++i)
				{
					index = backwards ? (num_points - 1) - i : i;
					cur = index;
					if (index > 0)
						prev = index - 1;
					if (index < num_points - 1)
						next = cur + 1;

					if (index == 0)
					{
						// First point
						q1 = joint_data[next][j];
						q2 = joint_data[cur][j];
						q3 = joint_data[next][j];
						dt1 = dt2 = time_diff[index];
						assert(!backwards);
					}
					else if (index < num_points - 1)
					{
						// middle points
						q1 = joint_data[prev][j];
						q2 = joint_data[cur][j];
						q3 = joint_data[next][j];
						dt1 = time_diff[index - 1];
						dt2 = time_diff[index];
					}
					else
					{
						// last point - careful, there are only numpoints-1 time intervals
						q1 = joint_data[prev][j];
						q2 = joint_data[cur][j];
						q3 = joint_data[prev][j];
						dt1 = dt2 = time_diff[index - 1];
						assert(backwards);
					}

					if (dt1 == 0.0 || dt2 == 0.0)
					{
						v1 = 0.0;
						v2 = 0.0;
						a = 0.0;
					}
					else
					{
						v1 =(q2 - q1) / dt1;
						v2 = (q3 - q2) / dt2;
						a = 2.0 * (v2 - v1) / (dt1 + dt2);
					}

					if (fabs(a) >amax[j])
					{
						if (!backwards)
						{
							dt2 = find_t2(q2 - q1, q3 - q2, dt1, dt2, amax[j]);
							time_diff[index] = dt2;
						}
						else
						{
							dt1 = find_t1(q2 - q1, q3 - q2, dt1, dt2, amax[j]);
							time_diff[index - 1] = dt1;
						}
						num_updates++;

						if (dt1 == 0.0 || dt2 == 0.0)
						{
							v1 = 0.0;
							v2 = 0.0;
							a = 0.0;
						}
						else
						{
							v1 = (q2 - q1) / dt1;
							v2 = (q3 - q2) / dt2;
							a = 2 * (v2 - v1) / (dt1 + dt2);
						}
					}
				}
				backwards = !backwards;
			}
		}
	} while (num_updates > 0 && iteration <max_iteration);
}


vector<double> cal_t(vector<MatrixXd> &space_data, vector<double*> &joint_data, double vmax,Robot *robot) {
	vector<double> t = cal_t_v(space_data, joint_data, vmax, robot);
	cal_t_a(joint_data, t, 20,robot);
	return t;
}

vector<double> cal_v(vector<MatrixXd> &space_data, vector<double> &t) {
	vector<double> v;
	MatrixXd L1, L2;
	double ds;
	for (int i = 0; i < space_data.size()-1; i++) {
		L1 = space_data[i].block(0, 3, 3, 1);
		L2 = space_data[i+1].block(0, 3, 3, 1);
		ds = (L1 - L2).norm();
		v.push_back(ds / t[i]);
	}
	return v;
}



