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
		printf("[ %d��° �л� ���� �Է� ]\n", i + 1);
		printf("�й� �Է�: ");
		scanf_s("%d", &std[i].number);
		printf("�̸� �Է�: ");
		scanf_s("%s", std[i].name, sizeof(std[i].name));
		for (j = 0; j < 2; j++)
		{
			printf("����%d ����: ", j + 1);
			scanf_s("%lf", &std[i].grade.subScore[j]);
		}
		printf("\n");
		std[i].grade.subAvg = (std[i].grade.subScore[0] + std[i].grade.subScore[1]) / 2.0;
	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		printf("[ %d��° �л� ���� ]\n", i + 1);
		printf("�̸�: %s, �й�: %d, ����1: %.1f, ����2: %.1f, ���: %.2f\n\n", std[i].name, std[i].number, std[i].grade.subScore[0], std[i].grade.subScore[1], std[i].grade.subAvg);
	}
	return 0;
}