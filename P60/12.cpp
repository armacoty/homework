#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>

bool is_prime(int n)
{
	if (n < 2)
		return false;
	for(int i = 2; i*i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

void main()
{
	int n;
	std::cin >> n;
	if (is_prime(n))
		std::cout << "true" << std::endl;
	else 
		std::cout << "false" << std::endl;
	std::system("pause");
}