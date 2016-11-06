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

void funny_quad(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++)
			std::cout << "*";
		std::cout << std::endl;
	}
}

void main()
{
	int n = read_int("N");
	funny_quad(n);
	std::system("pause");
}