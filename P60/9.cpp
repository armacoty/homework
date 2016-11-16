#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>

namespace fib
{
	std::vector<long> cache(2, 1);
	std::vector<bool> is_calc(2, true);

	long calc(int n)
	{
		if (!is_calc[n - 1])
		{
			is_calc[n - 1] = true;
			cache[n - 1] = n < 3 ? 1 : calc(n - 1) + calc(n  - 2);
		}
		return cache[n - 1];
	}
}

void main()
{
	int n;
	std::cin >> n;
	
	for (int i = 2; i < n; i++)
	{
		fib::is_calc.push_back(false);
		fib::cache.push_back(1);
	}
	
	std::cout << fib::calc(n) << std::endl;
	std::system("pause");
}