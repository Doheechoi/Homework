#include "stdio.h"

void main()
{
	float a, b, c;

	printf("������ ���� �Է� >> ");
	scanf_s("%f %f %f", &a, &b, &c);

	int big;
	big = a > b ? a : b;
	big = c > big ? c : big;

	printf("ū��: %d", big);
}