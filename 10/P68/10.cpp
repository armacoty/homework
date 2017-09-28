#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool haveA(char* s) {
	char *p = s;
	char buf[20];
	while (true)
	{
		sscanf(p, "%s", buf);
		if (buf[0] == 'A')
			return true;
		p = strchr(p, ' ');
		if (p == NULL)
			return false;
		else
			p++;
	}
}

int main() {
	FILE *in, *out;
	int c = 0;
	char s[200];
	in = fopen("I.txt", "r");
	out = fopen("O.txt", "w");
	if (in) {
		while (!feof(in))
		{
			//fscanf(in, "%s", s);
			fgets(s, 200, in);
			if (haveA(s))
				fputs(s, out);
		}
	}
	else
		printf("error");
	fclose(in);
	fclose(out);
	return 0;
}