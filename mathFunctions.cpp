#include <iostream>
#include <cmath>

int main() {
	double x = 3;
	double y = 4;
	double z;

	z = std::max(x, y);
	std::cout << z << std::endl;

	z = std::min(x, y);
	std::cout << z << std::endl;

	z = std::pow(x, y);
	std::cout << z << std::endl;

	z = std::sqrt(y);
	std::cout << z << std::endl;

	z = round(195.5);
	std::cout << z << std::endl;

	z = abs(-5);
	std::cout << z << std::endl;

	z = ceil(3.14);
	std::cout << z << std::endl;

	z = floor(3.14);
	std::cout << z << std::endl;

	return 0;
}