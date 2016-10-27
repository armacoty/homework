#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
void main() {
	int n, tmp, tmpq;
	bool flag = true;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		tmp = i;
		tmpq = i*i;
		flag = true;
		while(tmp != 0){
			if(tmp % 10 != tmpq % 10)
				flag = false;
			tmp/=10;
			tmpq/=10;
		}
		if(flag)
			printf("%d*%d=%d - automorth\n", i, i, i*i);
	}
	std::system("pause");
}