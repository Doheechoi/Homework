#include "stdio.h"

void main() {
	float rad;
	printf("�������� �Է��ϼ��� >> ");
	scanf_s("%f", &rad);
	
	printf("�ѷ� = %10.2lf cm\n", 2 * 3.14 * rad);
	printf("���� = %10.2lf cm^2\n", 2 * 3.14 * rad * rad);
	printf("���� = %10.2lf cm^3\n", 3.14 * rad * rad * rad);
}