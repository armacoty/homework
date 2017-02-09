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
			if(a == b && abs(a) > abs(x) && abs(a) == abs(b))
				x = a;
			else if(abs(a) > abs(y) && abs(a) == abs(b))
				y = a;
	}
	if(x != 0 && y != 0)
		printf("%d", abs(x*y));
	else
		printf("Triangle not exists!");
	
}