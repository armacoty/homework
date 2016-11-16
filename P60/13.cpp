#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>

int sum_of_devisors(int n)
{
	int sum = 0;
	while (n != 1)
	{
		for (int i = 2; i <= n; i++)
		{
			if (n % i == 0)
			{
				sum += i;
				n /= i;
				break;
			}
		}
	}
	return sum;
}

void main()
{
	int n;
	std::cin >> n;
	if (n == sum_of_devisors(n))
		std::cout << "true" << std::endl;
	else 
		std::cout << "false" << std::endl;
	std::system("pause");
}