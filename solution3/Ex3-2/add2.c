#include <stdio.h>

int main(void)
{
	int x, y, sum;

	printf("첫 번째 숫자를 입력하세요: ");
	scanf_s("%d", &x);

	printf("두 번째 숫자를 입력하세요: ");
	scanf_s("%d", &y);

	sum = x + y;
	printf("두 수의 합: %d\n", sum);

	return 0;
}