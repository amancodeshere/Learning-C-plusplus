#include <iostream>
#include <cmath>

int main() {
	double temp;
	char unit;

	std::cout << "******* Temperature Conversion ********\n";
	std::cout << "F = Fahrenheit\n";
	std::cout << "C = Celsius\n";
	std::cout << "What unit would you like to convert to: ";
	std::cin >> unit;

	if (unit == 'F' || unit == 'f') {
		std::cout << "Please enter the termperature in Celsius: ";
		std::cin >> temp;
		temp = (1.8 * temp) + 32.0;
		std::cout << "The converted termperature is " << temp << 'F' << '\n';
	} else if (unit == 'C' || unit == 'c') {
		std::cout << "Please enter the termperature in Fahrenheit: ";
		std::cin >> temp;
		temp = (temp - 32.0) / 1.8;
		std::cout << "The converted termperature is " << temp << 'C' << '\n';
	} else {
	std::cout << "Please enter a vaild unit\n";
	}

	std::cout << "***************************************\n";
}