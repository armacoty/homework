#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
int read_int(char* text){
	printf(text);
	printf(" >>> ");
	int n;
	scanf("%d", &n);
	return n;
}

int fib(int n){
	return 
	n == 1 || n == 2 ?
	1 :
	fib(n - 1) + fib(n - 2); 
}

void main()
{
	int n;
	n = read_int("N");
	for(int i = 1; i <= n; i++){
		printf("%d\n", fib(i));
	}
	
	std::system("pause");
}