#include "stdio.h"

/*1. 5�� �Է��ϸ� 
*
**
***
****
*****
�̷��� ����ϼ���.
*/

void main() {
	int input = 0;
here:
	printf("���ڸ� �Է��ϼ��� (5�� �Է��ϸ� ���ڰ� ��µ˴ϴ�.) >> : ");
	scanf_s("%d", &input);
	if (input == 5)
	{
		for (int i = 1; i <= 5; i++)
		{
			for (int p = 0; p < i; p++)
			{
				printf("\*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("���ڸ� �ٽ� �Է��ϼ��� >> : ");
		goto here;
	}
}