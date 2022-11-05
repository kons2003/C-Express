#include <stdio.h>

int main(void)
{
	double num1, num2, result = 0;
	char op;

	printf("첫 번째 실수를 입력하세요: ");
	scanf_s("%lf", &num1);
	printf("두 번째 실수를 입력하세요: ");
	scanf_s("%lf", &num2);

	printf("'+': 덧셈, '-': 뺄셈, '*': 곱셈, '/': 나눗셈\n연산의 종류를 선택하세요: ");
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
		printf("잘못된 연산입니다.\n");

	printf("%0.2f %c %0.2f = %0.2f\n", num1, op, num2, result);


	return 0;
}