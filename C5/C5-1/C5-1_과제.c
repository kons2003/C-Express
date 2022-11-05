#include <stdio.h>
#define PI 3.141592

double area(double r);
double round(double r);

int main(void)
{
	double radius;

	printf("원의 반지름: ");
	scanf_s("%lf", &radius);

	printf("반지름이 %.3f인 원의 면적: %.3f\n", radius, area(radius));
	printf("반지름이 %.3f인 원의 둘레: %.3f\n", radius, round(radius));

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