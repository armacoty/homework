#include <cstdio>

int main() {
	const int N = 100;
	bool A[N + 1];
	int i, k;
	for (int i = 2; i <= N; i++)
		A[i] = true;
	k = 2;
	while (k*k <= N) {
		if (A[k]) {
			i = k*k;
			while (i <= N)
			{
				A[i] = false;
				i += k;
			}
		}
		k++;
	}
	for (i = 2; i <= N; i++)
		if (A[i])
			printf("%d ", i);
	getchar();
	getchar();
	return 0;
}