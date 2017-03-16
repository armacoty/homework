#include <stdio.h>
#include <string.h>
#include <limits.h>

struct data{
	//неведомая байда GNU C++ /\(^._.^)/\ ? Вовсе нет. 
	//Просто структура данных. Могу научить делать такие.
	char s1[80], s2[80];
	int y, g;
};

int main(){
	data d[100];
	int n;
	printf("count of citizens of USSR:"); // смешно (нет)
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%s%s%i%i", d[i].s1, d[i].s2, &d[i].y, &d[i].g);
	}
	// ASCII A-Z : {65 -- 90}
	for(char i = 65; i <= 90; i++){
		for(int id = 0; id < n; id++){
			if(d[id].g > 0 && d[id].s1[0] == i){
				printf("%s %s", d[id].s1, d[id].s2);
			}
		}
	}
	getchar();
	return 0;
}