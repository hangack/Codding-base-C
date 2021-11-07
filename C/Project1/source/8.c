#include<stdio.h>
main() {
	struct sungjug {
		int no;
		char name[20];
		int total;
		float avg;
	};

	struct sungjug hana[] = { {10, "김하나",250,83.3} };

	struct sungjug* student;
	student = hana;	
/*구조체 포인터에서 구조체로 값을 대입하기 전에 4byte가 넘는 
변수 name(char)의 초기화와 할당 크기를 지정해줄 필요가 있다.
malloc() 명령어를 사용하지만,
구조체에 직접 입력하여 포인터에 구조체 전체 대입도 가능하다.*/

	printf("%d\n", student->no);
	printf("%s\n", student->name);
	printf("%d\n", student->total);
	printf("%4.1f\n", student->avg);
}