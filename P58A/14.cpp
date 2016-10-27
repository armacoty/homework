#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
void main()
{
	int n, l = -1;
	bool flag = false;
	scanf("%d", &n);
	while(n != 0)
	{
		if(n % 10 == l)
			flag = true;
		l = n % 10;
		n/=10;
	}
	printf(flag? "true\n" : "false\n");
	std::system("pause");
}