#include<stdio.h>
double volume(double*, double, double);
main() {
	double d = 2.5, h = 3.5, v;
	volume(&v, d / 2, h);
	printf("%f", v);
}
double volume(v, r, h)		//���� ������ double�� ����
double* v, r, h; {
	*v = 3.14 * r * r * h;
	/*�ٸ� �� �Լ��� �μ��� ǥ���� ���Ƶ� ������ ���� �ʴ´�.*/
	/*mian �Լ��� ���μ� v�� �Լ� volume�� ���μ� v���� �����Ϸ���
	������ v�� ����Ű�� �ּҿ� ���������� �����ؾ� �Ѵ�.*/
}