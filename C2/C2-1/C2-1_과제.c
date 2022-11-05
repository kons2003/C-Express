#include <stdio.h>

int main(void)
{
	double width, height;

	printf("두 실수를 입력하세요: ");
	scanf_s("%lf, %lf", &width, &height);

	printf("사각형 면적: %10.3f\n", width * height);
	printf("삼각형 면적: %-10.3f\n", (width * height)/2);

	return 0;
}