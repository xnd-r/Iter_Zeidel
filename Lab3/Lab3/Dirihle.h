#pragma once
#include <iostream>
#include <cmath>
#include <string>

double h; //step_x
double k; //step_y
int N; 
double *x; 
double *y; 
double xni; 
double yni; 
double eps;
double a, b, c, d; // boards of grid
double **vn; 

int i = 0; 
int j = 0;
double eps_max; 
double eps_cur;
int S;
double v_old;
double v_new;
bool f;
double a2;
double h2;
double k2;
double n, m;
double **fun;
	
namespace task_dir {

void _init(int _n, double a_1, double b_1,
		double c_1, double d_1, int _dim_n, int _m, double _toch)
	{
	N = _n;
	n = _dim_n;
	m = _m;
	a = a_1;
	b = b_1;
	c = c_1;
	d = d_1;
	h = (double)((b - a) / n);
	k = (double)((d - c) / m);
	x = new double[n + 1];
	y = new double[m + 1];
	vn = new double*[n + 1];
	fun = new double*[n + 1];
	xni = a_1;
	yni = c_1;
	eps_max = 0;
	eps_cur = 0;
	S = 0;
	f = false;
	h2 = 0;
	k2 = 0;
	a2 = 0;
	eps = _toch;
	v_old = 0;
	v_new = 0;

	for (int i = 0; i < _m + 1; i++)
	{
		y[i] = 0;

	}
	for (int i = 0; i < _dim_n + 1; i++)
	{
		vn[i] = new double[m + 1];
		fun[i] = new double[m + 1];
		x[i] = 0;
		for (int j = 0; j < _m + 1; j++)
		{
			vn[i][j] = 0;
			fun[i][j] = 4;
		}

	}
}
void zeidel()
{
	int ind1, ind2;
	h2 = -pow((n / (b - a)), 2);
	k2 = -pow((m / (d - c)), 2);
	a2 = -2 * (h2 + k2);
	while (!f)
	{
		eps_max = 0;
		for (ind2 = 1; ind2 < m; ind2++)
			for (ind1 = 1; ind1 < n; ind1++)
			{
				v_old = vn[ind1][ind2];
				v_new = -(h2*(vn[ind1 + 1][ind2] + vn[ind1 - 1][ind2]) 
					+ k2*(vn[ind1][ind2 + 1] + vn[ind1][ind2 - 1]));
				v_new = v_new + fun[ind1][ind2];
				v_new = v_new / a2;
				eps_cur = fabs(v_old - v_new);
				if (eps_cur > eps_max)
				{
					eps_max = eps_cur;
				}
				vn[ind1][ind2] = v_new;
			}
		S++;
		if ((eps_max < eps) || (S >= N))
		{
			f = true;
		}
	}
}

void edge(double xn, double yn)
{
	int zz = m;
	int z = n;
	for (int i = 0; i < n + 1; i++) {
		vn[i][0] = 1 - pow(xn + i*h, 2) - pow(yn, 2);
		vn[i][zz] = 1 - pow(xn + i*h, 2) - pow(yn, 2);
	}
	for (int i = 0; i < m + 1; i++) {
		vn[0][i] = 1 - pow(xn, 2) - pow(yn + i*k, 2);
		vn[z][i] = 1 - pow(xn, 2) - pow(yn + i*k, 2);
	}
}

void edge_2(double xn, double yn)
{
	int zz = m;
	int z = n;
	for (int i = 0; i < n + 1; i++) {
		vn[i][0] = 1 - pow(xn + i*h - 1, 2) - pow(yn - 0.5, 2);
		vn[i][zz] = 1 - pow(xn + i*h - 1, 2) - pow(yn - 0.5, 2);
	}
	for (int i = 0; i < m + 1; i++) {
		vn[0][i] = 1 - pow(xn - 1, 2) - pow(yn + i*k - 0.5, 2);
		vn[z][i] = 1 - pow(xn - 1, 2) - pow(yn + i*k - 0.5, 2);
	}
}

double get_v(int _cur, int _cur_2)
{
	return vn[_cur][_cur_2];
}

}