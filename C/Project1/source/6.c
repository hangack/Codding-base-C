#include<stdio.h>
main() {
	union seoul {
		char* name;
		int age;
		char* job;
	}list[3];

	list[0].name = "���ϳ�";
	printf("%10s", list[0].name);
	list[0].age = 30;
	printf("%5d", list[0].age);
	list[0].job = "������";
	printf("%10s", list[0].job);
	list[1].name = "�ֵѸ�";
	printf("%10s", list[1].name);
	list[1].age = 29;
	printf("%5d", list[1].age);
	list[1].job = "ȸ���";
	printf("%10s", list[1].job);
	list[2].name = "���ϴ�";
	printf("%10s", list[2].name);
	list[2].age = 31;
	printf("%5d", list[2].age);
	list[2].job = "�� ��";
	printf("%10s", list[2].job);
}