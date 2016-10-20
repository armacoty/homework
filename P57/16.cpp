#include <cstdio>
#include <cstdlib>
#include <cmath>
void main() {
	double x, y;
	scanf("%lf%lf", &x, &y);
	if(x*x + y*y >= 4 && y <= x && x <= 2 && y >= 0)
		printf("1) true\n");
	else
		printf("1) false\n");
	
	if(y <= sin(x) && y <= 0.5 && y >= 0)
		printf("2) true\n");
	else
		printf("2) false\n");
	
	if(y <= 2 - x*x && (y >=x || y >= 0))
		printf("3) true\n");
	else
		printf("3) false\n");
	
	if(y > x*x - 2 && (y <= x || y <= -x)) 
		printf("4) true\n");
	else
		printf("4) false\n");
	
	if(x*x + y*y <= 1 && (y >= x || x <= 0)) 
		printf("5) true\n");
	else
		printf("5) false\n");
	
	if(x*x + y*y <= 1 && (y >= -x || x >= 0)) 
		printf("6) true\n");
	else
		printf("6) false\n");
	
	if((y >= 1 - x && y >= 2*x*x && x <=0) || (x >= 0 || x <= 1 || y >= 1 - x)) 
		printf("7) true\n");
	else
		printf("7) false\n");
	
	if(x > 0 && y <= 1 &&(x*x + y*y <= 0 || y >= x - 1)) 
		printf("8) true\n");
	else
		printf("8) false\n");
	
	if(x*x + y*y <= 1 || (x <= 1 && x >= 0 && y <= 1 && y >= 0)) 
		printf("9) true\n");
	else
		printf("9) false\n");
	
	system("pause");
}