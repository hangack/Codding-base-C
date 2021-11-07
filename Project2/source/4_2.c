#include<stdio.h>
double volume(double*, double, double);
main() {
	double d = 2.5, h = 3.5, v;
	volume(&v, d / 2, h);
	printf("%f", v);
}
double volume(v, r, h)		//변수 형식을 double로 통일
double* v, r, h; {
	*v = 3.14 * r * r * h;
	/*다른 두 함수는 인수의 표현이 같아도 영향을 주지 않는다.*/
	/*mian 함수의 실인수 v에 함수 volume의 가인수 v값을 대입하려면
	포인터 v가 가리키는 주소에 간접참조로 대입해야 한다.*/
}