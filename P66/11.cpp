#include <stdio.h>
#include <string.h>
#include <limits.h>

int main(){
	char s1[80], s2[80];
	int n, _max = INT_MIN; //неведомая байда GNU C++ /\(^._.^)/\ ? это просто встроенное минимальное значение. 
	printf("count of citizens of USSR:"); // смешно (нет)
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		int y, g;
		char sb1[80], sb2[80];
		scanf("%s%s%i%i", sb1, sb2, &y, &g);
		if(g > _max){
			_max = g;
			strcpy(s1, sb1);
			strcpy(s2, sb2);
		}
	}
	printf("%s %s %d\n", s1, s2, _max);
	getchar();
	return 0;
}