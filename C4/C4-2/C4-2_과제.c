#include <stdio.h>

int main(void)
{
	int d;
	int rev = 0;
	int n = 1;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &d);

	printf("�Է��� ������ �Ųٷ� ����� ���: ");
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