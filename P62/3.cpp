#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#define N 30

void main()
{
	int arr[N];
	arr[0] = 1;
	arr[1] = 1;
	for (int i = 2; i < N; i++)
		arr[i] = arr[i - 1] + arr[i - 2];
	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);
	system("pause");
}