#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
void main() {
	int a;
	scanf("%d", &a);
	srand(time(nullptr));
	//SUPER RANDOM!!!
	/*
	srand(rand());
	srand(rand());
	srand(rand());
	*/
	for (int i = 0; i < a; i++)
		printf("%d\n", rand());
	std::system("pause");
}