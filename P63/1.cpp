#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

int irand(int a, int b)
{
	return rand() % (b - a + 1) + a;
}

void main()
{
	srand(time(NULL));
	const int N = 30;
	int A[N];
	int min = INT_MAX;
	int max = 0;
	for(int i = 0; i < N; i++)
		A[i] = irand(-10, 10);
	for (int i = 0; i < N; i++)
	{
		if (A[i] < min && A[i] % 2 == 0 && A[i] > max)
			min = A[i];
		if (A[i] > max && A[i] % 2 == 0)
			max = A[i];
	}
	if (min == INT_MAX)
		printf("min not found\n");
	else
		printf("min is %d\n", min);
	if (max == 0)
		printf("max not found\n");
	else
		printf("max is %d\n", max);
	getchar();
}