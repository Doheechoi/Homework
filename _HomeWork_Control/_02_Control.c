#include "stdio.h"

//5���� ���� �Է¹ް� �ִ밪�� �ּҰ��� �����ϼ���

void main() {
	int num;
	int max, min;
	printf("5���� ���� �Է��ϼ��� >> : ");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &num);
		if (i == 0)
		{
			max = num;
			min = num;
		}

		if (num > max)
		{
			max = num;
		}
		else if (num < min)
		{
			min = num;
		}
	}
	printf("�ִ밪�� %d �Դϴ�. \n", max);
	printf("�ּҰ��� %d �Դϴ�. \n", min);
}