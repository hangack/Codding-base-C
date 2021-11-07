10-1
https://mintnlatte.tistory.com/295
10-2

10-3
= -1

10-4
4.txt
백두산	20	운전
한라산	25	회사원
황령산	29	연구원

#include<stdio.h>
FILE*dat;
struct survey {
	char *name[20];
	int age;
	char *job[20];
}

main() {
	int i;
	struct survey Gsurvey[3];

	dat = fopen("4.txt", "r");
	for (i = 0; i < 3; i++) {
		fscanf(dat, "%s", Gsurvey[i].name);
		fscanf(dat, "%d", &Gsurvey[i].age);
		fscanf(dat,"%s%*c", Gsurvey[i].job);
	}
	fclose(dat);

	printf("성명	연령	직업\n");
	printf("----------------------\n");
	for (i = 0; i < 3; i++) {
		printf("%s	%d	%s\n", Gsurvey[i].name, Gsurvey[i].age, Gsurvey[i].job);
	}
}

10-5
	struct person zuin = { "zuin",25,"A",185.5,75.5 };

10-6
6.txt
이하나	30	연구원
최둘리	29	회사원
박하늘	31	교사

#include<stdio.h>
FILE*dat;
main() {
	int i;
	union seoul {
		char*name[10];
		int age;
		char*job[10];
	}list[3];

	dat = fopen("6.txt", "r");
	for (i = 0; i < 3; i++) {
		fscanf(dat, "%s", list[i].name);
		printf("1");
		fscanf(dat, "%d", &list[i].age);
		fscanf(dat, "%s%*c", list[i].job);
	}
	fclose(dat);

	for (i = 0; i < 3; i++) {
		printf("%10s%5d%10s", list[i].name, list[i].age, list[i].job);
	}
}
#include<stdio.h>
main() {
	union seoul {
		char *name;
		int age;
		char *job;
	}list[3];

	list[0].name = "이하나";
	printf("%10s", list[0].name);
	list[0].age = 30;
	printf("%5d", list[0].age);
	list[0].job = "연구원";
	printf("%10s", list[0].job);
	list[1].name = "최둘리";
	printf("%10s", list[1].name);
	list[1].age = 29;
	printf("%5d", list[1].age);
	list[1].job = "회사원";
	printf("%10s", list[1].job);
	list[2].name = "박하늘";
	printf("%10s", list[2].name);
	list[2].age = 31;
	printf("%5d", list[2].age);
	list[2].job = "교 사";
	printf("%10s", list[2].job);
}

10-7
pg.303 & 307
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
	struct jumsu sungjug[5] = { {2001,"이나라",24,11,41},
								{2002,"최민수",32,52,22},
								{2003,"서진아",32,43,32},
								{2004,"박흥수",41,14,24},
								{2005,"김미나",51,15,11}, };
	struct ranking rank[5];

	for(i=0;i<5;i++){
		for (j = 0; j < 3; j++)
			sungjug[i].sum += sungjug[i].subject[j];
		sungjug[i].avg = sungjug[i].sum / 3.0;
	}

	printf("\n\n-------------정렬 수행 전-------------\n\n");
	printf("번호	이름	과목	점수	합계	평균\n");
	printf("-------------------------------------\n");
	for (i = 0; i < 5; i++) {
		printf("%d %s %4d %4d %4d %5d %8.2f\n", sungjug[i].num, sungjug[i].name, sungjug[i].subject[0], sungjug[i].subject[1], sungjug[i].subject[2], sungjug[i].sum, sungjug[i].avg);
	}
	for (i = 0; i < 4; i++) {
		for (j = i + 1; j < 5; j++) {
			if (sungjug[i].sum < sungjug[j].subject) {
				temp = sungjug[i];
				sungjug[i] = sungjug[j];
				sungjug[j] = temp;
			}
			
		}
		rank.Rjumsu[i] = jumsu[j];
	}

	printf("\n\n-------------정렬 수행 후-------------\n\n");
	printf("번호	이름	과목	점수	합계	평균\n");
	printf("-------------------------------------\n");
	for (i = 0; i < 5; i++) {
		printf("%d %s %4d %4d %4d %5d %8.2f\n", sungjug[i].num, sungjug[i].name, sungjug[i].subject[0], sungjug[i].subject[1], sungjug[i].subject[2], sungjug[i].sum, sungjug[i].avg);
	}
}

10-8
pg.310