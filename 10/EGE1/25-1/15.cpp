#include <stdio.h>
#define N 40
void main()
{
	int a[N];
	int i, l, lmax, s, smax;
	for (i=0; i < N; i++)
		scanf("%d", &a[i]);
	lmax = 0;
	l = 1;
	s = a[0];
	for(i = 1; i < N; i++)
		if(a[i]>a[i-1])
		{
			l++;
			s += a[i];
		}
		else
		{
			if(l > lmax)
			{
				lmax = l;
				smax = s;
			}
			l = 1;
			s = a[i];
		}
	if(l > lmax)
		smax = s;
	printf("%d", smax);
}