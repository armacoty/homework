#include <cstdio>
#include <string.h>
int main(){
	char s[80];
	gets(s);
	int n = strlen(s);
	for(int i = 0; i < n / 2; i++)
		if(s[i] != s[n-i-1]){
			printf("NO\n");
			return 0;
		}
	printf("YES\n");
	return 0;
}