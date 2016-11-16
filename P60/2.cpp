#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <limits.h>

double mark(int a[5])
{
	int min_id = 0, max_id = 0, 
		min = INT_MAX, max = INT_MIN,
		sum = 0;
	for (int i = 0; i < 5; i++)
	{
		if (a[i] > max)
		{
			max_id = i;
			max = a[i];
		}
		if (a[i] < min)
		{
			min_id = i;
			min = a[i];
		}
	}
	for (int i = 0; i < 5; i++)
		if (i != min_id && i != max_id)
			sum += a[i];
	return sum / 3.0;
}

void main()
{
	int a[5];
	std::cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
	std::cout << mark(a) << std::endl;
	std::system("pause");
}