#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int irand(int a, int b)
{
	return rand() % (b - a + 1) + a;
}

int sum_of_digits(int n)
{
	int sum = 0;
	while(n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

void main()
{
	srand(time(NULL));
	const int N = 20;
	int A[N], B[N], c = 0, n;
	printf("n = ");
	scanf("%d", &n);
	for (int i = 0; i < N; i++)
	{
		A[i] = irand(0, 999);
		printf("%d ", A[i]);
	}
	printf("\n");
	for(int i = 0; i < N; i++)
		if(sum_of_digits(A[i]) == n)
			B[c++] = A[i];
	
	for (int i = 0; i < c; i++)
		printf("%d ", B[i]);
	getchar();
}