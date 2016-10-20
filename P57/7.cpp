#include <cstdio>
#include <cstdlib>
void main() {
	int a;
	scanf("%d", &a);
	
	if(a / 1000 <= a % 1000 / 100 && a % 1000 / 100 <= a % 100 / 10 && a % 100 / 10 <= a % 10)
		printf("true\n");
	else
		printf("false\n");
	system("pause");
}