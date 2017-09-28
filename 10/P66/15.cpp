#define _CRT_SECURE_NO_WARNINGS

#include <cstdio>
#include <cstring>

int counter = 0;

void gen(char * alpha, char *alr, int size)
{
	if (strlen(alr) == size) {
		int c = 0;
		for (int i = 1; i < size; i++)
			if (alr[i] == alr[i - 1] && (alr[i] == 'Y' || alr[i] == 'O'))
				c = 1;
		if (c != 1) {
			counter++;
			printf("%s\n", alr);
		}
	}
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
	printf("{ 'Y' }\nsynopsis:<size >= 2>\n");
	char alpha[256] = "YSCO";
	int size;
	scanf("%d", &size);
	gen(alpha, "", size);
	printf("%d", counter);
	getchar();
	getchar();
	return 0;
}