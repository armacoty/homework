#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
	FILE *in, *out;
	int buf, lmax = 0, l = 0, last = INT_MIN;
	in = fopen("3I.txt", "r");
	out = fopen("3O.txt", "w");
	if(in){
		while(!feof(in)){
			fscanf(in, "%d", &buf);
			if(last == buf){
				l++;
				if(l > lmax){
					lmax = l;
				}
			}
			else
				l = 1;
			last = buf;
		}
		fprintf(out, "%d", lmax); 
	}
	else
		printf("error");
	fclose(in);
    fclose(out);
	return 0;
}