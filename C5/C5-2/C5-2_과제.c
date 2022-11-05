#include <stdio.h>
#include <math.h>

int a = 0;
int b = 0;
int c = 0;

int check_triangle(int, int, int);
double area_triangle(int, int, int);

int main(void)
{
	printf("�ﰢ���� �� ���� ���̸� �Է��ϼ���: ");
	scanf_s("%d, %d, %d", &a, &b, &c);

	if (check_triangle(a, b, c) == 1)
		printf("�ﰢ���� ���̴� %f�Դϴ�.\n", area_triangle(a, b, c));
	else
		printf("�ﰢ�� ���� ������ �������� �ʽ��ϴ�.\n");

	return 0;
}

int check_triangle()
{
	if (a >= b && a >= c)
	{
		if (a < b + c)
			return 1;
	}
	else if (b >= a && b >= c)
	{
		if (b < a + c)
			return 1;
	}
	else if (c >= a && c >= b)
	{
		if (c < a + b)
			return 1;
	}
	else
		return 0;
}

double area_triangle()
{
	double S = 0;
	double s = 0;
	s = (a + b + c) / 2;
	S = sqrt(s*(s - a)*(s - b)*(s - c));
	return S;
}