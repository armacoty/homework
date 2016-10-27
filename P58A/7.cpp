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

void main() {
	int a, b1 = 0, b2 = 0, b3 = 0, b4 = 0;
	a = read_int("N");
	for(double i = 0; i < 1; i+= 1.0 / a ){
		if(i >= 0 && i < 0.25)
			b1++;
		if(i >= 0.25 && i < 0.5)
			b2++;
		if(i >= 0.5 && i < 0.75)
			b3++;
		if(i >= 0.75 && i < 1)
			b4++;
	}
	printf
	(
		"[0, 0.25) ~ %d\n[0.25, 0.5) ~ %d\n[0.5, 0.75) ~ %d\n[0.75, 1) ~ %d\n",
		b1,
		b2,
		b3,
		b4
	);
	system("pause");
}