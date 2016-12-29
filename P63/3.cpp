#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#define elif else if
int irand(int a, int b)
{
	return rand() % (b - a + 1) + a;
}

void main()
{
	srand(time(NULL));
	const int N = 50;
	int A[N];
	int min1 = INT_MAX, min2 = INT_MAX, min3 = INT_MAX;
	for (int i = 0; i < N; i++)
		A[i] = irand(0, 100);
	for (int i = 0; i < N; i++)
	{
		if (A[i] < min1)
		{
			min3 = min2;
			min2 = min1;
			min1 = A[i];
		}
		elif(A[i] < min2)
		{
			min3 = min2;
			min2 = A[i];
		}
		elif(A[i] < min3)
		{
			min3 = A[i];
		}
	}
	printf("%d, %d, %d", min1, min2, min3);
	getchar();
}