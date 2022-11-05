#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> // malloc, free

void hanoi_tower(int n, char from, char temp, char to);

int main(void)
{
	char* plate; // �迭 �̸��� ������ ������
	int n;       // �迭�� ũ�⸦ ���� ����
	int i;

	printf("������ ������ ���ϼ���.: ");
	scanf("%d", &n); // �迭�� ũ�� �Է� ����

	plate = (int*)malloc(sizeof(int) * n); // int�� �迭�� n���� ũ��� ����

	for (i = 0; i < n; i++)
		scanf("%s", &plate[i]);
	for (i = 0; i < n; i++)
		printf("%s", plate[i]);

	free(plate); // �����Ҵ��� ������

	return 0;
}