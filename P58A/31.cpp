#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
int read_int(char* text)
{
	printf(text);
	printf(" >>> ");
	int n;
	scanf("%d", &n);
	return n;
}

int fact(int n){
	return n == 1 ? 1 : n * fact(n - 1);
}

void main()
{
	int n;
	n = read_int("N");
	printf("N = %d , N! = %d\n", n, fact(n));
	std::system("pause");
}