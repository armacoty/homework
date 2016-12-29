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
	const int N = 8;
	int A[N];
	int k, m;
	printf("k, m = ");
	scanf("%d%d", &k, &m);
	for (int i = 0; i < N; i++)
	{
		A[i] = irand(0, 4);
		printf("%d ", A[i]);
	}
	printf("\n");

	for (int i = k; i <= (m + k) / 2; i++)
		swap(&A[i], &A[m - i + k]);

	for (int i = 0; i < N; i++)
		printf("%d ", A[i]);
	getchar();
	getchar();
}