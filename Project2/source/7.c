#include<stdio.h>
inequal(float);
main() {
	float a;

	while (1) {
		printf("1000�̸��� �������� �Է��Ͻÿ� : "); scanf("%f", &a);
		if (a == 999) break;

		inequal(a);
	}
}
inequal(float f) {
	if (f <= 20.0)printf("a�� ���� 20 �����Դϴ�.\n");
	if (f >= 20.0)printf("a�� ���� 20 �̻��Դϴ�.\n");
}