#include "stdio.h"

// ������ ���ڸ� �Է¹޾Ƽ� ���� ū ���� ����ϴ� ���α׷��� �����϶� ���� �����ڸ� ����϶�.

void main() {
	int num1, num2, num3;
	int max;

	printf("������ ���ڸ� �Է����ּ��� >> : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	max = (num1 > num2 ? num1 : num2) > (num1 > num3 ? num1 : num3)
		? (num1 > num2 ? num1 : num2) : (num1 > num3 ? num1 : num3);

	printf("���� ū ���� %d", max);
}