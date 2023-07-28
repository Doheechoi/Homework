#include "stdio.h"

void main()
{
	int a;

	printf("양의 정수 입력 >> ");
	scanf_s("%d", &a);

	for(int i = 1; i <= a; i++)
	{
		printf("%d ", 3 * i);
	}
}