#include <stdio.h>
#include <stdlib.h>

struct privates {
	char* name;
	int age;
};

struct scores {
	int kor;
	int eng;
	int mat;
};

struct grades {
	struct privates* private;
	struct scores* score;
};

main()
{
	typedef struct grades grade;
	grade* student;
	int total;

	student = (grade*)malloc(sizeof(grade));
	student->private = (struct privates*)malloc(sizeof(struct privates));
	student->score = (struct scores*)malloc(sizeof(struct scores));

	student->private->name = "Cha Ju Min";

	//student->private->name = (char *)malloc(sizeof(char) * 20);

	//strcpy(student->private->name, "Cha Ju Min");

	student->private->age = 23;

	student->score->kor = 87;
	student->score->eng = 42;
	student->score->mat = 17;

	total = student->score->kor + student->score->eng + student->score->mat;

	printf("name : %s\n", student->private->name);
	printf("age : %d\n", student->private->age);
	printf("total : %d\n", total);
}