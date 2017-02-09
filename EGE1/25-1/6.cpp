#include <stdio.h>
#define N 40
void main()
{
    int a[N];
    int i, j, max;
    for (i=0; i<N; i++)
		scanf("%d",&a[i]);
	max = -1;
	for (i=0; i<N; i++)
		if(a[i]%3!=0 && a[i]>9 && a[i]< 100 && a[i]>max)
			max = a[i];
		
	if(max == -1)
		printf("Не найдено");
	else
		printf("%d", max);
}
