#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int irand(int a, int b)
{
	return rand() % (b - a + 1) + a;
}

bool is_prime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i*i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

void main()
{
	srand(time(NULL));
	const int N = 20;
	int A[N], B[N], c = 0;
	for (int i = 0; i < N; i++)
	{
		A[i] = irand(0, 999);
		printf("%d ", A[i]);
	}
	printf("\n");
	for(int i = 0; i < N; i++)
		if(is_prime(A[i]))
			B[c++] = A[i];
	
	for (int i = 0; i < c; i++)
		printf("%d ", B[i]);
	getchar();
}