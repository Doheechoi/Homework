#include "stdio.h"
// �ּ��� ����Ҷ� �ظ��ϸ� ����� ��� �𸮾� ���� ���ϸ��� �ѱ��̶� ������ ����� ��찡 ����
void main(){
	char ch;

	printf("scan operator (+, -, *, /, %) >> ");
	scanf_s("%c", &ch);

	switch (ch)
	{
	case '+':
		printf("+ operator\n");
		break;
	case '-':
		printf("- operator\n");
		break;
	case '*':
		printf("* operator\n");
		break;
	case '/':
		printf("/ operator\n");
		break;
	case '%':
		printf("% operator\n");
		break;
	default:
		printf("not an operator!\n");
		break;
	}
}