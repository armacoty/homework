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
	int max = 0, max_c = 0;
	for (int i = 0; i < N; i++)
		A[i] = irand(0, 10);
	for (int i = 0; i < N; i++)
		if (A[i] > max)
		{
			max = A[i];
			max_c = 1;
		}
		else if (A[i] == max)
			max_c++;
	printf("max %d\ncount %d\n", max, max_c);
	getchar();
}