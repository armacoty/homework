#include <iostream>
#include <cstdlib>
using namespace std;

int a = 0, b = 0;

int func(int n)
{
	if (n > b)
		return 0;
	if (n == b)
		return 1;
	if (n < b)
	{
		return func(n + 1) + func(n * 2) + func(n * n);
	}
}

void main()
{
	scanf("%d%d", &a, &b);
	printf("%d\n", func(a));
	system("pause");
}