1.
#include<stdio.h>
sum_odd();

main() {
	int odd = 10;
	printf("%d\n", sum_odd(odd));
}

sum_odd(num) {
	int i, sum = 0;
	for (i = 0; i < num; i++) if (i % 2 == 1) sum += i;
	return (sum);
}

2.
함수의 선언과 호출

3.
#include<stdio.h>
times_table();

main() {
	int x;

	printf("times table x\n");
	printf("insert x value : "); scanf("%d", &x);

	times_table(x);
}

times_table(int a) {
	int i;
	for (i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", a, i, a*i);
}

4.


1)

#include<stdio.h>
double volume(double, double);
main() {
	double d = 2.5;
	printf("%f", volume(d / 2, 3.5);
}
double volume(r, h)
double r, h;
{
	return(3.14*r*r*h);
}


1_fixed)

#include<stdio.h>
double volume(double, double);
main() {
	double d = 2.5;
	printf("%f", volume(d / 2, 3.5));	// ')'가 하나 부족했다
}
double volume(r, h)
double r, h;
{
	return(3.14*r*r*h);
}


2)

#include<stdio.h>
double volume(double *, double, double);
main() {
	double d = 2.5, h=3.5, v;
	volume(&v, d / 2, h);
	printf("%f", v);
}
void volume(v,r, h)
double *v, r, h; {
	v = 3.14*r*r*h;
}


2_fixed)

#include<stdio.h>
double volume(double *, double, double);
main() {
	double d = 2.5, h=3.5, v;
	volume(&v, d / 2, h);
	printf("%f", v);
}
double volume(v ,r , h)		//변수 형식을 double로 통일
double *v, r, h; {
	*v = 3.14*r*r*h;
/*다른 두 함수는 인수의 표현이 같아도 영향을 주지 않는다.*/
/*mian 함수의 실인수 v에 함수 volume의 가인수 v값을 대입하려면 
포인터 v가 가리키는 주소에 간접참조로 대입해야 한다.*/
}


7.
#include<stdio.h>
inequal(float);
main() {
	float a;

	while (1) {
		printf("1000미만의 유리수를 입력하시오 : "); scanf("%f", &a);
		if (a == 999) break;

		inequal(a);
	}
}
inequal(float f) {
	if (f <= 20.0)printf("a의 값은 20 이하입니다.\n");
	if (f >= 20.0)printf("a의 값은 20 이상입니다.\n");
}


8.
#include<stdio.h>
struct student {
	int no;
	char name[20];
	int score;
};
void rank(struct student *);
main() {
	int i;
	struct student stu[4];

	printf("4명의 성적을 입력하세요");
	for (i = 0; i < 4; i++) {
		printf("%d번째의 학번 이름 점수 => ", i+1);
		scanf("%d%s%d", &stu[i].no, stu[i].name, &stu[i].score);
	}
	printf("\n");

	rank(stu);
	printf("최고 점수 : %d %s %d\n", stu[0].no, stu[0].name, stu[0].score);
	printf("최하 점수 : %d %s %d\n", stu[3].no, stu[3].name, stu[3].score);
	printf("\n");
}
void rank(struct student *r) {
	int i, j;
	printf("%d %s %d\n", r[0].no, r[0].name, r[0].score);
	printf("%d %s %d\n", r[1].no, r[1].name, r[1].score);
	printf("%d %s %d\n", r[2].no, r[2].name, r[2].score);
	printf("%d %s %d\n", r[3].no, r[3].name, r[3].score);
}

8.txt
111 임꺽정 78
112 홍길동 89
113 최일수 98
114 김두수 84