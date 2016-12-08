#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
#define N 30

void swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int random(int a, int b)
{
	return rand() % (b - a + 1) + a;
}

void main()
{
	int arr[N];
	srand(time(NULL));
	//generate
	for (int i = 0; i < N; i++)
		arr[i] = i + 1;
	//out
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");

	//tuda suda
	for (int i = 0; i < N; i++)
		swap(&arr[i], &arr[random(0, N - 1)]);

	//out
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
	//3ATbl4KA
	system("pause");
}