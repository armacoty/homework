#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main() {
	int n, sum = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
		sum += i;
	printf("%d\n", sum);
	system("pause");
}