#include<stdio.h>
double volume(double, double);
main() {
	double d = 2.5;
	printf("%f", volume(d / 2, 3.5));	// ')'�� �ϳ� �����ߴ�
}
double volume(r, h)
double r, h;
{
	return(3.14 * r * r * h);
}