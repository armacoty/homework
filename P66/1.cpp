#include <cstdio>
#include <string.h>
int main(){
	char s[80];
	gets(s);
	for(int i = 0; i < strlen(s); i++)
		switch(s[i]){
			case 'a':
				s[i] = 'b';
				break;
			case 'A':
				s[i] = 'B';
				break;
			case 'b':
				s[i] = 'a';
				break;
			case 'B':
				s[i] = 'A';
				break;
			default:
				break;
		}
	puts(s);
	return 0;
}