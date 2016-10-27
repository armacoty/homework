#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main() {
	for(int i = 10; i > 1; i-=2){
		printf("%d\n", pow(2, i));
	}
	system("pause");
}