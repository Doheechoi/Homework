#include <stdio.h>

void main() {
	int num = 0;

	printf("정수 입력 >> ");
	scanf_s("%d", &num);

	int i = 1;

	while (1)
	{
		printf("*\n", i++);
		if (i > num)
			break;
	}
		
}