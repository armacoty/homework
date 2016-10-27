#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
int read_int(char* text){
	printf(text);
	printf(" >>> ");
	int n;
	scanf("%d", &n);
	return n;
}

void main() {
	int a;
	a = read_int("N");
	srand(time(nullptr));
	for (int i = 0; i < a; i++)
		printf("%d\n", rand());
	std::system("pause");
}