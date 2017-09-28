#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *in, *out;
	char s[200];
	in = fopen("8I.txt", "r");
	out = fopen("8O.txt", "w");
	if (in) {
		while (!feof(in))
		{
			fscanf(in, "%s", s);
			if (strcmp(s, "koroche") != 0)
				fprintf(out, "%s ", s);
		}
	}
	else
		printf("error");
	fclose(in);
	fclose(out);
	return 0;
}