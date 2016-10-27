#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
void main() {
	int n, c = 0;
	scanf("%d", &n);
	while(n != 0){
		if(n % 2 == 0)
			c++;
		n/=10;
	}
	printf("output: %d \n", c);
	std::system("pause");
}