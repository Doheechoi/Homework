#include "stdio.h"

void main() {
	float Mit_Beon;
	float Nop_E;

	printf("�غ��� �Է��ϼ��� >> ");
	scanf_s("%f", &Mit_Beon);
	
	printf("���̸� �Է��ϼ��� >> ");
	scanf_s("%f", &Nop_E);

	printf("�ﰢ���� ���̴� %f �Դϴ�.", 0.5f * Mit_Beon * Nop_E);
}