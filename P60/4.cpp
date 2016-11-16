#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <limits.h>

int Nod(int a, int b)
{
	//while (a != 0 && b != 0)
	while (a && b)
		if (a >= b)
			a -= b;
		else
			b -= a;
	//return a + b;
	return a | b;
}

void main()
{
	int a, b;
	std::cin >> a >> b;
	std::cout << Nod(a, b) << std::endl;
	std::system("pause");
}