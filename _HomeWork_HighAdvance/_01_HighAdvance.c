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
�̷��� ����ϼ���.  1 3 5 7 5 3 1 */ 

void main() {
	int input; 

here:
	printf("Ȧ��7�� �Է��ϸ� ���ڰ� ��µ˴ϴ�. >> : ");
	scanf_s("%d", &input);

	if (input % 2 == 1)
	{
		for (int i = 0; i < input; i++)
		{
			for (int space = input / 2; space > i; space--) // 3 2 1 , 3 2 , 3
			{
				printf(" ");
			}
			for (int space2 = input - (input / 2); space2 <= i; space2++) // 0 , 0 1 , 0 1 2
			{
				printf(" ");
			}
			printf("\*");
			if (i <= input / 2)
			{
				for (int ast1 = 0; ast1 < input - (input - i); ast1++)
				{
					printf("\**");
				}
			}
			else if (i > input / 2)
			{
				for (int ast2 = input - 1; ast2 > i; ast2--)
				{
					printf("\**");
				}
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