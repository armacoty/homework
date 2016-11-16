#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>

int sum_of_digits(int n)
{
	int sum = 0;
	while (n != 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

bool is_sth(int n)
{
	for (int i = 2; i <= 9; i++)
	{
		if (sum_of_digits(n) != sum_of_digits(n*i))
			return false;
	}
	return true;
}

void main()
{
	int n;
	std::cin >> n;
	for (int i = 0; i <= n; i++)
	{
		if (is_sth(i))
			std::cout << i << std::endl;
	}
	std::system("pause");
}