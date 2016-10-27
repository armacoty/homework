#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int n, a, result;
	printf("input:\"a n\"\n");
	scanf("%d%d", &a, &n);
	printf("a^n: %d\n", int(pow(a, n)));
	std::system("pause");
}