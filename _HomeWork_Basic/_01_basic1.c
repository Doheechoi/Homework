#include "stdio.h"

//���� : ���� 3���� �Է¹ް� �� 3���� ���� �ﰢ���� ���� �� �ִ����� �Ǻ��ϼ��� 
// �ﰢ���� �����Ϸ��� �κ��� ���� �ٸ� �� ���� �պ��� �ݵ�� Ŀ���մϴ�. (���ǹ� ���)

void main() {
	int length1;
	int length2;
	int length3;

	printf("����1�� �Է��ϼ��� >> : ");
	scanf_s("%d", &length1);
	printf("����2�� �Է��ϼ��� >> : ");
	scanf_s("%d", &length2);
	printf("����3�� �Է��ϼ��� >> : ");
	scanf_s("%d", &length3);

	printf("%d, %d, %d", length1, length2, length3);

	if (length1 + length2 > length3 && length2 + length3 > length1 && length3 + length1 > length2)
	{
		printf("�ﰢ���� ���� �� �ֽ��ϴ�!");
	}
	else
	{
		printf("�ﰢ���� ���� �� �����ϴ�. �ٽ� �Է��ϼ���.");
	}
}