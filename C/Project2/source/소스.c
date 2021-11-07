#include<stdio.h>
FILE* lorenz;
double fx(double, double);
double fy(double, double, double);
double fz(double, double, double);
double k2(double, double);
double k3(double, double);
double k4(double, double);
main() {
	double t, h = 0.1, x = 1 , y = 5 , z = 10, k1;

	for (t = 0; t <= 100; t = t + h) {
		k1 = h * fx(x, y);
		k1 = h * fy(x, y, z);
		k1 = h * fz(x, y, z);
		lorenz = fopen("lorenz.txt", "w");
		fprintf(lorenz, "%f, %f, %f, %f", t, x, y, z);
	}
}
double fx(x, y);
{
	fx = -10 * x - 10 * y;
}
double fy(x, y, z);
double x, y, z;
{
	return(-x*z + 28*x - y);
}
double fz(x, y, z)
double x, y, z;
{
	return(x*y - 8/3*z);
}
double k2(a, h);
double a, h, k1;
{

}