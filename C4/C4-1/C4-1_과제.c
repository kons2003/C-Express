#include <stdio.h>

int main(void)
{
	int str, stp, mul;
	int sum = 0;
	int sum_out = 0;

	printf("시작: ");
	scanf_s("%d", &str);
	printf("종료: ");
	scanf_s("%d", &stp);
	printf("배수: ");
	scanf_s("%d", &mul);

	printf("%d부터 %d까지 %d의 배수: ", str, stp, mul);
	int i = 1;
	while (mul*i <= stp)
	{
		printf("%d ", i * mul);
		i++;
	}
	printf("\n\n");

	printf("%d부터 %d까지 %d의 배수의 합: ", str, stp, mul);
	for (int j = 1; j < i; j++)
		sum += mul * j;
	printf("%d\n", sum);

	printf("%d부터 %d까지 %d의 배수를 제외한 수의 합: ", str, stp, mul);
	sum_out = 0;
	for (int k = str; k <= stp; k++)
		sum_out += k;

	printf("%d\n", sum_out - sum);

	return 0;
}