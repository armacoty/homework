#include <cstdio>
#include <cmath>
#define N 1000
int main() {
	int sqr_lim;
	bool is_prime[N + 1];
	int x2, y2;
	int i, j;
	int n;
	sqr_lim = (int)sqrt((long double)N);
	for (i = 0; i <= N; i++) is_prime[i] = false;
	is_prime[2] = true;
	is_prime[3] = true;
	x2 = 0;
	for (i = 1; i <= sqr_lim; i++) {
		x2 += 2 * i - 1;
		y2 = 0;
		for (j = 1; j <= sqr_lim; j++) {
			y2 += 2 * j - 1;
			n = 4 * x2 + y2;
			if ((n <= N) && (n % 12 == 1 || n % 12 == 5))
				is_prime[n] = !is_prime[n];
			n -= x2;
			if ((n <= N) && (n % 12 == 7))
				is_prime[n] = !is_prime[n];
			n -= 2 * y2;
			if ((i > j) && (n <= N) && (n % 12 == 11))
				is_prime[n] = !is_prime[n];
		}
	}
	for (i = 5; i <= sqr_lim; i++) {
		if (is_prime[i]) {
			n = i * i;
			for (j = n; j <= N; j += n) {
				is_prime[j] = false;
			}
		}
	}
	printf("2, 3, 5");
	for (i = 6; i <= N; i++) {
		if ((is_prime[i]) && (i % 3 != 0) && (i % 5 != 0)) {
			printf(", %d", i);
		}
	}
	getchar();
	getchar();
	return 0;
}