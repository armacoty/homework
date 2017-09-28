#include <cstdio>
#include <cstdlib>
#include <ctime>

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

void qSortD(int *a, int end, int begin = 0) {
        int L, R, c, X;
        if(begin >= end)
                return;
        L = begin, R = end;
        X = a[(L+R)/2];
        while(L <= R) {
                while(a[L] > X)
                        L++;
                while(a[R] < X)
                        R--;
                if(L <= R) {
                        swap(&a[L], &a[R]);
                        L++;
                        R--;
                }
        }
        qSortD(a, R, begin);
        qSortD(a, end, L);
}


int binary(int *a, int n, int x) {
	int L = 0, c, R = n;
	while(L < R - 1) {
		c = (L + R) / 2;
		if (x == a[c])
			R = c - 1;
		else
			L = c + 1;
	}
	if(a[L] == x)
		return L;
	else
		return -L;
}

int main() {
	const int N = 10;
	int a[N];
	randarr(a, N, 0, 10);
	printarr(a, N);
	qSortD(a, N);
	printarr(a, N);
	int result = binary(a, N, 6);
	if(result >= 0)
		while(a[result] == 6)
			printf("%d\n",a[result++]);
	else
		printf("no elements\n");
	return 0;
}
