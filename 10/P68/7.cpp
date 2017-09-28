#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b){
    return (*(int*)a - *(int*)b);
}

int main(){
	FILE *in1, *in2, *out;
	int a[200], n, i;
	in1 = fopen("6I1.txt", "r");
    in2 = fopen("6I2.txt", "r");
	out = fopen("6O.txt", "w");
	if(in1 && in2){
		while(!feof(in1))
			fscanf(in1, "%d", &a[n++]);
        while(!feof(in2))
			fscanf(in2, "%d", &a[n++]);
        qsort(a, n, sizeof(int), compare);
        for(i = 0; i < n; i++)
            fprintf(out, "%d\n", a[i]);
	}
	else
		printf("error");
    fclose(in1);
    fclose(in2);
    fclose(out);
	return 0;
}