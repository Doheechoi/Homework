#include "stdio.h"

void main()
{
	int score;

	printf("점수를 입력하세요: ");
	scanf_s("%d", &score);

	switch ((int)(score / 10))
	{
	case 10:
	case 9:
		printf("%d점은 A 학점입니다.\n", score);
		break;
	case 8:
		printf("%d점은 B 학점입니다.\n", score);
		break;
	case 7:
		printf("%d점은 C 학점입니다.\n", score);
		break;
	case 6:
		printf("%d점은 D 학점입니다.\n", score);
		break;
	default:
		printf("%d점은 F 학점입니다.\n", score);
		break;
	}
}