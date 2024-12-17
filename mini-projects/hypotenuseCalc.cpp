#include <iostream>
#include <cmath>

/**
 * @brief The main program entry point
 * @details This program asks the user for the length of two sides of a right triangle
 *          and then calculates and prints the length of the hypotenuse.
 * @return 0 on success
 */
int main() {
	double a, b, c;
	std::cout << "Enter the length of side a: ";
	std::cin >> a;
	std::cout << "Enter the length of side b: ";
	std::cin >> b;
	int aSquared = pow(a, 2);
	int bSquared = pow(b, 2);
	c = sqrt(aSquared + bSquared);
	std::cout << "The length of the hypotenuse is: " << c << std::endl;
	return 0;
}
