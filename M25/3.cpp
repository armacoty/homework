#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <limits.h>
#include <ctime>
#define N 30

int random(int a, int b)
{
	return rand() % (b - a + 1) + a;
}

void main()
{
	int arr[N], max = INT_MIN, max_id = 0;
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		arr[i] = random(0, 100);
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < N - 2; i++)
		if (arr[i] + arr[i + 1] + arr[i + 2] > max)
		{
			max = arr[i] + arr[i + 1] + arr[i + 2];
			max_id = i;
		}
	printf("max: %d + %d + %d = %d; [%d, %d, %d]\n",
		arr[max_id], arr[max_id + 1], arr[max_id + 2], max, max_id, max_id + 1, max_id + 2);
	getchar();
}