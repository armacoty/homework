#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}
void select_sort_k(int *b, int sz, int k) {
	int nmin;
	for (int i = 0; i < sz - 1 && i < k; i++) {
		nmin = i;
		for (int j = i + 1; j < sz; j++)
			if (b[j] < b[nmin])
				nmin = j;
		if (i != nmin)
			swap(&b[i], &b[nmin]);
	}
}
void randarr(int *arr, int sz, int a = 1, int b = 100) {
	srand(time(NULL));
	for (int i = 0; i < sz; i++)
		arr[i] = rand() % (b - a + 1) + a;
}
void printarr(int *b, int sz) {
	for (int i = 0; i < sz; i++)
		printf("%d ", b[i]);
	printf("\n");
}
void readarr(int *b, int sz) {
	for (int i = 0; i < sz; i++)
		scanf("%d", &b[i]);
}
// ^ ^
//(0.0)
// | |
// ||_)/\/
void main() {
	const int N = 10;
	int b[N];
	randarr(b, N);
	printarr(b, N);
	select_sort_k(b, N, 3);
	printarr(b, N);
	system("pause");
}