#include <stdio.h>

int main(void)
{
	int Korean_score;
	int English_score;
	int Math_score;
	int Science_score;
	int sum;

	printf("���� ������ �Է��ϼ���: ");
	scanf_s("%d", &Korean_score);

	printf("���� ������ �Է��ϼ���: ");
	scanf_s("%d", &English_score);

	printf("���� ������ �Է��ϼ���: ");
	scanf_s("%d", &Math_score);

	printf("���� ������ �Է��ϼ���: ");
	scanf_s("%d", &Science_score);

	sum = Korean_score + English_score + Math_score + Science_score;
	printf("������: %d�Դϴ�.\n", sum);

	printf("�����: %f�Դϴ�.\n", sum / 4.000000);

	return 0;
}