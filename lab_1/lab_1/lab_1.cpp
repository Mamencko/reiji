// lab_1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	double x = 0;
	double y = 0;
	std::cout << "Enter x:\n";
	std::cin >> x;
	std::cout << "Enter y:\n";
	std::cin >> y;

	if (x == 0)
		std::cout << "Error\n";
	else if (x > 0.33)
		std::cout << "Error\n";
	else if (x < -0.33)
		std::cout << "Error\n";
	else
		std::cout << "Result = " << exp(y) + cos(5 * x) + 4 * pow(x, 2) / asin(3 * x) << "\n";
	
	system("pause");
	return 0;
}