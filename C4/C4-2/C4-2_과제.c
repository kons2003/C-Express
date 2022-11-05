#include <stdio.h>

int main(void)
{
	int d;
	int rev = 0;
	int n = 1;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &d);

	printf("입력한 정수를 거꾸로 출력한 결과: ");
	do
	{
		rev = d % 10;
		printf("%d", rev);
		d /= (10 * n);
		n * 10;
	} while (d != 0);
	printf("\n");

	return 0;
}