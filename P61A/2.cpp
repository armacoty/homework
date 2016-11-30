#include <iostream>
#include <cstdlib>
#include <limits.h>
#include <algorithm>
using namespace std;

int a = 0, b = 0;

int func(int n)
{
	if (n > b)
		return INT_MAX;
	if (n == b)
		return 0;
	if (n < b)
	{
		return min(func(n + 1), min(func(n * 2), func(n * n))) + 1;
	}
}

void main()
{
	scanf("%d%d", &a, &b);
	printf("%d\n", func(a));
	system("pause");
}