#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath>
#include <cstdlib>

void main()
{
	int a = 0, b = 0;
	bool slz = false;
	scanf("%d %d", &a, &b);
	for(int i = a; i <= b; i++){
		slz = false;
		for(int j = 2; j < i; j++){
			if(i % j == 0 && i / j != 1)
				slz = true;
		}
		if(!slz)
			printf("%d \n", i);
	}
	system("pause");
}