#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
void main() {
	for (int i = 10000; i < 100000; i++)
		if(i % 133 == 125 && i % 134 == 111)
			printf("%d\n", i);
	std::system("pause");
}