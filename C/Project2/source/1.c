#include<stdio.h>
sum_odd();

main() {
	int odd = 10;
	printf("10���� ���� ���� ���� �� Ȧ���� �� : %d\n", sum_odd(odd));
}

sum_odd(num) {
	int i, sum = 0;
	for (i = 0; i < num; i++) if (i % 2 == 1) sum += i;
	return (sum);
}