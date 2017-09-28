#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *in, *out;
	int c = 0;
	char s[200];
	in = fopen("9I.txt", "r");
	out = fopen("9O.txt", "w");
	if (in) {
		while (!feof(in))
		{
			fscanf(in, "%s", s);
			c++;
		}
		fprintf(out, "%d", c);
	}
	else
		printf("error");
	fclose(in);
	fclose(out);
	return 0;
}