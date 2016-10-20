#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int n, b, e, c = 0, a = 0;
	bool flag = false;
	scanf("%d", &n);
	e = n % 10;
	n/=10;
	while(n != 0){
		if (n > 9){
			c+= pow(10, a++) * (n % 10);
		}
		else
			b = n;
		n/=10;
	}
	printf("%d%d%d\n", e, c, b);
	std::system("pause");
}