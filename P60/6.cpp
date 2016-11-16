#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <limits.h>

int f(int a)
{
	int result = 0;
	while (a != 0)
	{
		result = 10 * result + a % 10;
		a /= 10;
	}
	return result;
}

void main()
{
	int a;
	std::cin >> a;
	std::cout << f(a) << std::endl;
	std::system("pause");
}