#include <stdio.h>

int main(void)
{
	int x, y, sum;

	printf("ù ��° ���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &x);

	printf("�� ��° ���ڸ� �Է��ϼ���: ");
	scanf_s("%d", &y);

	sum = x + y;
	printf("�� ���� ��: %d\n", sum);

	return 0;
}