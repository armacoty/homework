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
	const int N = 50;
	int A[N];
	int maxl = 0, l = 0;
	for (int i = 0; i < N; i++)
	{
		A[i] = irand(10, 12);
		printf("%d ", A[i]);
	}
	for (int i = 1; i < N; i++)
	{
		if (A[i - 1] == A[i])
			l++;
		else
			l = 0;
		if (l > maxl)
			maxl = l;
	}
	printf("\nmax=%d\n", maxl);
	getchar();
}