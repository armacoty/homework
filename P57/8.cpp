#include <cstdio>
#include <cstdlib>
void main() {
	int a, b1, b2, b3, b4, c = 0;
	scanf("%d", &a);
	b1 = a / 1000;
	b2 = a % 1000 / 100;
	b3 = a % 100 / 10;
	b4 = a % 10;
	if (b1 == b2)
		c++;
	if (b2 == b3)
		c++;
	if (b3 == b4)
		c++;
	if (b1 == b3)
		c++;
	if (b2 == b4)
		c++;
	if (b1 == b4)
		c++;
	printf(c == 1 ? "true\n" : "false\n");
	system("pause");
}