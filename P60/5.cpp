#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <limits.h>


int Nok(int a, int b)
{
	int max = a > b? a : b;
	for (int i = max; i > 0; i++)
		if ((i % a == 0) && (i % b == 0))
			return i;
}

void main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << Nok(a, b) << std::endl;
	std::system("pause");
}