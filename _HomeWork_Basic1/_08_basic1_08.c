#include "stdio.h"

// �ΰ��� ������ �Է¹޾Ƽ� �� �� ū ���� ����ϴ� ���α׷��� �����϶�. ���� ������(���׿����ڸ� ����϶�) 

void main() {
	int num1, num2;
	int result;

	printf("����1�� �Է��ϼ��� >> :");
	scanf_s("%d", &num1);
	printf("����2�� �Է��ϼ��� >> :");
	scanf_s("%d", &num2);

	if (num1 == num2)
	{
		printf("���� �ٽ� �Է��ϼ���.");
	}
	else
	{
		result = (num1 > num2) ? num1 : num2; // ���� ������ �̿�
		printf("���߿� �� ū ���� %d �Դϴ�.", result);
	}
}