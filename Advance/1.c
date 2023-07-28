#include "stdio.h"

void main()
{
	int a;
	printf("양의 정수 입력 >> ");
	scanf_s("%d", &a);

	for(int i = 1; i <= a; i++)
	{
		for(int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}