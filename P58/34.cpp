#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int n, fm2 = 1, fm1 = 1, fib;
	scanf("%d", &n);
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
	
	std::system("pause");
}