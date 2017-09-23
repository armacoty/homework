#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WORD1 "parovoz"
#define WORD2 "parohod"

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
			if (strcmp(s, WORD1) == 0)
				fprintf(out, WORD2);
			else
				fprintf(out, "%s\n", s);
		}
	}
	else
		printf("error");
	fclose(in);
	fclose(out);
	return 0;
}