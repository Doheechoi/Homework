#include <stdio.h>

void main() {
	int num = 0;

	printf("���� �Է� >> ");
	scanf_s("%d", &num);

	int i = 1;

	while (1)
	{
		printf("*", i++);
		if (i > num)
			break;
	}
		
}