#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 10
#define N 10

int irand(int a, int b) {
	return rand() % (b - a + 1) + a;
}

void gmx(int** matrix) {
	srand(time(NULL));
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			matrix[i][j] = irand(1, 100);
}

void pmx(int** matrix) {
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			printf("%3d ", matrix[i][j]);
		printf("\n");
	}
}

int main() {
	int** a = new int*[M];
	for (int i = 0; i < M; i++)
		a[i] = new int[N];
	gmx(a);
	pmx(a);
	int m = 0, sum[M] = {};
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			sum[i] += a[i][j];
	for (int i = 0; i < M; i++) 
		if (sum[i] > sum[m])
			m = i;
	printf("\n");
	for (int i = 0; i < N; i++)
		printf("%3d ", a[m][i]);
	printf("\n");
	system("pause");
	return 0;
}