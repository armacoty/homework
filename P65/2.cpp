#include <cstdio>
#include <cstdlib>
#include <ctime>

int count = 0;

void swap(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

void randarr(int *arr, int sz, int a = 0, int b = -1){
	if(b == -1) b = sz - 1;
	srand(time(NULL));
	for(int i = 0; i < sz; i++)
		arr[i] = rand()% (b - a + 1) + a;
}

void printarr(int *b, int sz){
	for(int i = 0; i < sz; i++)
		printf("%d ", b[i]);
	printf("\n");
}

void readarr(int *b, int sz){
	for(int i = 0; i < sz; i++)
		scanf("%d", &b[i]);
}

void qSort(int *a, int end, int begin = 0) {
	int L, R, c, X;
	if(begin >= end)
		return;
	L = begin, R = end;
	X = a[(L+R)/2];
	while(L <= R) {
		while(a[L] < X)
			L++;
		while(a[R] > X)
			R--;
		if(L <= R) {
			swap(&a[L], &a[R]);
			L++;
			R--;
		}
	}
	qSort(a, R, begin);
	qSort(a, end, L);
}

int binary(int *a, int n, int x) {
	int L = 0, c, R = n;
	while(L < R - 1) {
		count++;
		c = (L + R) / 2;
		if (x < a[c])
			R = c;
		else
			L = c;
	}
	if(a[L] == x)
		return L;
	else
		return -L;
}

int main() {
	srand(time(NULL));
	const int N = 32;
	int a[N];
	randarr(a, N, 0, 100);
	printarr(a, N);
	qSort(a, N);
	printarr(a, N);
	for(int i = 0; i < 1000; i++)
		binary(a, N, rand() % 100);
	printf("%lf\n", count/1000.0);
	return 0;
}
