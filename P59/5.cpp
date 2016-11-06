#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <locale.h>
#include <stdio.h>
#include <string>
int read_int(char* text)
{
	printf(text);
	printf(" >>> ");
	int n;
	scanf("%d", &n);
	return n;
}

#define DG_POWER 6
struct s_POWER 
{
	int sex;
	char *one;
	char *four;
	char *many;
}
a_power[] = {
	{ 0, NULL, NULL, NULL },  // 1
	{ 1, "тысяча ", "тысячи ", "тысяч " },  // 2
	{ 0, "миллион ", "миллиона ", "миллионов " },  // 3
	{ 0, "миллиард ", "миллиарда ", "миллиардов " },  // 4
	{ 0, "триллион ", "триллиона ", "триллионов " },  // 5
	{ 0, "квадриллион ", "квадриллиона ", "квадриллионов " },  // 6
	{ 0, "квинтиллион ", "квинтиллиона ", "квинтиллионов " }   // 7
};

struct s_UNIT
{
	char *one[2];
	char *two;
	char *dec;
	char *hun;
} 
digit[10] = {
	{ { "", "" }, "десять ", "", ""},
	{ { "один ", "одна " }, "одиннадцать ", "десять ", "сто "},
	{ { "два ", "две " }, "двенадцать ", "двадцать ", "двести "},
	{ { "три ", "три " }, "тринадцать ", "тридцать ", "триста " },
	{ { "четыре ", "четыре " }, "четырнадцать ","сорок "      ,"четыреста " },
	{ { "пять ", "пять " }, "пятнадцать ", "пятьдесят ", "пятьсот " },
	{ { "шесть ", "шесть " }, "шестнадцать " ,"шестьдесят ", "шестьсот " },
	{ { "семь ", "семь " }, "семнадцать ", "семьдесят " ,"семьсот " },
	{ { "восемь ", "восемь " }, "восемнадцать ", "восемьдесят ", "восемьсот " },
	{ { "девять ", "девять " }, "девятнадцать ", "девяносто ", "девятьсот " }
};

std::string dig2str(__int64 p_summa, int p_sex, char *p_one, char *p_four, char *p_many)
{
	int    i, mny;
	std::string str, result = "";
	__int64 divisor; //делитель

	a_power[0].sex = p_sex;
	a_power[0].one = p_one;
	a_power[0].four = p_four;
	a_power[0].many = p_many;

	if (p_summa == (__int64)0)
		return std::string("ноль ") + p_many;
	if (p_summa <  (__int64)0)
	{
		result = "минус "; p_summa = -p_summa;
	}

	for (i = 0, divisor = (__int64)1; i<DG_POWER; i++)
		divisor *= (__int64)1000;
	for (i = DG_POWER - 1; i >= 0; i--)
	{
		divisor /= 1000;
		mny = (int)(p_summa / divisor);
		p_summa %= divisor;
		str = "";
		if (mny == 0) 
		{
			if (i>0) continue;
			str += a_power[i].one;
		}
		else
		{
			if (mny >= 100)
			{ 
				str += digit[mny / 100].hun;
				mny %= 100; 
			}
			if (mny >= 20) { 
				str += digit[mny / 10].dec;
				mny %= 10; 
			}
			if (mny >= 10) 
				str += digit[mny - 10].two; 
			else
				if (mny >= 1) 
					str += digit[mny].one[a_power[i].sex];
			switch (mny)
			{
			case 1: 
				str += a_power[i].one; 
				break;
			case 2: 
			case 3:
			case 4: 
				str += a_power[i].four; 
				break;
			default: 
				str += a_power[i].many; 
				break;
			};
		}
		result += str;
	}
	return result;
}

void main()
{
	setlocale(LC_ALL, "RUS");
	int n = read_int("N");
	std::cout << n << " " << dig2str(n, 0, "", "", "") << std::endl;
	std::system("pause");
}