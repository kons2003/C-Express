#include <stdio.h>

int main(void)
{
	const double SQM_PER_PYEONG = 3.305785;
	int pyeong;

	printf("����� �Է��ϼ���: ");
	scanf_s("%d", &pyeong);

	printf("%d(��)�� %f(��������)�Դϴ�.\n", pyeong, pyeong * SQM_PER_PYEONG);

	return 0;
}