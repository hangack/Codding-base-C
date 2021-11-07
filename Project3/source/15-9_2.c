#include<stdio.h>
struct score {
	int num;
	char name[10];
	int kor;
	int eng;
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
	struct score score1[10] = {
{1111, "홍길동", 82, 91},
{1112, "이철수", 75, 29},
{1113, "박인비", 88, 75},
{1114, "안신애", 50, 62},
{1115, "최우즈", 70, 56},
{1116, "박주원", 96, 98},
{1117, "이보미", 75, 90},
{1118, "서로원", 88, 82},
{1119, "김영희", 82, 88},
{1120, "박가원", 91, 99}
	};
	struct ranking rank[10];


	for (i = 0; i < 10; i++) {
		score1[i].sum = score1[i].kor + score1[i].eng;
		score1[i].avg = score1[i].sum / 2.0;
		rank[i].Rscore = score1[i];
	}

	for (i = 0; i < 10; i++) {
		for (j = i + 1; j < 10; j++) {
			if (rank[i].Rscore.sum < rank[j].Rscore.sum) {
				temp = rank[i].Rscore;
				rank[i].Rscore = rank[j].Rscore;
				rank[j].Rscore = temp;
			}
		}
	}
	for (i = 0; i < 10; i++) {
		rank[i].r = i + 1;
		if (rank[i].Rscore.avg >= 90.0)rank[i].R = 'A';
		else if (rank[i].Rscore.avg >= 80.0)rank[i].R = 'B';
		else if (rank[i].Rscore.avg >= 70.0)rank[i].R = 'C';
		else if (rank[i].Rscore.avg >= 60.0)rank[i].R = 'D';
		else rank[i].R = 'F';
	}
	printf("		성		적		표\n");
	printf("==============================================================\n");
	printf("학번	이름	국어	영어	합계	평균	석차	등급\n");
	printf("==============================================================\n");
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			if (rank[j].Rscore.num == i+1111)
				printf("%d	%s	%d	%d	%d	%3.1f	%d	%c\n", rank[j].Rscore.num, rank[j].Rscore.name, rank[j].Rscore.kor, rank[j].Rscore.eng, rank[j].Rscore.sum, rank[j].Rscore.avg, rank[j].r, rank[j].R);
		}
	}
	printf("==============================================================\n");
	printf("최고 득점 : %d  %s  %4.1f\n", rank[1 - 1].Rscore.num, rank[1 - 1].Rscore.name, rank[1 - 1].Rscore.avg);
	printf("최저 득점 : %d  %s  %4.1f\n", rank[i - 1].Rscore.num, rank[i - 1].Rscore.name, rank[i - 1].Rscore.avg);
}