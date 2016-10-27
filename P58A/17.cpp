#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <cmath>
void main()
{
	int n, tmp, c;
	scanf("%d", &n);
	for(int i = 0; i < 10; i++){
		tmp = n;
		c = 0;
		while(tmp != 0){
			if(tmp % 10 == i)
				c++;
			tmp/=10;
		}
		if (c >= 2){
			printf("true\n");
			goto exit;
		}
	}
	printf("false\n");
	exit:
	std::system("pause");
}