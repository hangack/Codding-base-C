#include<stdio.h>
FILE* dat;
struct survey {
	char* name[20];
	int age;
	char* job[20];
}

main() {
	int i;
	struct survey Gsurvey[3];

	dat = fopen("4.txt", "r");
	for (i = 0; i < 3; i++) {
		fscanf(dat, "%s", Gsurvey[i].name);
		fscanf(dat, "%d", &Gsurvey[i].age);
		fscanf(dat, "%s%*c", Gsurvey[i].job);
	}
	fclose(dat);

	printf("성명	연령	직업\n");
	printf("----------------------\n");
	for (i = 0; i < 3; i++) {
		printf("%s	%d	%s\n", Gsurvey[i].name, Gsurvey[i].age, Gsurvey[i].job);
	}
}