#include <stdio.h>
#define N 30
void main()
{
	int a[N];
	int i, j, s;
	for (i=0; i < N; i++)
		scanf("%d", &a[i]);
	s = 0;
	for (i=0; i < N; i++)
		if(a[i]>9 && a[i]<100 && a[i]/10>a[i]%10)
			s += a[i];
	printf("%d", s);
}