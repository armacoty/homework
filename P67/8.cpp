//7B
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define M 7
#define N 7

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
	for (int i = 1; i < M-1; i++)
		for (int j = 1; j < N-1; j++)
			if (j < M - i)
				a[i][j] = 99;
	pmx(a);
    getchar();
	return 0;
}