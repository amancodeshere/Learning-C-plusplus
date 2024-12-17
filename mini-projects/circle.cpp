#include <iostream>

int main() {
	const double PI = 3.14159; // using const here makes the value of pi unchangeable later in the program
	double radius;
	std::cout << "Enter the radius of the circle: ";
	std::cin >> radius;
	double area = PI * radius * radius;
	std::cout << "The area of the circle is: " << area << std::endl;

	return 0;
}