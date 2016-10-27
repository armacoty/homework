#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
int mult(int a, int b){
	int result = 0;
	for (int i = 0; i != b; b >= 0 ? i++ : i--) {
		result += b >= 0 ? a : -a;
	}
	return result;
}

void main() {
	int a, b;
	scanf("%d%d", &a, &b);
	printf("multiplication of %d and %d is %d\n", a, b, mult(a, b));
	std::system("pause");
}