#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#define SELECTED_TYPE double

SELECTED_TYPE max3(SELECTED_TYPE a, SELECTED_TYPE b, SELECTED_TYPE c)
{
	if(a >= b && a >= c)
		return a;
	else
		if(b >= c)
			return b;
		else
			return c;
}

void main()
{
	SELECTED_TYPE a, b, c;
	std::cin >> a >> b >> c;
	std::cout << max3(a, b, c) << std::endl;
	std::system("pause");
}