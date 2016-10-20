#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <limits.h>
void main()
{
	int n, min = INT_MAX, max = INT_MIN;
	do
	{
		scanf("%d", &n);
		if(n != 0){
			if(n < min)
				min = n;
			if(n > max)
				max = n;
		}
	} 
	while(n != 0);
	printf("min: %d , max: %d\n", min, max);
	std::system("pause");
}