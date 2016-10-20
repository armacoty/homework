#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int aa, bb, a, b, step = 0;
	scanf("%d%d", &aa, &bb);
	a = aa;
	b = bb;
	while(a != b)
	{
		if(a > b)
			a -= b;
		else
			b -= a;
		step++;
	}
	printf("output Evklid: %d, steps:%d\n", a, step);
	a = aa;
	b = bb;
	while(a != 0 && b != 0)
	{
		if(a>=b)
			a %= b;
		else
			b %= a;
		step++;
	}
	printf("output Evklid+: %d, steps:%d\n", a + b, step);
	std::system("pause");
}