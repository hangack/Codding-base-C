#include<stdio.h>

struct jumsu {
	int num;
	char name[10];
	int subject[3];
	int sum;
	float avg;
};
struct ranking {
	int R;
	struct jumsu Rjumsu;
};

main() {
	int i, j;
	struct jumsu temp;
	struct jumsu sungjug[5] = { {2001,"�̳���",24,11,41},
								{2002,"�ֹμ�",32,52,22},
								{2003,"������",32,43,32},
								{2004,"�����",41,14,24},
								{2005,"��̳�",51,15,11}, };
	struct ranking rank[5];

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 3; j++)
			sungjug[i].sum += sungjug[i].subject[j];
		sungjug[i].avg = sungjug[i].sum / 3.0;
	}

	printf("\n\n-------------���� ���� ��-------------\n\n");
	printf("��ȣ	�̸�	����	����	�հ�	���\n");
	printf("-------------------------------------\n");
	for (i = 0; i < 5; i++) {
		printf("%d %s %4d %4d %4d %5d %8.2f\n", sungjug[i].num, sungjug[i].name, sungjug[i].subject[0], sungjug[i].subject[1], sungjug[i].subject[2], sungjug[i].sum, sungjug[i].avg);
	}
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (sungjug[i].sum < sungjug[j].sum) {
				temp = sungjug[i];
				sungjug[i] = sungjug[j];
				sungjug[j] = temp;
			}

		}
		rank[i].Rjumsu = sungjug[j];
	}

	printf("\n\n-------------���� ���� ��-------------\n\n");
	printf("��ȣ	�̸�	����	����	�հ�	���\n");
	printf("-------------------------------------\n");
	for (i = 0; i < 5; i++) {
		printf("%d %s %4d %4d %4d %5d %8.2f\n", sungjug[i].num, sungjug[i].name, sungjug[i].subject[0], sungjug[i].subject[1], sungjug[i].subject[2], sungjug[i].sum, sungjug[i].avg);
	}
}