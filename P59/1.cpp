#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
int read_int(char* text)
{
	printf(text);
	printf(" >>> ");
	int n;
	scanf("%d", &n);
	return n;
}

int to_oct(int n)
{
	if(n / 8 != 0)
		return to_oct(n / 8) * 10 + n % 8;
	else
		return n % 8;
}

void main()
{
	int n = read_int("N");
	printf("%d\n", to_oct(n));
	std::system("pause");
}