#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>

void func(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
			std::cout << i << " ";
	}
	std::cout << std::endl;
}

void main()
{
	int n;
	std::cin >> n;
	func(n);
	std::system("pause");
}