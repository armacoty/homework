#include <iostream>
#include <cstdio>
using namespace std;

void func(int n)
{
	for (int i = 2; i <= n; i++)
		if (n % i == 0)
		{
			cout << i;
			if (n != i)
				cout << "*";
			func(n / i);
			break;
		}
}

void main()
{
	int a;
	cin >> a;
	func(a);
	cout << endl;
	system("pause");
}