#include <stdio.h>

int main(void)
{
	double ysalary;
	double msalary;

	printf("������ �Է��Ͻÿ� (����: ����): ");
	scanf_s("%lf", &ysalary);

	msalary = ysalary / 12;

	printf("�� ���ɾ� (����: ����): %f\n", msalary);

	return 0;
}