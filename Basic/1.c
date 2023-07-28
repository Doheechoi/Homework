#include "stdio.h"



int MaxOfThree(int a, int b, int c) {
	int result;

	result = a > b ? a : b;
	result = c > result ? c : result;
	
	return result;
}

void main() {
	int a, b, c;

	printf("정수 3개 입력 >> ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	int sum = a + b + c;
	int big = MaxOfThree(a, b, c);

	sum -= big;
	
	if (sum > big) {
		printf("삼각형");
	}
	else {
		printf("삼각형이 아님");
	}
}