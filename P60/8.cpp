#pragma once
#include <iostream>
#include <cstdlib>

int fact(int n)
{
	return n == 1 ? 1 : n * fact(n - 1);
}

void main()
{
	int n;
	std::cin >> n;
	std::cout << fact(n) << std::endl;
	std::system("pause");
}