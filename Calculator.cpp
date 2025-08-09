#include "Calculator.h"
#include <iostream>

Calculator::Calculator(double num1, double num2) : num1(num1), num2(num2)
{
}

void Calculator::displayValues() const
{
	std::cout << "Number 1: " << num1 << "\n";
	std::cout << "Number 2: " << num2 << "\n";
}

double Calculator::add() const
{
	return num1 + num2;
}

double Calculator::subtract() const
{
	return num1 - num2;
}

double Calculator::multiply() const
{
	return num1 * num2;
}

double Calculator::divide() const
{
	if (num2 == 0) {
		std::cout << "Error. Division by 0 is undefined.\n";
		return -1;
	}
	return num1 / num2;
}
