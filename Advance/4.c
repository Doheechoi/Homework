#include "stdio.h"

float FastSqrt(float num, int cnt)
{
	if (cnt == 0) return 1;

	float get = FastSqrt(num, cnt / 2);

	if(cnt%2 == 0)
	{
		return get * get;
	}
	else
	{
		return get * get * num;
	}
}

void main()
{
	const int START_YEAR = 1627;
	const int END_YEAR = 2010;

	float money = 24; //$
	float percentage = 1 + 8.0f / 100.0f; // 1.08
	int year = END_YEAR - START_YEAR;

	money = money * FastSqrt(percentage, year);
	printf("%f", money);
}