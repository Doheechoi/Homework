#include "stdio.h"

/*���� 3���� �Է¹ް� �� 3���� ���� �ﰢ���� ���� �� �ִ����� �Ǻ��ϼ���
�ﰢ���� �����Ϸ��� �� ���� ���� �ٸ� �� ���� �պ��� �ݵ�� Ŀ�� �մϴ�. (���� �����ڸ� ����ϼ���)*/ 

void main() {
	int length1;
	int length2;
	int length3;

	printf("�ﰢ�� �� ���� ���̸� �Է��ϼ��� >> : ");
	scanf_s("%d", &length1);
	scanf_s("%d", &length2);
	scanf_s("%d", &length3);

	int can1 = length1 + length2 > length3 ? 1 : 0;
	int can2 = length2 + length3 > length1 ? 1 : 0;
	int can3 = length3 + length1 > length2 ? 1 : 0;
	if (can1 == 1 && can2 == 1 && can3 == 1)
	{
		printf("�ﰢ���� ���� �� �ֽ��ϴ�.");
	}
	else if (can1 == 0 || can2 == 0 || can3 == 0)
	{
		printf("�ﰢ���� ���� �� �����ϴ�...");
	}
}
