#include <stdio.h>

int main(void)
{
	int score;

	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &score);

	if (score >= 90)
		printf("�հ�: ����A\n");
	else if (score >= 80)
		printf("�հ�: ����B\n");
	else if (score >= 70)
		printf("�հ�: ����C\n");
	else if (score >= 60)
		printf("�հ�: ����D\n");
	else
		printf("���հ�: ����F\n");

	return 0;
}