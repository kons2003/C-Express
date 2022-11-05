#include <stdio.h>

int main(void)
{
	int Korean_score;
	int English_score;
	int Math_score;
	int Science_score;
	int sum;

	printf("국어 점수를 입력하세요: ");
	scanf_s("%d", &Korean_score);

	printf("영어 점수를 입력하세요: ");
	scanf_s("%d", &English_score);

	printf("수학 점수를 입력하세요: ");
	scanf_s("%d", &Math_score);

	printf("과학 점수를 입력하세요: ");
	scanf_s("%d", &Science_score);

	sum = Korean_score + English_score + Math_score + Science_score;
	printf("총합은: %d입니다.\n", sum);

	printf("평균은: %f입니다.\n", sum / 4.000000);

	return 0;
}