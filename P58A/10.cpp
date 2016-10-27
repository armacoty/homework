#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main() {
	int b1 = 0, b2 = 0, b3 = 0, b4 = 0;
	for(int i = 100; i <10000; i++){
		b1 = i / 1000;
		b2 = i % 1000 / 100;
		b3 = i % 100 / 10;
		b4 = i % 10;
		if(b1*b1*b1 + b2*b2*b2 + b3*b3*b3 + b4*b4*b4 == i)
			printf("%d\n", i);
	}
	system("pause");
}