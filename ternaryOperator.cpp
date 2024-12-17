#include <iostream>

/*
 * ternary operator ?: = replces the if/else statement
 * condition ? expression1 : expression2
 */

int isEven(int number) {
	return number % 2 == 0 ? true : false;
}

int main() {

	int grade = 75;
	if (grade >= 60) std::cout << "Passed" << std::endl;
	else std::cout << "Failed" << std::endl;

	// This same example using the ternary operator
	// The braces are added to make it easier to read and are not necessary
	grade >= 60 ? (std::cout << "Passed" << std::endl) : (std::cout << "Failed" << std::endl);

	std::cout << isEven(5) << std::endl; // returns false 0
	std::cout << isEven(6) << std::endl; // returns true 1

	bool hungry = true;
	hungry ? std::cout << "I'm hungry" << std::endl : std::cout << "I'm not hungry" << std::endl;\
	std::cout << (!hungry ? "I'm hungry" : "I'm not hungry") << std::endl;

	return 0;
}