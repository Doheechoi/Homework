#include "stdio.h"

void main()
{
	int a, b;

	printf("�� ���� �Է� >> ");
	scanf_s("%d %d", &a, &b);

	int big = a > b ? a : b;
	printf("%d", big);
}