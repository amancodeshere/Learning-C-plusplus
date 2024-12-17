#include <iostream>

int main() {

	// && = and -> check if the two conditions are true
	// || = or -> check if atleast one of two conditions are true
	// ! = not -> check if the consitodent is false

	int temp;
	bool sunny = true;
	std::cout << "Enter the temperature: ";
	std::cin >> temp;

	if (temp >= 20 && temp <= 25) {
		std::cout << "It's a nice day" << std::endl;
	} else if (temp > 25 || temp < 20) {
		std::cout << "It's not a nice day" << std::endl;
	}

	if (!sunny) {
		std::cout << "It's not sunny" << std::endl;
	} else {
		std::cout << "It's sunny" << std::endl;
	}

	return 0;
}