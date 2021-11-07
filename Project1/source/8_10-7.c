#include<stdio.h>
main() {
	union sungjug {
		int no;
		char *name;
		int total;
		float avg;
	};

	union sungjug student;

	student.no = 10;
	printf("%d", student.no);
	student.name = "±èÇÏ³ª";
	printf("%10s", student.name);
	student.total = 250;
	printf("%8d", student.total);
	student.avg = 83.3;
	printf("%10.1f\n", student.avg);
}