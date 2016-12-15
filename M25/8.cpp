#include <stdio.h>

int main( void )
{
	const int N = 30;
	int A[N];
	int i, x, y;
	float s;
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	x = 10000;
	for (i = 0; i < N; i++)
		if (A[i] >= 180 && A[i] < x)
		{
			x = A[i];
			y = i;
		}
	printf("%d\n", x);
	getchar();
	return 0;
}