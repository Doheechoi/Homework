#include "stdio.h"

void main()
{
	int money;
	int moneyUnit[] = { 50000, 10000, 5000, 1000, 500, 100, 50, 10, 1 };
	int moneyUnitySize = sizeof(moneyUnit) / sizeof(int);

	printf("����� �� >> ");
	scanf_s("%d", &money);

	for(int i = 0; i < moneyUnitySize; i++)
	{
		if(money / moneyUnit[i])
		{
			printf("%d�� %d��, ", moneyUnit[i], money / moneyUnit[i]);
			money %= moneyUnit[i];
		}
	}
}