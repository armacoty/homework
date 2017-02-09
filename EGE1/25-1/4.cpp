#include <stdio.h>
#define N 2000
int main(){
    int a[N];
    int i, k;
    for (i=0; i < N; i++)
        scanf("%d", &a[i]);
	k = 0;
	for(i = 0; i < N; i++)
		k+= a[i];
	if(k % 2 == 0)
	{
		k = 0;
		for(i=0; i < N; i++)
			if(a[i]%2==0)
				k++;
	}
	else
	{
		k = 0;
		for(i=0; i < N; i++)
			if(a[i]%2!=0)
				k++;
	}
	printf("%d", k);
    return 0;
}