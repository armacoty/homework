#include <stdio.h>
#include <string.h>
int main(){
	int d[356], m[356];
	float t[356], s = 0;
	for(int i = 0; i < 356; i++){
		scanf("%d.%d %f", &d[i], &m[i], &t[i]);
		s += t[i];
	}
	s /= 356;
	// no code :(
	return 0;
}