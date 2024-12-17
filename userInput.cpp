#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main() {
	std::string name;
	std::cout << "Enter your name: ";
	std::cin >> name;
	std::cout << "Hello " << name << std::endl;
	std::cout << "Your name has " << name.size() << " characters" << std::endl;
	std::cout << "Enter you age: ";
	int age;
	std::cin >> age;
	std::cout << "You are " << age << " years old" << std::endl;

	// If we want to read lines that may contain spaces we need to use the getline function
	std::string address;
	std::cout << "Enter your full name: ";
	// if we want to extract words without preluding white spaces add >> std::ws
	std::getline(std::cin >> std::ws, address);
	std::cout << "Your full name is: " << address << std::endl;
	return 0;
}