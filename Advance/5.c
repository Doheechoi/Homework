#include "stdio.h"

void main()
{
	int a;
	printf("���� ���� �Է� >> ");
	scanf_s("%d", &a);

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("o\n");
	}
}