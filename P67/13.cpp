//11
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define M 3
#define N 4

int irand(int a, int b) {
	return rand() % (b - a + 1) + a;
}

void gmx(int** matrix) {
	srand(time(NULL));
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			matrix[i][j] = irand(0, 9);
}

void pmx(int** matrix) {
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			printf("%2d ", matrix[i][j]);
		printf("\n");
	}
}
int main() {
	int** a = new int*[M];
	for (int i = 0; i < M; i++)
		a[i] = new int[N];
	gmx(a);
	pmx(a);
    int** b = new int*[M];
	for (int i = 0; i < M; i++)
		b[i] = new int[N];
    for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
            b[M - i - 1][j] = a[i][j];
    printf("\n\n");
    for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			printf("%2d ", b[i][j]);
		printf("\n");
	}
    getchar();
	return 0;
}