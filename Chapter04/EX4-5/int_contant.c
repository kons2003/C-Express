#include <stdio.h>

int main(void)
{
	int x = 10;   // 10진수
	int y = 010;  // 8진수
	int z = 0xAB; // 16진수

	printf("x = %d\n", x);
	printf("y = %d\n", y);
	printf("z = %d\n\n", z);

	printf("y = %o\n", y);
	printf("y = %#o\n", y);
	printf("z = %x\n", z);
	printf("z = %#X\n", z);
}