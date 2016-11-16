#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>

bool is_prime(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i*i <= n; i++)
		if (n % i == 0)
			return false;
	return true;
}

bool is_hyper_prime(int n)
{
	while (n != 0)
	{
		if (!is_prime(n))
			return false;
		n /= 10;
	}
	return true;
}

void main()
{
	int n;
	std::cin >> n;
	if (is_hyper_prime(n))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::system("pause");
}