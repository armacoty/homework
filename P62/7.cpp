#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <ctime>
#define N 30
int random(int a, int b)
{
	return rand() % (b - a + 1) + a;
}
void main()
{
	int arr[N], a = 0;
	srand(time(NULL));
	for (int i = 0; i < N; i++)
		arr[i] = random(1000, 2000);
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
	for (int i = 0; i < N; i++)
		if (arr[i] / 10 % 2 == 0)
			a++;
	printf("a:%d\n", a);
	system("pause");
}