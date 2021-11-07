#include<stdio.h>
inequal(float);
main() {
	float a;

	while (1) {
		printf("1000미만의 유리수를 입력하시오 : "); scanf("%f", &a);
		if (a == 999) break;

		inequal(a);
	}
}
inequal(float f) {
	if (f <= 20.0)printf("a의 값은 20 이하입니다.\n");
	if (f >= 20.0)printf("a의 값은 20 이상입니다.\n");
}