#include "stdio.h"

void main()
{
	unsigned int time;

	printf("양의 정수 입력 >> ");
	scanf_s("%u", &time);

	for(int i = 0; i < time; i++)
	{
		printf("감사합니다\n");
	}
}