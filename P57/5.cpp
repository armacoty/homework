#include <cstdio>
#include <cstdlib>
void main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf(
		a / 100 == b || a % 100 / 10 == b || a % 10 == b ? "true\n" : "false\n");
	system("pause");
}