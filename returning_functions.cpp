#include <iostream>

// Function Prototypes
int the_great_adder(int x, int y);
int the_great_multiplier(int x, int y);
int the_great_subtractor(int x, int y);
int the_great_divider(int x, int y);

int main(void) {
	int num1;
	int num2;
	std::cout << "Enter the first number: ";
	std::cin >> num1;
	std::cout << "Enter the second number: ";
	std::cin >> num2;

	std::cout << "The sum of " << num1 << " and " << num2 << " is " << the_great_adder(num1, num2) << '\n';
	std::cout << "The multplication of " << num1 << " and " << num2 << " is " << the_great_multiplier(num1, num2) << '\n';
	std::cout << "The subtraction of " << num1 << " by " << num2 << " is " << the_great_subtractor(num1, num2) << '\n';
	std::cout << "The division of " << num1 << " by " << num2 << " is " << the_great_divider(num1, num2) << '\n';

}

/*
* @breif Does the grand operation of addition
* @param {int} x
* @param {int} y
* @return {int} x + y
*/
int the_great_adder(int x, int y) {
	return x + y;
}

/*
* @breif Does the grand operation of multiplication
* @param {int} x
* @param {int} y
* @return {int} x * y
*/
int the_great_multiplier(int x, int y) {
	return x * y;
}

/*
* @breif Does the grand operation of subtraction
* @param {int} x
* @param {int} y
* @return {int} x - y
*/
int the_great_subtractor(int x, int y) {
    return x - y;
}

/*
* @breif Does the grand operation of division
* @param {int} x
* @param {int} y
* @return {int} x / y
*/
int the_great_divider(int x, int y) {
    return x / y;
}
