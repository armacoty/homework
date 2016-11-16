#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <limits.h>

int digits(int a)
{
	int c = 0;
	while (a != 0)
	{
		c++;
		a /= 10;
	}
	return c;
}

void main()
{
	int a;
	std::cin >> a;
	std::cout << digits(a) << std::endl;
	std::system("pause");
}