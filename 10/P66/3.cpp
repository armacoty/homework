#include <cstdio>
#include <string.h>
int main(){
	char s[80];
	gets(s);
	for(int i = 0; i < strlen(s); i++)
		if(s[i] == '/')
			printf("\n");
		else
			printf("%c", s[i]);
	printf("\n");
	return 0;
}