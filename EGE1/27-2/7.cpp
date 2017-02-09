#include <stdio.h>
#include <algorithm>
void main()
{
	int n, x, y, a, b;
	scanf("%d", &n);
	x = y = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &a, &b);
		if(abs(a) > abs(x) && b == 0)
			x = a;
		else if(a == 0 && abs(b) > abs(y))
			y = b;
	}
	if(x != 0 && y != 0)
		printf("%f", abs(x*y)/2.0);
	else
		printf("Triangle not exists!");
	
}