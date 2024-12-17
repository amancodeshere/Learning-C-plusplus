#include <iostream>

int main() {

	std::cout << "************************************************************************" << std::endl;
	std::cout << "****************** Welcome to the simple calculator! *******************" << std::endl;
	double x, y;
	char op;
	std::cout << "Enter the first number: ";
	std::cin >> x;
	std::cout << "Enter the second number: ";
	std::cin >> y;
	std::cout << "Enter the operator: ";
	std::cin >> op;

	switch (op) {
		case '+':
			std::cout << x + y << std::endl;
			break;
		case '-':
			std::cout << x - y << std::endl;
			break;
		case '*':
			std::cout << x * y << std::endl;
			break;
		case '/':
			std::cout << x / y << std::endl;
			break;
		default:
			std::cout << "Invalid operator" << std::endl;
			break;
	}

	std::cout << "************************************************************************" << std::endl;
	std::cout << "************************************************************************" << std::endl;

	return 0;
}