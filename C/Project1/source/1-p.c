#include<stdio.h>
#include <stdlib.h>
main() {
	struct sungjug {
		int no;
		char name[20];
		int total;
		float avg;
	};

	struct sungjug hana[] = { {10, "±èÇÏ³ª",250,83.3} };

	struct sungjug* student;
	student = hana;

	student->name = (sungjug hana[0]*)malloc(sizeof(char) *20);

	strcpy(student->name, "Jung KangHun");


	printf("%d\n", student->no);
	printf("%s\n", student->name);
	printf("%d\n", student->total);
	printf("%4.1f\n", student->avg);
}