#include "stdio.h"

//while���� �̿��ؼ� 100���� 1���� Ȧ���� ����ϼ���.

void main() {
	int i = 100;

	while (i > 0)
	{
		if (i % 2 == 1) 
		{
			printf("%d\n", i);
		}
		i--;
	}
}