#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int n, o = 0;
	scanf("%d", &n);
	while(n != 0){
		o = n % 10 + 10 * o;
		n /= 10;
	}
	printf("result: %d\n", o);
	std::system("pause");
}