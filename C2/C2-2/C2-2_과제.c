#include <stdio.h>

int main(void)
{
	double c, au;
	c = 3.000000e+05;
	au = 1.500000e+08;
	printf("빛의 속도: %ekm/s\n", c);
	printf("태양 거리: %ekm\n", au);

	int int_c = c;
	int int_au = au;
	int t_m, t_s;
	t_m = (int_au / int_c) / 60;
	t_s = (int_au / int_c) % 60;
	printf("도달 시간: %dm %ds\n", t_m, t_s);

	return 0;
}