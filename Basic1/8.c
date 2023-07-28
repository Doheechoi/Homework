#include "stdio.h"

void main()
{
	int a, b;

	printf("두 정수 입력 >> ");
	scanf_s("%d %d", &a, &b);

	int big = a > b ? a : b;
	printf("%d", big);
}