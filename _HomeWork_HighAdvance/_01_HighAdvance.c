#include "stdio.h"

/*1. Ȧ���� �Է��ϸ� �˴ϴ�.  
   7�� �Է��ϸ�
   *
  ***
 *****
*******
 *****
  ***
   *
�̷��� ����ϼ���.*/

void main() {
	int input; 

here:
	printf("Ȧ��7�� �Է��ϸ� ���ڰ� ��µ˴ϴ�. >> : ");
	scanf_s("%d", &input);

	if (input == 7)
	{
		for (int i = 0; i < 4; i++)
		{
			for (int space = 3; space > i; space--)
			{
				printf(" ");
			}
			printf("\*");
			for (int p = 0; p < i; p++)
			{
				printf("\**");
			}
			printf("\n");
		}

		for (int i = 0; i < 3; i++)
		{
			for (int space = 0; space <= i; space++)
			{
				printf(" ");
			}
			printf("\*");
			for (int p = 2; p > i; p--)
			{
				printf("\**");
			}
			printf("\n");
		}
	}
	else
	{
		printf("���ڸ� �ٽ� �Է����ּ���.");
		goto here;
	}
}