#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
#include <locale.h>

int read_int(char* text)
{
	printf(text);
	printf(" >>> ");
	int n;
	scanf("%d", &n);
	return n;
}

std::string age_converter(int a)
{
	if (a % 10 > 4 || a % 10 == 0 || (a % 100 > 10 && a % 100 < 20))
		return "лет";
	else
		if (a % 10 == 1)
			return "год";
		else
			return "года";
}

void main()
{
	setlocale(LC_ALL, "RUS");
	int n = read_int("N");
	std::cout << n << " " << age_converter(n) << std::endl;
	/*
	for(int i = 0; i <= 200; i++)
		std::cout << i << " " << age_converter(i) << std::endl;
	*/
	std::system("pause");
}