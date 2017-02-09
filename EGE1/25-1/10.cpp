#include <stdio.h>
#define N 30
void main()
{
	int a[N];
	int min, max, i, sum;
	for (i=0; i < N; i++)
		scanf("%d", &a[i]);
	sum = 0;
	min = max = a[0];
	for (i=0; i < N; i++)
	{
		if(a[i] <= min)
			min = a[i];
		if(a[i] >= max)
			max = a[i];
		sum += a[i];
	}
	printf("%f", (min + max)/2.0 - float(sum)/N);
}