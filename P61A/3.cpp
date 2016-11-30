#include <iostream>
#include <cstdlib>
#include <limits.h>
#include <algorithm>
#include <cmath>
using namespace std;

int a = 0, b = 0;


int func_operations(int n)
{
	if (n > b)
		return  INT_MAX;
	if (n == b)
		return 0;
	if (n < b)
		return min(func_operations(n + 1), min(func_operations(n * 2), func_operations(n * n))) + 1;
}

int func_operators(int n)
{
	int to_return = 0;
	int min_operations = INT_MAX;
	if (n < b)
	{
		if (func_operations(n * n) <= min_operations)
		{
			to_return = func_operators(n * n) * 10 + 3;
			min_operations = func_operations(n * n);
		}
		if (func_operations(n * 2) <= min_operations)
		{
			to_return = func_operators(n * 2) * 10 + 2;
			min_operations = func_operations(n * 2);
		}
		if (func_operations(n + 1) <= min_operations)
			to_return = func_operators(n + 1) * 10 + 1;
	}
	return to_return;
}

void decode(int operators) {
	while (operators != 0)
	{
		switch (operators % 10)
		{
		case 1:
			printf("+1\n");
			break;
		case 2:
			printf("*2\n");
			break;
		case 3:
			printf("^2\n");
			break;
		default:
			printf("err\n");
			break;
		}
		operators /= 10;
	}
}

void main()
{
	scanf_s("%d%d", &a, &b);
	decode(func_operators(a));
	system("pause");
}