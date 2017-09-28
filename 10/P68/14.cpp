#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void main(){
	FILE *in, *out;
	char a[80], b[80];
	int c, n = 1;
	in = fopen("1i.txt", "r");
	out = fopen("o.txt", "w");
	if(in){
		while(!feof(in)){
			fscanf(in, "%s %s %d", a, b, &c);
			if(c > 80)
				fprintf(out, "%d) %s %s %d", n++, a, b, c); 
		}
	}
	else
		printf("error");
}