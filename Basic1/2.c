#include "stdio.h"

void main() {
    int a, b, c;

    printf("�� �� �Է� >> ");
    scanf_s("%d %d %d", &a, &b, &c);

    int max = a > b ? a : b;
    max = max > c ? max : c;

    printf("ū ��: %d", max);
}