#include <stdio.h>

int main(void)
{
	int x = 10;   // 10����
	int y = 010;  // 8����
	int z = 0xAB; // 16����

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n\n", z);

	printf("y = %o\n", y);
	printf("y = %#o\n", y);
	printf("z = %x\n", z);
	printf("z = %#X\n", z);
}