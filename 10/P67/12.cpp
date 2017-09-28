//10
#include <cstdio>
#include <cstdlib>
#define M 4
#define N 4
void main(){
	int a[N][M];
	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
			scanf("%d ", &a[i][j]);
	float s = 0.0;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
			s += a[i][j];
	s /= N * M;
	for(int i = 0; i < N; i++)
		for(int j = 0; j < M; j++)
			if(a[i][j] > s)
				a[i][j] = 255;
			else
				a[i][j] = 0;
	printf("color: %d\n", s);
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
			printf("%3d ", a[i][j]);
		printf("\n");
	}
	system("pause");
}