#include <stdio.h>
#define SIZE 5

struct score {
	double subScore[10];
	double subAvg;
};

struct student {
	int number;
	char name[10];
	struct score grade;
};

int main(void)
{
	struct student std[SIZE];
	int i, j;

	for (i = 0; i < 3; i++)
	{
		printf("[ %d번째 학생 정보 입력 ]\n", i + 1);
		printf("학번 입력: ");
		scanf_s("%d", &std[i].number);
		printf("이름 입력: ");
		scanf_s("%s", std[i].name, sizeof(std[i].name));
		for (j = 0; j < 2; j++)
		{
			printf("과목%d 학점: ", j + 1);
			scanf_s("%lf", &std[i].grade.subScore[j]);
		}
		printf("\n");
		std[i].grade.subAvg = (std[i].grade.subScore[0] + std[i].grade.subScore[1]) / 2.0;
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		printf("[ %d번째 학생 성적 ]\n", i + 1);
		printf("이름: %s, 학번: %d, 과목1: %.1f, 과목2: %.1f, 평균: %.2f\n\n", std[i].name, std[i].number, std[i].grade.subScore[0], std[i].grade.subScore[1], std[i].grade.subAvg);
	}
	return 0;
}