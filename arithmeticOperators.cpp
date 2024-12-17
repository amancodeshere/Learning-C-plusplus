#include <iostream>

/*
 * Arithmetic Operators = return the result of a mathematical operation.
 *                        They will always follow the BEDMAS rule.
 * +, -, *, /, %
 */

int main() {
	int x = 5;
	int y = 6;
	int sum = x + y;
	int difference = x - y;
	int product = x * y;
	double quotient = x / y;
	int remainder = x % y;
	std::cout << x << " + " << y << " = " << sum << std::endl;
	std::cout << x << " - " << y << " = " << difference << std::endl;
	std::cout << x << " * " << y << " = " << product << std::endl;
	std::cout << x << " / " << y << " = " << quotient << std::endl;
	std::cout << x << " % " << y << " = " << remainder << std::endl;

	std::cout << "The base value of x is " << x << std::endl;
	(x+=1);
	std::cout << "The value of x incremented (x+=1 / x++) is " << x << std::endl;
	(x-=1);
	std::cout << "The value of x decremented (x-=1 / x--) is " << x << std::endl;

	return 0;
}