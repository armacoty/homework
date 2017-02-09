#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>

void swap(int *a, int *b) {
	int c = *a;
	*a = *b;
	*b = c;
}

void bubble_sort_r(int *b, int sz) {
	if(sz == 1)
		return;
	for(int i = 0; i < sz - 1; i++)
		if(b[i + 1] < b[i])
			swap(&b[i], &b[i + 1]);
	bubble_sort_r(b, sz - 1);
}

void select_sort_r(int *b, int sz, int a = 0) {
	if(a == sz - 1)
		return;
	int nmin = a;
	for(int i = a + 1; i < sz; i++)
		if(b[i] < b[nmin])
			nmin = i;
	if(a != nmin)
		swap(&b[a], &b[nmin]);
	select_sort_r(b, sz, ++a);
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
	select_sort_r(b, N);
	printarr(b, N);
	system("pause");
}