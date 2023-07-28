#include "stdio.h"

void main() {
    int a, b, c;

    printf("세 수 입력 >> ");
    scanf_s("%d %d %d", &a, &b, &c);

    int max = a > b ? a : b;
    max = max > c ? max : c;

    printf("큰 수: %d", max);
}