#include <stdio.h>

int main(void)
{
	double width, height;

	printf("�� �Ǽ��� �Է��ϼ���: ");
	scanf_s("%lf, %lf", &width, &height);

	printf("�簢�� ����: %10.3f\n", width * height);
	printf("�ﰢ�� ����: %-10.3f\n", (width * height)/2);

	return 0;
}