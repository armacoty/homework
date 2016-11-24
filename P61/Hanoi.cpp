#include <iostream>
#include <cstdio>
using namespace std;

void Hanoi(int n, int k, int m)
{
	if(n == 0) return;
	Hanoi(n - 1, k, 6 - k - m);
	cout << k << " -> " << m << endl;
	Hanoi(n - 1, 6 - k - m, m);
}

void main()
{
	int n;
	cin >> n;
	Hanoi(n, 1, 3);
	system("pause");
}