#include <stdio.h>
#include <string.h>
int main(){
	char s[100];
	int ch[256];
	for(int i = 0; i < 256; i++){
		ch[i] = 0;
	}
	gets(s);
	for(char *i = s; i < strchr(s, '.'); i++){
		ch[i[0]] ++;
	}
	int max = 0;
	for(int i = 0; i < 256; i++){
		if(ch[i] > max)
			max = ch[i];
	}
	for(int i = 0; i < 256; i++){
		if(ch[i] == max)
			printf("%c%d\n", i, ch[i]);
	}
	
	return 0;
}