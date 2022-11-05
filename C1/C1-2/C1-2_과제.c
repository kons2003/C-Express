#include <stdio.h>

int main(void)
{
	const double SQM_PER_PYEONG = 3.305785;
	int pyeong;

	printf("평수를 입력하세요: ");
	scanf_s("%d", &pyeong);

	printf("%d(평)은 %f(제곱미터)입니다.\n", pyeong, pyeong * SQM_PER_PYEONG);

	return 0;
}