#include<stdio.h>
#include<time.h>
main() {
	int max = 50000;
	int i, j;
	int x;
	long int current_time;
	current_time = time(0);
	for (i = 0; i < max; i++) {
		for (j = 0; j < max; j++)
			x = 55;
	}
	printf("자동 변수로 이용했을 때의 루프 소요 시간 = %ld초\n", time(0) - current_time);
	{
		register int i, j;
		int x;
		current_time = time(0);
		for (i = 0; i < max; i++) {
			for (j = 0; j < max; j++)
				x = 55;
		}
		printf("레지스터 변수로 이용했을 때의 루프 소요 시간 =%ld초\n", time(0) - current_time);
	}
}