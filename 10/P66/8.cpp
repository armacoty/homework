#include <stdio.h>
#include <string.h>

int main(){
	char s[80], r[80] = ".", r2[80];
	char *i;
	gets(s);
	gets(r2);
	strcat(r, r2);
	i = strrchr(s, '.');
	if(i == NULL)
		i = s + strlen(s);
	strcpy(i , r);
	puts(s);
	getchar();
	return 0;
}