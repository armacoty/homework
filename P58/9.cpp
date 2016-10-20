#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
void main() {
	int n, tmp, num;
	bool flag1 = true;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		tmp = i;
		flag1 = true;
		while (tmp != 0) {
			num = tmp % 10;
			tmp /= 10;
			//если поставить && то вылетит ошибка "devision by 0" в "i % num == 0"
			if (num != 0)
				if (i % num != 0)
					flag1 = false;
		}
		if (flag1)
			printf("%d\n", i);
	}
	std::system("pause");
}