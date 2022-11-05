#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free

void hanoi_tower(int n, char from, char temp, char to);

int main(void)
{
	char* plate; // 배열 이름을 포인터 변수로
	int n;       // 배열의 크기를 받을 변수
	int i;

	printf("원판의 개수를 정하세요.: ");
	scanf("%d", &n); // 배열의 크기 입력 받음

	plate = (int*)malloc(sizeof(int) * n); // int형 배열을 n개의 크기로 만듦

	for (i = 0; i < n; i++)
		scanf("%s", &plate[i]);
	for (i = 0; i < n; i++)
		printf("%s", plate[i]);

	free(plate); // 동적할당을 해제함

	return 0;
}