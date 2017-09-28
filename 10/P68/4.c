#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *in, *out;
	int a[100], n, buf, i, j;
	in = fopen("./4I.txt", "r");
	out = fopen("./4O.txt", "w");
	if(in){
		while(!feof(in))
			fscanf(in, "%d", &a[n++]);
        for(i = 0; i < 10; i++)
            for(j = 0; j < n; j++)
                if(a[j] % 10 == i)
                    fprintf(out, "%d\n", a[j]);
	}
	else
		printf("error");
    fclose(in);
    fclose(out);
	return 0;
}