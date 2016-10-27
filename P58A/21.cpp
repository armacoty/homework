#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int n, c = 0;
	do
	{
		scanf("%d", &n);
		if(n % 2 == 0 && n > 0)
			c++;
	}  while (n != 0);
	printf("output:%d\n", c);
	std::system("pause");
}