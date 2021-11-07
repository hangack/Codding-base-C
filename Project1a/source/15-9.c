#include<stdio.h>
FILE* data;
struct score {
	int num;
	char name[10];
	int subject[2];
	int sum;
	float avg;
};
struct ranking {
	struct score Rscore;
	int r;
	char R;
};

main() {
	int i, j;
	struct score temp;
	struct score score1[11];
	struct ranking rank[11];


	data = fopen("ex9.txt", "r"); {
		fscanf(data, "%d*c", &score1[i].num);
		fscanf(data, "%s*c", score1[i].name);
		fscanf(data, "%d*c", &score1[i].subject[1]);
		fscanf(data, "%d*c", &score1[i].subject[2]);
	}
	fclose(data);
	printf("44");

	for (i = 0;i<11; i++) {
		if (score1[i].num == 9999) break;
		score1[i].sum = score1[i].subject[1] + score1[i].subject[2];
		score1[i].avg = score1[i].sum / 2.0;
	}

	printf("				성				적				표			\n");
	printf("==============================================================\n");
	printf("학번	이름	국어	영어	합계	평균	석차	등급\n");
	printf("==============================================================\n");
	for (i = 0;i<11; i++) {
		if (score1[i].num == 9999) break;
		printf("%d	%s	%d	%d	%d	%4.2f");
	}
}