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
	int arr[N], as = 0, ac = 0, bs = 0, bc = 0;
	srand(time(NULL));
	for (int i = 0; i < N; i++)
		arr[i] = random(0, 100);
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");

	for (int i = 0; i < N; i++)
		if (arr[i] < 50)
		{
			as += arr[i];
			ac++;
		}
		else
		{
			bs += arr[i];
			bc++;
		}
	printf("<50  : %lf\n>=50 : %lf\n", 1.0 * as / ac, 1.0 * bs / bc);
	system("pause");
}