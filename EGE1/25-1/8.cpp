#include <stdio.h>
#define N 2015
int main()
{
	int a[N];
	int i, j, k;
	for (i=0; i < N; i++)
		scanf("%d", &a[i]);
	k = 0;
	for (i=1; i < N-1; i++)
		if(a[i] > a[i-1] && a[i] > a[i+1] && a[i] > k)
			k = a[i];
	printf("%d", k);
	return 0;
}