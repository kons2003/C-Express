#include <stdio.h>
#define PI 3.141592

double area(double r);
double round(double r);

int main(void)
{
	double radius;

	printf("���� ������: ");
	scanf_s("%lf", &radius);

	printf("�������� %.3f�� ���� ����: %.3f\n", radius, area(radius));
	printf("�������� %.3f�� ���� �ѷ�: %.3f\n", radius, round(radius));

	return 0;
}

double area(double r)
{
	double result;
	result = r* r* PI;
	return result;
}
double round(double r)
{
	double result;
	result = 2 * r * PI;
	return result;
}