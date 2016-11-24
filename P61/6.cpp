#include <iostream>
#include <cstdio>
using namespace std;

int Nod(int a, int b)
{
	//while (a != 0 && b != 0)
	while (a && b)
		if (a >= b)
			a -= b;
		else
			b -= a;
	//return a + b;
	return a | b;
}

int NodR(int a, int b)
{
	if(a == 0 || b == 0)
		return a | b;
	else
		if(a > b)
			return NodR(a - b, b);
		else
			return NodR(a, b - a);
}

void main()
{
	int a, b;
	cin >> a >> b;
	cout << "Nod: " << Nod(a, b) << endl << "NodR: " << NodR(a, b) << endl;
	system("pause");
}