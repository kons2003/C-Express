#include <stdio.h>
#define TAX_RATE 0.15

int main(void)
{
	const int MONTHS = 12;
	int m_salary, y_salary;

	printf("���� �Է�: ");
	scanf_s("%d", &m_salary);

	y_salary = MONTHS * m_salary;
	printf("������ %d�Դϴ�.\n", y_salary);
	printf("������ %f�Դϴ�.\n", y_salary * TAX_RATE);

	return 0;
}