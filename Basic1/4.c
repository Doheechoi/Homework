#include "stdio.h"

void main() {
	int a;

	printf("정수 입력 >> ");
	scanf_s("%d", &a);

	a = a < 0 ? -a : a;
	printf("절대값 a : %d", a);
}