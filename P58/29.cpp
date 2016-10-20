#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int n, mult = 1, sum = 0;
	do
	{
		scanf("%d", &n);
		if(n != 0)
			mult *= n;
		sum += n;
	} 
	while(n != 0);
	printf("mult: %d , sum: %d\n", mult, sum);
	std::system("pause");
}