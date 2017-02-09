#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}
void bubble_sort(int *b, int sz) {
	for (int i = 0; i < sz - 1; i++)
		for (int j = sz - 2; j >= i; j--)
			if (b[j] % 10 > b[j + 1] % 10)
				swap(&b[j], &b[j + 1]);
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
	bubble_sort(b, N);
	printarr(b, N);
	system("pause");
}