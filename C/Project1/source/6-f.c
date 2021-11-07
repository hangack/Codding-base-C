#include<stdio.h>
FILE* dat;
main() {
	int i;
	union seoul {
		char* name[10];
		int age;
		char* job[10];
	}list[3];

	dat = fopen("6.txt", "r");
	for (i = 0; i < 3; i++) {
		fscanf(dat, "%s", list[i].name);
		fscanf(dat, "%d", &list[i].age);
		fscanf(dat, "%s%*c", list[i].job);
	}
	fclose(dat);

	for (i = 0; i < 3; i++) {
		printf("%10s%5d%10s", list[i].name, list[i].age, list[i].job);
	}
}