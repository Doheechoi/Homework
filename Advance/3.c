#include "stdio.h"

void main()
{
	float a, b, c;

	printf("세개의 숫자 입력 >> ");
	scanf_s("%f %f %f", &a, &b, &c);

	int big;
	big = a > b ? a : b;
	big = c > big ? c : big;

	printf("큰수: %d", big);
}