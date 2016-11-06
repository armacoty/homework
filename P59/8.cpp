#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>

void func(int n)
{
	while (n != 0)
	{
		std::cout << n % 10 << std::endl;
		n /= 10;
	}
}

void main()
{
	int n;
	std::cin >> n;
	func(n);
	std::system("pause");
}