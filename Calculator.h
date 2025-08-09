#pragma once
class Calculator
{
private:
	double num1, num2;

public:
	Calculator(double num1, double num2);

	void displayValues() const;
	
	double add() const;
	double subtract() const;
	double multiply() const;
	double divide() const;
};

