#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>

void func(int nn)
{
	int n = 0;
	while (nn != 0){
		n = n * 10 + nn % 10;
		nn /= 10;
	}
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