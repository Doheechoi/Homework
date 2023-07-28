#include "stdio.h"

void main() {
    float a, b;
    char operator;

    printf("연산자 입력(+, -, *, /) >> ");
    scanf_s("%c", &operator, 1);

    printf("두 수 입력 >> ");
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
        printf("잘못된 연산자입니다.");
        return;
    }

    printf("결과: %f", result);
}