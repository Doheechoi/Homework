#include "stdio.h"

void main() {
	float r;
	float h;


	printf("�غ��� ���� r�� �Է��ϼ��� : ");
	scanf_s("%f", &r);
	printf("������ ���� h�� �Է��ϼ��� : ");
	scanf_s("%f", &h);

	printf("�ﰢ���ǳ��� : r ���ϱ� ���� h * 0.5 = %f x %f x 0.5 = %.2f ", r, h, r * h * 0.5f);
}