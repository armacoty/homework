#include <stdio.h>
#define N 40
void main()
{
    long a[N];
    long i, j, k;
    for (i=0; i<N; i++)
		scanf("%ld",&a[i]);
	k = 0;
    for (i=1; i<N; i++)
		if((a[i]+a[i-1])%2==1 && (a[i]*a[i-1]) < 100)
			k++;
	printf("%d", k);
}