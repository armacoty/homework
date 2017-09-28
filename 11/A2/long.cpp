#include <cstdio>

void Write6(long int x)
{
	long int M = 100000;
	while (M > 0)
	{
		printf("%d", x / M);
		x %= M;
		M /= 10;
	}
}

int main() {
	const int N = 33;
	long int A[N + 1], k, r, i, d = 1000000, s;
	for (int i = 0; i < N; i++)
		A[i] = 0;
	A[0] = 1;
	for (k = 2; k <= 100; k++)
	{
		r = 0;
		for (i = 0; i <= N; i++) {
			s = A[i] * k + r;
			A[i] = s % d;
			r = s / d;
		}

	}
	i = N;
	while (!A[i])
		i--;
	printf("%ld", A[i]);
	for (k = i - 1; k >= 0; k--)
		Write6(A[k]);
	getchar();
	getchar();
	return 0;
}