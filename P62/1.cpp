#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#define N 30

void main()
{
	int arr[N], d;
	printf("[int]a1:");
	scanf("%d", &arr[0]);
	printf("[int]d:");
	scanf("%d", &d);
	for (int i = 1; i < N; i++)
		arr[i] = arr[i - 1] + d;
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
	system("pause");
}