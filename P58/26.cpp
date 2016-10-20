#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	while(a != 0 && b != 0)
		if(a>=b)
			a %= b;
		else
			b %= a;
	printf("output: %d\n", a + b);
	std::system("pause");
}