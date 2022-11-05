#include <stdio.h>

int main(void)
{
	char ch;
	int x;
	double d;

	printf("ch의 크기: %d\n", sizeof(ch));
	printf("x의 크기: %d\n", sizeof(x));
	printf("d의 크기: %d\n\n", sizeof(d));

	printf("char의 크기: %d\n", sizeof(char));
	printf("short의 크기: %d\n", sizeof(short));
	printf("int의 크기: %d\n", sizeof(int));
	printf("long의 크기: %d\n", sizeof(long));
	printf("long long의 크기: %d\n\n", sizeof(long long));

	printf("float의 크기: %d\n", sizeof(float));
	printf("double의 크기: %d\n", sizeof(double));
	printf("long double의 크기: %d\n", sizeof(long double));



	return 0;
}