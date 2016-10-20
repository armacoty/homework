#include <cstdio>
#include <cstdlib>
void main() {
	int a, b, c;
	scanf("%d", &a);
	
	b = a / 100 + a % 100 / 10;
	c = a % 100 / 10 + a % 10;
	if(b > c)
		printf("%d%d\n", c, b);
	else
		printf("%d%d\n", b, c);
	system("pause");
}