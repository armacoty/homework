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
	int** a = new int*[10];
	for (int i = 0; i < 10; i++)
		a[i] = new int[10];
	gmx(a);
	pmx(a);
	int m = 0, n = 0;
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			if (a[i][j] > a[m][n]) {
				m = i;
				n = j;
			}
	printf("\n{max} %3d | a[%d][%d]\n", a[m][n], m, n);
	m = n = 0;
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			if (a[i][j] < a[m][n]) {
				m = i;
				n = j;
			}
	printf("{min} %3d | a[%d][%d]\n", a[m][n], m, n);
	system("pause");
	return 0;
}