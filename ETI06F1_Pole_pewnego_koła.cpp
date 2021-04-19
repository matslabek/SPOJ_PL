#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdio.h>

using namespace std;
long double policz_promien(long double r, long double d);

int main()
{
	long double r, d;
	cin >> r >> d;
	long double rx = policz_promien(r, d);
	double pole = rx * rx * 3.141592654;
	printf("%.2f \n", pole);
	return 0;
}
long double policz_promien(long double r, long double d)
{
	long double n = (r * r - d * d / 4);
	return sqrt(n);
}
