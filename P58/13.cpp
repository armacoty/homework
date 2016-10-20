#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
void main() 
{
	int n, s = 0;
	scanf("%d", &n);
	while(n != 0)
	{
		s += n % 10;
		n/=10;
	}
	printf("sum is %d\n", s);
	std::system("pause");
}