#include <stdio.h>
#define ARR1 3
#define ARR2 4
#define ARR3 3

void scanArr(int arr[], int n);
void printArr(int arr[], int n);
void copyArr(int arr[], int arr2[], int n);
int maxScore(int arr[], int n);

int main(void)
{
	int arr1[ARR1];
	int arr2[ARR2];
	int arr3[ARR3];
	
	scanArr(arr1, ARR1);
	
	printf("arr1 배열 원소: ");
	printArr(arr1, ARR1);
	printf("\n\n");

	scanArr(arr2, ARR2);

	printf("arr2 배열 원소: ");
	printArr(arr2, ARR2);
	printf("\n\n");

	printf("arr1의 원소를 arr3으로 복사\n");
	copyArr(arr1, arr3, ARR3);

	printf("arr3 배열 원소: ");
	printArr(arr3, ARR3);
	printf("\n\n");

	printf("arr1 배열 원소 중 가장 큰 수: %d\n", maxScore(arr1, ARR1));
	printf("arr2 배열 원소 중 가장 큰 수: %d\n", maxScore(arr2, ARR2));

	return 0;
}

void scanArr(int arr[], int n)
{
	int x;

	for (int i = 0; i < n; i++)
	{
		printf("정수를 입력하세요: ");
		scanf_s("%d", &x);
		arr[i] = x;
	}
}

void printArr(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
}

void copyArr(int arr[], int arr2[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arr2[i] = arr[i];
	}
}

int maxScore(int arr[], int n)
{
	int max;
	
	max = arr[0];
	
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}

	return max;
}