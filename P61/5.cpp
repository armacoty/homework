#include <iostream>
#include <cstdio>
using namespace std;

int bin_to_dec(int n)
{
	if (n == 0)
		return 0;
	else
		return n % 10 + bin_to_dec(n / 10) * 2;
}

//для проверки
int to_bin(int n)
{
	if (n / 2 != 0)
		return to_bin(n / 2) * 10 + n % 2;
	else
		return n % 2;
}

void main()
{
	int n;
	cin >> n;
	cout << "n: " << n << endl << "bin: " << to_bin(n) << endl << "dec: " << bin_to_dec(to_bin(n)) << endl;
	system("pause");
}