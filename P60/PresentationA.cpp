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

bool is_sth(int n)
{
	return n == sum_of_devisors(n);
}

void main()
{
	int n;
	std::cin >> n;
	if (is_sth(n))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::system("pause");
}