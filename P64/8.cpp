#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

#define SORT_UP     0
#define SORT_DOWN   1

void select_sort_r(int *b, int sz, int a = 0, int p = SORT_UP) {
	if(a == sz - 1)
		return;
	int nmin = a;
	for(int i = a + 1; i < sz; i++)
		if( p == SORT_UP && b[i] < b[nmin] || p == SORT_DOWN && b[i] > b[nmin])
			nmin = i;
	if(a != nmin)
		swap(&b[a], &b[nmin]);
	select_sort_r(b, sz, ++a, p);
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

void SuPeRsOrT(int *arr, int sz) {
	select_sort_r(arr, sz / 2, 0, SORT_UP);
	select_sort_r(arr, sz, sz / 2, SORT_DOWN);
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
	SuPeRsOrT(b, N);
	printarr(b, N);
	system("pause");
}
