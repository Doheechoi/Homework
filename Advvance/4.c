#include "stdio.h"

void main()
{
	int total = 0;
	int num;
	do
	{
		printf("숫자 입력 >> ");
		scanf_s("%d", &num);

		total += num;
	} while (num != 0);

	printf("총합: %d", total);
}