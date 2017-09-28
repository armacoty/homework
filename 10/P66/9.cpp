#include <stdio.h>
#include <string.h>

int main(){
	char s[80], w[80], *i = s, c = 0;
	gets(s);
	gets(w);
	pos:
	i = strstr(i, w);
	if(i != NULL){
		i = &i[1];
		c++;
		goto pos;
	}
	printf("%d\n", c);
	getchar();
	return 0;
}