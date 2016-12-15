#include <stdio.h>

int main( void )
{
	const int N = 30;
	int A[N];
	int i, x, y;
	float s;
	for (i = 0; i < N; i++)
		scanf("%d", &A[i]);
	x = 0;
	y = 0;
	for (i = 0; i < N; i++)
		if (A[i] >= 20)
		{
			x += A[i];
			y++;
		}
	s = float(x) / y;
	printf("%f\n", s);
	getchar();
	return 0;
}