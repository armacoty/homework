#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int n, mult = 1, sum = 0;
	for(int i = 0; i < 10; i++){
		scanf("%d", &n);
		mult *= n;
		sum += n;
	}
	printf("mult: %d , sum: %d\n", mult, sum);
	std::system("pause");
}