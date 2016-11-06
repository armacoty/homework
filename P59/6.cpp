#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>

int read_int(char* text)
{
	printf(text);
	printf(" >>> ");
	int n;
	scanf("%d", &n);
	return n;
}

void func(int n)
{
	int fm2 = 1, fm1 = 1, fib;
	for(int j = 1; j <= n; j++){
		fm2 = 1;
		fm1 = 1;
		if(j == 1 || j == 2)
			printf("fib[%d]: %d\n", j, 1);
		else
		{
			for(int i = 3; i <= j; i++)
			{
				fib = fm2 + fm1;
				fm2 = fm1;
				fm1 = fib;
			}
			printf("fib[%d]: %d\n", j, fib);
		}
	}
	
}

void main()
{
	int n = read_int("N");
	func(n);
	std::system("pause");
}