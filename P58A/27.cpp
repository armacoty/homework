#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>

int read_int(char* text){
	printf(text);
	printf(" >>> ");
	int n;
	scanf("%d", &n);
	return n;
}

int step = 0;

int NOD(int a, int b)
{
	while(a != b)
	{
		if(a > b)
			a -= b;
		else
			b -= a;
		step++;
	}
	return a;
}

int NOD_A(int a, int b){
	while(a != 0 && b != 0)
	{
		if(a>=b)
			a %= b;
		else
			b %= a;
		step++;
	}
	return a + b;
}

void main()
{
	int a, b;
	a = read_int("a");
	b = read_int("b");
	printf("output Evklid: %d", NOD(a, b));
	printf(", steps:%d\n", step);
	step = 0;
	printf("output Evklid+: %d", NOD_A(a, b));
	printf(", steps:%d\n", step);
	std::system("pause");
}