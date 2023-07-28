#include <stdio.h>

void main()
{
	int time = 0, repeat;

	printf("Äô ¹Ýº¹È½¼ö ÀÔ·Â >> ");
	scanf_s("%d", &repeat);

	int i = 0;
	while (1)
	{
		if(time <= 0)
		{
			printf("\nÈ½¼ö ÀÔ·Â >> ");
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
			printf("Äô");
		}

		i++;
		time--;
	}
}