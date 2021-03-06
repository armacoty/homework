#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
int irand(int a, int b)
{
	return rand() % (b - a + 1) + a;
}

void swap(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

void main()
{
	srand(time(NULL));
	const int N = 20;
	int A[N];
	for (int i = 0; i < N; i++)
	{
		A[i] = irand(0, 4);
		printf("%d ", A[i]);
	}
	printf("\n");
	for (int i = 0; i < N; i += 2)
		if (i + 1 < N)
			swap(&A[i], &A[i + 1]);
	for (int i = 0; i < N; i++)
		printf("%d ", A[i]);
	getchar();
}