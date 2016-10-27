#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int n, c;
	scanf("%d", &n);
	c = n % 10;
	n/=10;
	while(n != 0){
		if(c != n % 10){
			printf("false\n");
			goto g;
		}
		n/=10;
	}
	printf("true\n");
	g:
	std::system("pause");
}