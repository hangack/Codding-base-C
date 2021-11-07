#include<stdio.h>
struct student {
	int no;
	char name[20];
	int score;
};
void rank(struct student*);
main() {
	int i;
	struct student stu[4];

	printf("4명의 성적을 입력하세요\n");
	for (i = 0; i < 4; i++) {
		printf("%d번째의 학번 이름 점수 => ", i + 1);
		scanf("%d%s%*c%d%*c", &stu[i].no, stu[i].name, &stu[i].score);
	}
	printf("\n");

	rank(stu);
	printf("최고 점수 : %d %s %d\n", stu[0].no, stu[0].name, stu[0].score);
	printf("최하 점수 : %d %s %d\n", stu[3].no, stu[3].name, stu[3].score);
	printf("\n");
}
void rank(struct student *r) {
	int i, j;
	struct student temp;
	for (i = 0; i < 3; i++) {
		for (j = i + 1; j < 4; j++) {
			if (r[i].score < r[j].score) {
				temp = r[i];
				r[i] = r[j];
				r[j] = temp;
			}
		}
	}
}
