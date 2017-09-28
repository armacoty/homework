#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <cmath>

int read_int(char* text)
{
	printf(text);
	printf(" >>> ");
	int n;
	scanf("%d", &n);
	return n;
}

int month(int x)
{
	return 28 + (x + x/8) % 2 + 2 % x + 2 * 1/x;
}

void main()
{
	int n = read_int("N");
	std::cout << month(n) << std::endl;
	std::system("pause");
}