#include "stdio.h"

void main()
{
	char input[3]; // input[2] = \0
	printf("���� �Է�(1~99) >> ");
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
		printf("�ڼ�¦");
		break;
	case 2:
		printf("�ڼ�¦¦");
		break;
	default:
		printf("No �ڼ�");
	}
}