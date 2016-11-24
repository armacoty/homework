#include <iostream>
#include <cstdio>
using namespace std;

int Nod(int a, int b)
{
	if(a == 0 || b == 0)
		return a | b;
	else
		if(a > b)
			return Nod(a - b, b);
		else
			return Nod(a, b - a);
}

void main()
{
	int a, b;
	cin >> a >> b;
	cout << "Nod: " << Nod(a, b) << endl;
	system("pause");
}