#pragma once
#include "cmath"
const int n = 1000;
void Gauss(double A[n][n], double b[n], double res[n], int m);
double integral(double (*f1)(double), double f2, double c);
