#include <stdio.h>

int main(void)
{
	double num1, num2, result = 0;
	char op;

	printf("ù ��° �Ǽ��� �Է��ϼ���: ");
	scanf_s("%lf", &num1);
	printf("�� ��° �Ǽ��� �Է��ϼ���: ");
	scanf_s("%lf", &num2);

	printf("'+': ����, '-': ����, '*': ����, '/': ������\n������ ������ �����ϼ���: ");
	scanf_s(" %c", &op, 1);

	if (op == '+')
		result = num1 + num2;
	else if (op == '-')
		result = num1 - num2;
	else if (op == '*')
		result = num1 * num2;
	else if (op == '/')
		result = num1 / num2;
	else
		printf("�߸��� �����Դϴ�.\n");

	printf("%0.2f %c %0.2f = %0.2f\n", num1, op, num2, result);


	return 0;
}