#include <stdio.h>

int main(void)
{
	char ch;
	int x;
	double d;

	printf("ch�� ũ��: %d\n", sizeof(ch));
	printf("x�� ũ��: %d\n", sizeof(x));
	printf("d�� ũ��: %d\n\n", sizeof(d));

	printf("char�� ũ��: %d\n", sizeof(char));
	printf("short�� ũ��: %d\n", sizeof(short));
	printf("int�� ũ��: %d\n", sizeof(int));
	printf("long�� ũ��: %d\n", sizeof(long));
	printf("long long�� ũ��: %d\n\n", sizeof(long long));

	printf("float�� ũ��: %d\n", sizeof(float));
	printf("double�� ũ��: %d\n", sizeof(double));
	printf("long double�� ũ��: %d\n", sizeof(long double));



	return 0;
}