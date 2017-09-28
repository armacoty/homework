#include <stdio.h>
#define N 30
void main()
{
	int a[N];
	int i, x, y;
	for (i=0; i < N; i++)
		scanf("%d", &a[i]);
	x = y = 0;
	for(i=0; i < N; i++)
		if(a[i]<a[N-1])
		{
			x++;
			y+= a[i];
		}
	printf("%f", float(y)/x);
}