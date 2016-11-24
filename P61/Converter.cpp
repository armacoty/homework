#include <iostream>
#include <cstdio>
using namespace std;

int dec_to_n(int n, int base)
{
	if (n / base != 0)
		return dec_to_n(n / base, base) * 10 + n % base;
	else
		return n % base;
}

int n_to_dec(int n, int base)
{
	if (n == 0)
		return 0;
	else
		return n % 10 + n_to_dec(n / 10, base) * base;
}

void main()
{
	int n, a, b;
	cout << "covert: ";
	cin >> n;
	cout << "from(base): ";
	cin >> a;
	cout << "to(base): ";
	cin >> b;
	cout << "---" << dec_to_n(n_to_dec(n, a), b) << "---" << endl;
	system("pause");
}