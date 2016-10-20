#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
void main() {
	int a, b, sum = 0;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++)
		sum += i*i;
	printf("sum is %d\n", sum);
	std::system("pause");
}