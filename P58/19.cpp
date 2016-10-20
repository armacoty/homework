#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int n, tmp, c, flag = 0;
	scanf("%d", &n);
	for(int i = 0; i < 10; i++)
	{
		tmp = n;
		c = 0;
		while(tmp != 0)
		{
			if(tmp % 10 == i)
				c++;
			tmp/=10;
		}
		if(c == 2 || c > 3)
		{
			printf("false\n");
			goto exit;
		}
		if(c == 3)
			flag++;
	}
	if(flag == 1)
		printf("true\n");
	else
		printf("false\n");
	exit:
	std::system("pause");
}