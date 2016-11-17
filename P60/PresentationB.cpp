#pragma once
#include <iostream>
#include <cstdlib>
#include <vector>

int Nod(int a, int b)
{
	//while (a != 0 && b != 0)
	while (a && b)
		if (a >= b)
			a -= b;
		else
			b -= a;
	//return a + b;
	return a | b;
}

bool is_sth(int a, int b)
{
	return Nod(a, b) == 1;
}

void main()
{
	int a, b;
	std::cin >> a >> b;
	if (is_sth(a, b))
		std::cout << "true" << std::endl;
	else
		std::cout << "false" << std::endl;
	std::system("pause");
}