#include "stdio.h"

void main() {
    int a, b;

    printf("두 수 입력 >> ");
    scanf_s("%d %d", &a, &b);

    printf("큰수: %d", a > b ? a : b);
}