#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int n, tmp, c = 0, sum;
	do
	{
		scanf("%d", &n);
		//---
		sum = 0;
		tmp = n;
		while(tmp != 0)
		{
			sum += tmp % 10;
			tmp /= 10;
		}
		//---
		if(sum == 10)
			c++;
	} while(n != 0);
	printf("output: %d\n", c);
	std::system("pause");
}