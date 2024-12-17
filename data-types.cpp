#include <iostream>

int main() {
	// The int data type is used to store whole numbers
    int x = 5;
    int y = 6;
    int sum = x + y;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

	// If a decimal is stored in an integer, it will be truncated to an integer
	int a = 5.5;
	std::cout << a << '\n'; // The 5.5 will be truncated to 5

	// the double data type is used to store decimal numbers
	double b = 5.5;
	std::cout << b << '\n';
	double gpa = 2.5;
	std::cout << gpa << '\n';

	// the char data type is used to store single characters
	char grades = 'A';
	std::cout << grades << '\n';
	char initial = 'a';
	std::cout << initial << '\n';

	// the bool data type is used to store true or false values
	bool student = true;
	std::cout << student << '\n';
	bool pass = false;
	std::cout << pass << '\n';

	// the string data type is used to store text
	std::string name = "Aman";
	std::cout << name << '\n';
	std::string address = "Camperdown";
	std::cout << address << '\n';

	// Using string literals
	std::cout << "Hello " << name << " from " << address << '\n' << "Have a nice day!" << std::endl;

    return 0;
}