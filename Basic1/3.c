#include "stdio.h"

void main() {
    float a, b;
    char operator;

    printf("������ �Է�(+, -, *, /) >> ");
    scanf_s("%c", &operator, 1);

    printf("�� �� �Է� >> ");
    scanf_s("%f %f", &a, &b);

    float result;
    switch (operator) {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        printf("�߸��� �������Դϴ�.");
        return;
    }

    printf("���: %f", result);
}