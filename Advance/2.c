#include "stdio.h"

void main()
{
	int a;
	printf("���� ���� �Է� >> ");
	scanf_s("%d", &a);

	for (int i = a; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}