#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n){
    int s = 0;
    while(n != 0){
        s += n % 10;
        n /= 10;
    }
    return s;
}

int compare (const void * a, const void * b){
    return ( sum_of_digits(*(int*)a) - sum_of_digits(*(int*)b) );
}

int main(){
	FILE *in, *out;
	int a[100], n, i;
	in = fopen("5I.txt", "r");
	out = fopen("5O.txt", "w");
	if(in){
		while(!feof(in))
			fscanf(in, "%d", &a[n++]);
        qsort(a, n, sizeof(int), compare);
        for(i = 0; i < n; i++)
            fprintf(out, "%d\n", a[i]);
	}
	else
		printf("error");
    fclose(in);
    fclose(out);
	return 0;
}