#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

void gen(char * alpha, char *alr, int size)
{
	if (strlen(alr) == size)
		printf("%s\n", alr);
	else
		for (unsigned int i = 0; i < strlen(alpha); i++) {
			char buf[256] = "";
			strcpy(buf, alr);
			strncat(buf, &alpha[i], 1);
			gen(alpha, buf, size);
		}
}

int main()
{
	printf("synopsis: <alphabet> <size>\n");
	char alpha[256];
	int size;
	scanf("%s %d", alpha, &size);
	gen(alpha, "", size);
	getchar();
	getchar();
	return 0;
}