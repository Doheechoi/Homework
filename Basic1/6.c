#include <stdio.h>

void main()
{
	int time = 0, repeat;

	printf("�� �ݺ�Ƚ�� �Է� >> ");
	scanf_s("%d", &repeat);

	int i = 0;
	while (1)
	{
		if(time <= 0)
		{
			printf("\nȽ�� �Է� >> ");
			scanf_s("%d", &time);
			i = 0;
		}

		if (time == -1) break;

		if(i % repeat)
		{
			printf("%d", i);
		}
		else
		{
			printf("��");
		}

		i++;
		time--;
	}
}