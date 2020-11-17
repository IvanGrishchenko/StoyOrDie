#pragma once
#include "SODMath.h"

double A[n][n];
double b[n];
double un[n];

double (*y)(double, double);
double yrtrn(double x, double t)
{
	return y(x, t);
}
double (*L)(double, double);
double (*u)(double, double);
double (*Grn)(double, double);
double (*Yr0)(double);
double (*Yrt)(double);
double T_max = 1;//!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
double X_max = 1;
int N_prec = 1;

double ypsd(double x, double t) { return sin(x); }
double upsd(double x, double t) { return (*L)(x, t) * (*y)(x, t); }
double Lpsd(double x, double t) { return x * x + t * t; }
double Grnpsd(double x, double t) { return -1 / 3.14159268 / 2 * log(1 / sqrt(x * x + t * t)); }

double Yrpsd(double x, double t) { return upsd(x, t); }
double Yr0psd(double x) { return L(x, 0) * Yrpsd(x, 0); }
double Yrtpsd(double x) { return L(x, T_max) * Yrpsd(x, T_max); }

double sI(double N, double i) { return (i + 1) / (N + 1); }

void Mgen(unsigned int n, double x)
{
	//A11
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			A[i][j] = Grn(sI(n, j), 0);

	//A12
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			A[i + n][j] = Grn(sI(n, j), 0);

	//A11
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			A[i][j + n] = Grn(sI(n, j), T_max);

	//A12
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			A[i + n][j + n] = Grn(sI(n, j), T_max);

	for (int i = 0; i < n; i++)
		b[i] = Yr0(sI(n, i));

	for (int i = 0; i < n; i++)
		b[i + n] = Yrt(sI(n, i));
}

void pseudoinit()
{
	y = ypsd;
	L = Lpsd;
	u = upsd;
	Yr0 = Yr0psd;
	Yrt = Yrtpsd;
	Grn = Grnpsd;
}

void init()
{
	pseudoinit();
}// TODO MAYBE

double k;
double G(double x) { return Grn(x, k); }

double solve(double x, double t)
{
	Mgen(N_prec, x);

	Gauss(A, b, un, N_prec * 2);
	k = t;
	int xI = x / X_max * N_prec;
	return integral(G, un[xI], N_prec) + integral(G, un[xI + N_prec], N_prec);
}