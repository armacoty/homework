#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
#include <time.h>

int cube() {
	return rand() % 6 + 1;
}

void main()
{
	srand(time(nullptr));
	std::cout << "---" << cube() << "--- ---" << cube() << "---" << std::endl;
	std::system("pause");
}