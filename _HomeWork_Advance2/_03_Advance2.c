#include "stdio.h"

/*3. 369������ �ۼ��մϴ�.
   1~99������ ������ �Է¹ް�
   3,6,9�� �ϳ��� ������ "�ڼ�¦"�� ����ϰ�
   2���� ������ "�ڼ�¦¦"�� ����ϼ���
   ���� ��� 13�� "�ڼ�¦"
   36�� ���� "�ڼ�¦¦"�� ����ϸ� �˴ϴ�.*/

void main() {
	int input; 
	int i = 0;
	while (1)
	{
	here:
		printf("3,6,9 ������ �ۼ��մϴ� 1~99 ������ ������ �Է����ּ���. >> : ");
		scanf_s("%d", &input);
		if (input == 3 || input == 6 || input == 9 || input % 10 == 3 || input % 10 == 6 || input % 10 == 9
			|| input / 10 == 3 || input / 10 == 6 || input / 10 == 9)
		{
			if ((input / 10 == 3 && (input % 10 == 3 || input % 10 == 6 || input % 10 == 9)))
			{
				printf("�ڼ�¦¦!\n");
				goto here;
			}
			else if ((input / 10 == 6 && (input % 10 == 3 || input % 10 == 6 || input % 10 == 9)))
			{
				printf("�ڼ�¦¦!\n");
				goto here;
			}
			else if ((input / 10 == 9 && (input % 10 == 3 || input % 10 == 6 || input % 10 == 9)))
			{
				printf("�ڼ�¦¦!\n");
				goto here;
			}
			printf("�ڼ�¦!\n");
			i++;
		}
		else if (input == 0)
		{
			printf("���α׷��� �����մϴ�.");
			break;
		}
		else
		{
			printf("%d\n", input);
		}
	}
}