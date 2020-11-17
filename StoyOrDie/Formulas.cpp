#pragma once
#include "Formulas.h"

void Gauss(double A[n][n], double b[n], double res[n], int m)
{
	int i = 0;
	int j = 0;
	int k = 0;
	double z = 0;
	int l1, l2 = 0;
	while (i < m)
	{
		z = A[i][i];
		while (j < m)
		{
			A[i][j] /= z;
			j++;
		}
		b[i] /= z;
		j = i + 1;
		k = i;
		while (j < m)
		{
			l1 = j;
			l2 = k;
			z = A[l1][l2];
			while (k < m)
			{
				A[j][k] -= A[i][k] * z;
				k++;
			}
			b[j] -= b[i] * z;
			k = i;
			j++;
		}
		i++;
		j = i;
	}
	i = m - 1;
	j = m - 1;
	while (i >= 0)
	{
		res[i] = b[i];
		while (j < m - 1)
		{
			res[i] -= A[i][j + 1] * res[j + 1];
			j++;
		}
		i--;
		j = i;
	}
}



/*double f(double x)
{
	return (x - x * x * sin(x / 3) * cos(2 * x / 5) - log(abs(x) + abs(x + 1)));
}*/



/*double findmax(double a, double b)
{
	const int N = 100;
	double h = (b - a) / N;
	int i = 0;
	double res = f(a);
	while (i < N)
	{
		a += h;
		if (f(a) > res)
		{
			res = f(a);
		}
		i++;
	}
	return res;
}*/



/*double findmin(double a, double b)
{
	const int N = 100;
	double h = (b - a) / N;
	int i = 0;
	double res = f(a);
	while (i < N)
	{
		a += h;
		if (f(a) < res)
		{
			res = f(a);
		}
		i++;
	}
	return res;
}*/






//Сюда наши G и u
/*double f(double x)
{
	return (x - x * x * sin(x / 3) * cos(2 * x / 5) - log(abs(x) + abs(x + 1)));
}

double u(double x)
{
	return (8 * x * x * sin(x) - log(abs(x)));
}*/

//Сам интеграл
double integral(double (*f1)(double), double f2, double c)
{
	double summ = 0;
	int i = 0;
	const int eps = 100000;
	double a = c / eps;
	while (i < eps)
	{
		summ += (a)*f1((i + 1 - (1. / eps)) * a) * f2;
		i++;
	}
	return summ;
}

/*//Тест на (0;2)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i = 0;
	double(*f1)(double) = f;
	double(*f2)(double) = u;
	cout << integral(f1, f2, 2);
	cin >> i;
	return 0;
}*/