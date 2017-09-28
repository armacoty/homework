#include <cstdio>
#include <string.h>
int main(){
	char name[256], surname[256], f[256];
	scanf("%s %s %s", &surname, &name, &f);
	printf("%c. %c. %s", name[0], f[0], surname);
	printf("\n");
	return 0;
}