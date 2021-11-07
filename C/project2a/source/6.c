#include<stdio.h>
f();
ff();
static int x = 300;		// 코드 전역의 x에 300 값을 할당하고 주소를 고정

main() {
	auto int x = 200;	// 함수 내에서 x값은 200 
	f();
	ff();
	printf("초기의 x = %d\n", x);
}

f() {
	x += 100;			// x값에 100을 더하고 주소에 값을 수정
	printf("함수 1의 x = %d\n", x);
}

ff() {
	auto int x = 10;	// 함수 내에서 x값은 10 함수에 진입할 때 마다 x 값은 초기화
	printf("함수 2의 x = %d\n", x);
}