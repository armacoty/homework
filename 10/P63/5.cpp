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
	int x, c = 0;
	printf("X = ");
	scanf("%d", &x);
	for (int i = 0; i < N; i++)
	{
		A[i] = irand(0, 4);
		printf("%d ", A[i]);
	}
	for (int i = 0; i < N; i++)
		if(A[i] == x)
			c++;
	printf("\nc=%d\n", c);
	getchar();
}