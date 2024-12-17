#include <iostream>

int main() {

	std::cout << "Now creating an incrementing loop:\n";
	for (int i = 1; i < 11; i++) {
		std::cout << "count " << i << '\n';
	}

	std::cout << "\nNow creating a vairable incrementing loop:\n";
	for (int i = 1; i < 11; i+=2) {
		std::cout << "count " << i << '\n';
	}

	std::cout << "\nNow creating a decrementing loop:\n";
	for (int j = 20; j >= 10; j--) {
		std::cout << "count " << j << '\n';
	}

	std::cout << "\nNow creating a variable decrementing loop:\n";
	for (int j = 20; j >= 10; j-=2) {
		std::cout << "count " << j << '\n';
	}
	return 0;
}
