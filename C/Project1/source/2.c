#include<stdio.h>
main() {
	struct sungjug {
		int no;
		char* name;
		int total;
		float avg;
	};

	typedef struct sungjug SJ;					//struct sungjug ���� SJ�� ����ߴ�. 
												//struct sungjug�� SJ�� ���� �ǹ̷� ����

	SJ student[] = { {10, "���ϳ�",250,83.3} };	//struct sungjug ��� SJ�� �Է�

	printf("%d", student[0].no);
	printf("%10s", student[0].name);
	printf("%8d", student[0].total);
	printf("%10.1f\n", student[0].avg);
}
/*	typedef�� ����ϸ� ���İ� �ĺ����� ������ ������ �ϳ��� �ܾ�� ��Ÿ���� �ִ�. */