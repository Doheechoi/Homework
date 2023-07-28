#include "stdio.h"

void main()
{
	char input[3]; // input[2] = \0
	printf("¼ýÀÚ ÀÔ·Â(1~99) >> ");
	scanf_s("%s", &input, 3);

	int cnt = 0;

	for(int i = 0; i < 2; i++)
	{
		switch (input[i])
		{
		case '3':
		case '6':
		case '9':
			cnt++;
			break;
		}
	}

	switch (cnt)
	{
	case 1:
		printf("¹Ú¼öÂ¦");
		break;
	case 2:
		printf("¹Ú¼öÂ¦Â¦");
		break;
	default:
		printf("No ¹Ú¼ö");
	}
}