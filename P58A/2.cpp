#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
int sum(int n){
	int result = 0;
	for(int i = 1; i <= n; i++)
		result += i;
	return result;
}

void main() {
	int n;
	scanf("%d", &n);
	
	printf("%d\n", sum(n));
	system("pause");
}