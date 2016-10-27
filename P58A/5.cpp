#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

int read_int(char* text){
	printf(text);
	printf(" >>> ");
	int n;
	scanf("%d", &n);
	return n;
}

void main() {
	int a, b, sum = 0;
	a = read_int("a");
	b = read_int("b");
	
	for (int i = a; i <= b; i++)
		sum += i*i;
	
	printf("sum is %d\n", sum);
	std::system("pause");
}