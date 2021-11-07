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
		printf("%d * %d = %d\n", a, i, a * i);
}