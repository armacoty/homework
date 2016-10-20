#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>

void main() {
	int a, b, result = 0;
	scanf("%d%d", &a, &b);
	for (int i = 0; i != b; b >= 0 ? i++ : i--) {
		result += b>=0? a : -a;
	}
	printf("multiplication of %d and %d is %d\n", a, b, result);
	std::system("pause");
}