#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main() 
{
	int a, b;
	scanf("%d%d", &a, &b);
	while(a != b){
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	printf("NOD is %d\n", a);
	system("pause");
}