#include "stdio.h"

void main()
{
	int total = 0;
	int num;
	do
	{
		printf("���� �Է� >> ");
		scanf_s("%d", &num);

		total += num;
	} while (num != 0);

	printf("����: %d", total);
}