#include <stdio.h>

int main(void)
{
	printf("%d\n", 1234);
	printf("%8d\n", 1234);
	printf("%f\n", 12.345);
	printf("%10f\n", 12.345);
	printf("%10.3f\n", 12.345);
	printf("%6f\n", 12.345);
	printf("%-10.3f\n", 12.345);
	printf("%+10.3f\n", 12.345);
	printf("%+-10.3f\n", 12.345);
	printf("%-+10.3f\n", 12.345);
}