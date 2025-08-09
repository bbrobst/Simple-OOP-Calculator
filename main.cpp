#include "Calculator.h"
#include <iostream>


int main() {
	Calculator c1(22, 85);
	Calculator c2(55, 0);

	std::cout << "\n";
	c1.displayValues();
	std::cout << "\n";
	std::cout << "Result of adding: " << c1.add() << "\n";
	std::cout << "Result of subtracting: " << c1.subtract() << "\n";
	std::cout << "Result of multiplying: " << c1.multiply() << "\n";
	std::cout << "Result of dividing: " << c1.divide() << "\n";

	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";

	c2.displayValues();
	std::cout << "\n";
	std::cout << "Result of adding: " << c2.add() << "\n";
	std::cout << "Result of subtracting: " << c2.subtract() << "\n";
	std::cout << "Result of multiplying: " << c2.multiply() << "\n";
	std::cout << "Result of dividing: " << c2.divide() << "\n";
}
