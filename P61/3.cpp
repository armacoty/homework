#include <iostream>
#include <cstdio>
using namespace std;

int to_bin(int n)
{
	if (n / 2 != 0)
		return to_bin(n / 2) * 10 + n % 2;
	else
		return n % 2;
}

void main()
{
	for (int i = 0; i < 16; i++)
		cout << to_bin(i) << endl;
	system("pause");
}