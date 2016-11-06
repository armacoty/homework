#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
int read_int(char* text)
{
	printf(text);
	printf(" >>> ");
	int n;
	scanf("%d", &n);
	return n;
}

std::string to_hex_char(int n)
{
	if (n < 10)
		return std::to_string(n);
	else
		switch (n)
		{
		case 10:
			return "A";
			break;
		case 11:
			return "B";
			break;
		case 12:
			return "C";
			break;
		case 13:
			return "D";
			break;
		case 14:
			return "E";
			break;
		case 15:
			return "F";
			break;
		default:
			return "?";
			break;
		}
}

std::string to_hex(int n)
{
	if (n / 16 != 0)
		return to_hex(n / 16) + to_hex_char(n % 16);
	else
		return to_hex_char(n % 16);
}

void main()
{
	int n = read_int("N");
	std::cout << to_hex(n) << std::endl;
	std::system("pause");
}