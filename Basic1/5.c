#include "stdio.h"

void main() {
	int time, repeat;

	printf("Ƚ�� �Է� >> ");
	scanf_s("%d", &time);

	printf("�� �ݺ� Ƚ�� >> ");
	scanf_s("%d", &repeat);

	for (int i = 0; i < time; i++) {
		if (i % repeat) {
			printf("%d", i);
		}
		else {
			printf("��");
		}
	}
}