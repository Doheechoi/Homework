#include "stdio.h"

void main() {
	int a;

	printf("���� �Է� >> ");
	scanf_s("%d", &a);

	a = a < 0 ? -a : a;
	printf("���밪 a : %d", a);
}