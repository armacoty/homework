#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
void main() {
	int a;
	scanf("%d", &a);
	for (int i = 1; i <= a; i++)
		printf("%d\n", i * 2);
	std::system("pause");
}