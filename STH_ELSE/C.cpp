#include <cstdio>
#include <cstdlib>
#define M 4
#define N 4
void main(){
	int a[N][M];
	/*
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
	printf("color EZ: %d\n", s);
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
			printf("%3d ", a[i][j]);
		printf("\n");
	}*/
	int c = 0;
	int i = 0, j = 0;
	while(c < N * M){
		while(j < M && j+1==M? false: a[i][j+1]==0)
			a[i][j++] = ++c;
		while(i < N && i+1==N? false: a[i+1][j]==0)
			a[i++][j] = ++c;
		while(j > 0 && j-1==-1? false: a[i][j-1]==0)
			a[i][j--] = ++c;
		while(i > 0 && i-1==-1? false: a[i-1][j]==0)
			a[i--][j] = ++c;
	}
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
			printf("%3d ", a[i][j]);
		printf("\n");
	}
	system("pause");
}