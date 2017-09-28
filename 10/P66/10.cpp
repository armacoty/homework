#include <stdio.h>
#include <string.h>

int main(){
	char s[80], c = 0;
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int y, g;
		scanf("%s%s%i%i", s, s, &y, &g); //несмешной комментарий, в 11.срр смешнее будет
		if(y >= 1998 && y <= 2000 && g == 0)
			c++;
	}
	printf("%d\n", c);
	getchar();
	return 0;
}