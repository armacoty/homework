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

bool simple(int n)
{
    for(int i = 2; i <= n / 2; i++)
		if( n % i == 0 ) 
			return false;
	return true;
}

void main()
{
	int n = read_int("N");
	if(simple(n))
		printf("prostoe\n");
	else
		printf("slozhnoe\n");
	std::system("pause");
}