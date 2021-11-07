3.
#include<stdio.h>
main() {
	int i;
	for (i = 1; i <= 2; i++) {
		static int x = 1;

		printf("%d\n", x);

		x = 2;
	}
}
static을 삭제하면 변수 x의 동적할당이 정적할당에서 동적할당으로 바뀌어 변수 x가 선언된 { }를 탈출하고 난 뒤엔
변수 x의 변화를 기억하지 않고 유지하는데 사용됐던 범위를 다른 영역에 사용한다.


4.
#include<stdio.h>
#include<time.h>

main() {
	int max = 100000
	int i, j;
	int x;
	long int current_time;
	current_time = time(0);

	for (i = 0; i < max; i++) {
		for (j = 0; j < max; j++)
			x = 55;
	}
	printf("자동 변수로 이용했을 때의 루프 소요 시간 = %ld sec\n", time(0) - current_time);
	{

		register int i, j;
		int x;
		current_time = time(0);
		for (i = 0; i < max; i++) {
			for (j = 0; j < max; j++)
				x = 55;
		}
		printf("레지스터 변수로 이용했을 때의 루프 소요 시간 = %ld sec\n", time(0) - current_time);
	}
}


50000 일때 : 5, 5
100000일때 : 22, 20
루프 횟수가 커질 수록 동작 속도에서 차이를 보여 cpu 동작 메모리를 사용하는 레지스터 변수가 미묘하게 앞서나가기 사작한다.
max 값이 클수록 루프를 마무리 하는대 걸리는 시간이 기하급수적으로 늘어나기 때문에
빅데이터같은 자료 활용에 있어서 루프를 수행하는데 있어서는 레지스터 변수를 사용함이 바람직하다.


5.
#include<stdio.h>
char *test(void);
char name[8] = "123456";
void main(void) {
	printf("%s\n", test());

	*(test() + 1) = 'A';

	printf("%s\n", test());

	*(test() + 2) = 'A';

	printf("%s\n", test());
}
char*test(void)
{
	return(name);
}


6.
#include<stdio.h>

f();
ff();

static int x = 300;

main() {
	auto int x = 200;

	f();
	ff();
	printf("초기의 x = %d\n", x);
}

f() {
	x += 100;
	printf("함수 1의 x = %d\n", x);
}

ff() {
	auto int x = 10;
	printf("함수 2의 x = %d\n", x);
}


전영역 300
main	300->200
f	300->(+100) 400
ff	300->10