#include <iostream>

// do while loops = do some block of code first, THEN repeat it again if the condition is true

int main() {

	using std::cout;
	using std::string;

	int number;

	while (number < 0) {
		cout << "Enter a postive number: ";
		std::cin >> number;

	}
	cout << "the number is " << number << '\n'; // The item returned is the pointer to the number

	// Now using a do-while loop:
	int a;
	do {
		cout << "Enter a number: ";
		std::cin >> a;
	} while (number < 0);

	return 0;
}