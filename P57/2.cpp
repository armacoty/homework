#include <cstdio>
void main() {
	int a, min = 2147483647, max  = –2147483648;
	for(int i = 0; i < 5; i++){
		scanf("%d", &a);
		if(a > max)
			max = a;
		if(a < min)
			min = a;
	}
	printf("min = %d, max = %d", min, max);
	getchar();
}