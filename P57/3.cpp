#include <cstdio>
#include <cstdlib>
void main(){
	int a, b, c;
	scanf("%i %i %i", &a, &b, &c);
	if (a > b && a < c || a < b && a > c)
		printf("this is %d\n", a);
	if (b > a && b < c || b < a && b > c)
		printf("this is %d\n", b);
	if (c > a && c < b || c < a && c > b)
		printf("this is %d\n", c);
	system("pause");
}