#include<stdio.h>
main() {
	struct sungjug {
		int no;
		char* name;
		int total;
		float avg;
	};

	typedef struct sungjug SJ;					//struct sungjug 형을 SJ로 등록했다. 
												//struct sungjug와 SJ를 같은 의미로 설정

	SJ student[] = { {10, "김하나",250,83.3} };	//struct sungjug 대신 SJ를 입력

	printf("%d", student[0].no);
	printf("%10s", student[0].name);
	printf("%8d", student[0].total);
	printf("%10.1f\n", student[0].avg);
}
/*	typedef를 사용하면 형식과 식별자의 조합을 간단한 하나의 단어로 나타낼수 있다. */