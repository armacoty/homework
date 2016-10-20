#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
void main() {
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++)
		printf("%d*%d=%d\n", i, i, i*i);
	std::system("pause");
}