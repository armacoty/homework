#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *in, *out;
	int s, n, buf;
	s = n = 0;
	in = fopen("1I.txt", "r");
	out = fopen("1O.txt", "w");
	if(in){
		while(!feof(in)){
			fscanf(in, "%d", &buf);
			s += buf;
			n++;
		}
		fprintf(out, "%f", ((float) s)/n);
	}
	else
		printf("error");
	fclose(in);
    fclose(out);
	return 0;
}