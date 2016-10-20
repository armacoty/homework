#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int n, c = -2147483648;
	do
	{
		scanf("%d", &n);
		if(n < c && n != 0)
		{
			printf("false\n");
			goto exit;
		}
		c = n;
	} while(n != 0);
	printf("true\n");
	exit:
	std::system("pause");
}