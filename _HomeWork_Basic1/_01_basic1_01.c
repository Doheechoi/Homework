#include "stdio.h"

// �ΰ��� ������ �Է¹޾Ƽ� �� �� ū ���� ����ϴ� ���α׷��� �����϶�.

void main() {
	int num1 = 0;
	int num2 = 0;
	int result;

	printf("����1�� �Է��ϼ���. >> : ");
	scanf_s("%d", &num1);
	printf("����2�� �Է��ϼ���. >> : ");
	scanf_s("%d", &num2);

	if (num1 > num2)
	{
		printf("����1�� ���� 2���� �� Ů�ϴ�.");
	}
	else if (num2 > num1)
	{
		printf("����2�� ���� 1���� �� Ů�ϴ�.");
	}
	else
	{
		printf("���ڸ� �ٽ� �Է����ּ���.");
	}
}