#include "stdio.h"

void main() {
	int kor1 = 98;
	int kor2 = 79;
	int kor3 = 100;

	int total = kor1 + kor2 + kor3;
	double avg = total / 3;
	printf("totla = %d, avg = %.2lf\n", total, avg);

	double avg1 = (double)total / 3;
	printf("totla = %d, avg1 = %.2lf\n", total, avg1);

	double avg2 = total / (double)3;
	printf("total = %d, avg2 = %.2lf\n", total, avg2);
}