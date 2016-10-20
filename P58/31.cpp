#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int n, fact = 1;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
		fact *= i;
	printf("n: %d , fact: %d\n", n, fact);
	std::system("pause");
}