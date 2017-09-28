#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
	FILE *in, *out;
	int buf, min = INT_MAX, max = INT_MIN, mine = 0, maxe = 0;
	
	in = fopen("2I.txt", "r");
	out = fopen("2O.txt", "w");
	if(in){
		while(!feof(in)){
			fscanf(in, "%d", &buf);
			if(buf % 2 == 0 && buf > 0){
				if(buf > max)
				{
					max = buf;
					maxe = 1;
				}
				if(buf < min)
				{
					min = buf;
					mine = 1;
				}
			}
		}
		if(maxe)
			fprintf(out, "max %d\n", max);
		else
			fprintf(out, "max ---\n");
		if(mine)
			fprintf(out, "min %d\n", min);
		else
			fprintf(out, "min ---\n");
	}
	else
		printf("error");
	fclose(in);
    fclose(out);
	return 0;
}