#include <stdio.h>

int main(void)
{
	int str, stp, mul;
	int sum = 0;
	int sum_out = 0;

	printf("����: ");
	scanf_s("%d", &str);
	printf("����: ");
	scanf_s("%d", &stp);
	printf("���: ");
	scanf_s("%d", &mul);

	printf("%d���� %d���� %d�� ���: ", str, stp, mul);
	int i = 1;
	while (mul*i <= stp)
	{
		printf("%d ", i * mul);
		i++;
	}
	printf("\n\n");

	printf("%d���� %d���� %d�� ����� ��: ", str, stp, mul);
	for (int j = 1; j < i; j++)
		sum += mul * j;
	printf("%d\n", sum);

	printf("%d���� %d���� %d�� ����� ������ ���� ��: ", str, stp, mul);
	sum_out = 0;
	for (int k = str; k <= stp; k++)
		sum_out += k;

	printf("%d\n", sum_out - sum);

	return 0;
}