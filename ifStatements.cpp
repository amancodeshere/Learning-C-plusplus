#include <iostream>

/*
 * if statements = used to execute a block of code if a certain condition is true.
 *                 They are used to make decisions in a program.
 */

int main() {
	int age;
	std::cout << "Enter your age: ";
	std::cin >> age;
	if (age >= 18) {
		std::cout << "You are old enough to drink" << std::endl;
	} else if (age < 0) {
		std::cout << "You haven't been born yet" << std::endl;
	} else {
		std::cout << "You are not old enough to drink" << std::endl;
	}
	return 0;
}