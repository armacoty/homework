#pragma once
#include <iostream>
#include <cstdlib>

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

bool is_friendly(int a, int b)
{
	return (sum_of_devisors(a) == sum_of_devisors(b));
}

void main()
{
	int n;
	std::cin >> n;
	for (int i = 1; i <= 10000; i++)
	{
		for (int j = 1; j < 10000; j++)
		{
			if (is_friendly(i, j))
			{
				std::cout << std::cout.width(5) << i << " | " << j << std::endl;
			}
		}
	}
	std::cout << sum_of_devisors(n) << std::endl;
	std::system("pause");
}