#include "stdio.h"

void main()
{
	int score;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &score);

	switch ((int)(score / 10))
	{
	case 10:
	case 9:
		printf("%d���� A �����Դϴ�.\n", score);
		break;
	case 8:
		printf("%d���� B �����Դϴ�.\n", score);
		break;
	case 7:
		printf("%d���� C �����Դϴ�.\n", score);
		break;
	case 6:
		printf("%d���� D �����Դϴ�.\n", score);
		break;
	default:
		printf("%d���� F �����Դϴ�.\n", score);
		break;
	}
}