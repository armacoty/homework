#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
void print(int i){
	printf(">>> %d\n", i * 2);
}

void all_N(int n){
	for (int i = 1; i <= n; i++)
		print(i);
}

void main() {
	int a;
	scanf("%d", &a);
	all_N(a);
	std::system("pause");
}