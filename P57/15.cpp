#include <cstdio>
#include <cstdlib>
void main() {
	double x, y;
	scanf("%lf%lf", &x, &y);
	if(y <= 1)
		printf("a) true\n");
	else
		printf("a) false\n");
	if(y <= -x)
		printf("b) true\n");
	else
		printf("b) false\n");
	if(x*x + y*y <= 1)
		printf("c) true\n");
	else
		printf("c) false\n");
	if((x-1)*(x-1)+ y*y <= 1) 
		printf("d) true\n");
	else
		printf("d) false\n");
	
	system("pause");
}