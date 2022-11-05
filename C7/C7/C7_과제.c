#include <stdio.h>
#define ST 3
#define SU 2

void writeScore(int score[ST][SU]);
void printScore(int score[ST][SU]);
void showStuAvg(int score[ST][SU], double stuAvg[ST]);
void showSubAvg(int score[ST][SU], double subAvg[SU]);

int main(void)
{
	int score[ST][SU];
	double stuAvg[ST];
	double subAvg[SU];

	writeScore(score);
	printScore(score);
	showStuAvg(score, stuAvg);
	showSubAvg(score, subAvg);

	return 0;
}

void writeScore(int score[ST][SU])
{
	for (int i = 0; i < ST; i++)
	{
		printf("%d번째 학생의 성적 입력\n", i + 1);
		for (int j = 0; j < SU; j++)
		{
			printf("과목 %d: ", j + 1);
			scanf_s("%d", &score[i][j]);
		}
		printf("\n");
	}
}

void printScore(int score[ST][SU])
{
	for (int i = 0; i < ST; i++)
	{
		printf("%d번째 학생의 성적: ", i + 1);
		for (int j = 0; j < SU; j++)
		{
			printf("%d ", score[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void showStuAvg(int score[ST][SU], double stuAvg[ST])
{
	double* p;
	p = &stuAvg;

	for (int i = 0; i < ST; i++)
	{
		printf("%d번째 학생의 평균 점수: ", i + 1);
		p[i] = ((double)score[i][0] + (double)score[i][1]) / 2.0;
		printf("%f\n", p[i]);
	}
	printf("\n");
}

void showSubAvg(int score[ST][SU], double subAvg[SU])
{
	double* p;
	p = &subAvg;

	for (int i = 0; i < SU; i++)
	{
		printf("과목 %d의 평균 점수: ", i + 1);
		p[i] = ((double)score[0][i] + (double)score[1][i] + (double)score[2][i]) / 3.0;
		printf("%f\n", p[i]);
	}
}