#include "stdio.h"

void main() {
	int time, repeat;

	printf("È½¼ö ÀÔ·Â >> ");
	scanf_s("%d", &time);

	printf("Äô ¹Ýº¹ È½¼ö >> ");
	scanf_s("%d", &repeat);

	for (int i = 0; i < time; i++) {
		if (i % repeat) {
			printf("%d", i);
		}
		else {
			printf("Äô");
		}
	}
}