#include "stdio.h"

// while ���� ����Ͽ� 1���� 10������ ���� ����ϼ���

// 0+1, 1+2, 3+3, 6+4, .....
void main() {
	int i = 0;
	int result = 0;

	while (i < 11)
	{
		printf("���� ���� : %d, ���� ������ �� : %d\n", i++, result += i);
	}
}