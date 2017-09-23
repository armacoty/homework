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
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			if (j > i)
				a[i][j] = 0;
	pmx(a);
	system("pause");
	return 0;
}