#include  "stdio.h"

/*2. ���� �׼��� �Ա��ϼ���
   �Ա��� ���� ��������, ������, ��õ����, õ����,
   500������, 100������, 50������, 10������, 1������ �� ��� ��ȯ�Ǵ��� ����ϼ���
   ��� ������ ������ ū �� ������ ����մϴ�
   ���� ��� 78670���̸� 
   <������ 1��, ���� 2��, ��õ�� 1��, õ�� 3��, 500�� 1��, 100�� 1��, 50�� 1��, 10�� 2��> �Դϴ�.*/

void main() {
	int price = 0;
	int leftMoney;

	printf("�Ա��� ���� �׼��� �Է��ϼ��� >> : ");
	scanf_s("%d", &price);

	int money50000 = price / 50000;
	leftMoney = price % 50000;
	int money10000 = leftMoney / 10000;
	leftMoney %= 10000;
	int money5000 = leftMoney / 5000;
	leftMoney %= 5000;
	int money1000 = leftMoney / 1000;
	leftMoney %= 1000;
	int coin500 = leftMoney / 500;
	leftMoney %= 500;
	int coin100 = leftMoney / 100;
	leftMoney %= 100;
	int coin50 = leftMoney / 50;
	leftMoney %= 50;
	int coin10 = leftMoney / 10;
	leftMoney %= 10;
	int coin1 = leftMoney / 1;
	leftMoney %= 1;

	printf("�Է��� �ݾ��� %d�� �Դϴ�.", price);
	printf("��ȯ�� �ݾ��� ������ %d��, ���� %d��, ��õ�� %d��, õ�� %d��, 500�� %d��, 100�� %d��, 50�� %d��, 10�� %d�� 1�� %d��",
		money50000, money10000, money5000, money1000, coin500, coin100, coin50, coin10, coin1);
}