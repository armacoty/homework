#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE *in, *out;
	int c = 0;
	char s[200];
	in = fopen("I.txt", "r");
	out = fopen("O.txt", "w");
	if (in) {
		while (!feof(in))
		{
			fscanf(in, "%s", s);
			if (s[0] == 'A')
				fprintf(out, "%s\n", s);
		}
	}
	else
		printf("error");
	fclose(in);
	fclose(out);
	return 0;
}