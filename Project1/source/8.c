#include<stdio.h>
main() {
	struct sungjug {
		int no;
		char name[20];
		int total;
		float avg;
	};

	struct sungjug hana[] = { {10, "���ϳ�",250,83.3} };

	struct sungjug* student;
	student = hana;	
/*����ü �����Ϳ��� ����ü�� ���� �����ϱ� ���� 4byte�� �Ѵ� 
���� name(char)�� �ʱ�ȭ�� �Ҵ� ũ�⸦ �������� �ʿ䰡 �ִ�.
malloc() ��ɾ ���������,
����ü�� ���� �Է��Ͽ� �����Ϳ� ����ü ��ü ���Ե� �����ϴ�.*/

	printf("%d\n", student->no);
	printf("%s\n", student->name);
	printf("%d\n", student->total);
	printf("%4.1f\n", student->avg);
}