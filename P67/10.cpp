//8ABC
//help needed
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define M 7
#define N 7

int irand(int a, int b) {
	return rand() % (b - a + 1) + a;
}

void gmx(int** matrix) {
	srand(time(NULL));
	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			matrix[i][j] = irand(0, 0);
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
    int x = 0, y = 0;
    int dx = 1, dy = 0;
	for(int i = 1; i <= M*N; i++){
        a[x][y] = i;
        
        x += dx;
        y += dy;
    }
	pmx(a);
    getchar();
	return 0;
}