#include "stdio.h"

void main() {
    int a, b;

    printf("�� �� �Է� >> ");
    scanf_s("%d %d", &a, &b);

    printf("ū��: %d", a > b ? a : b);
}