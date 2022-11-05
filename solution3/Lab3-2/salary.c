#include <stdio.h>

int main(void)
{
	double ysalary;
	double msalary;

	printf("연봉을 입력하시오 (단위: 만원): ");
	scanf_s("%lf", &ysalary);

	msalary = ysalary / 12;

	printf("월 수령액 (단위: 만원): %f\n", msalary);

	return 0;
}