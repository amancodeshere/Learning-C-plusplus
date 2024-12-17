#include <iostream>

int main() {

	using std::cout;
	using std::cin;

	// Fun loops inside of loops
	for (int i = 0; i <  5; i++) {
		for (int j = 0; j < 5; j++) {
		std::cout << '[' << i << ", " << j << ']' << ' ';
		}
		std::cout << '\n';
	}

	int rows;
	int columns;
	char symbol;
	cout << "Enter the number of rows: ";
	cin >> rows;
	cout << "Enter the number of columns: ";
	cin >> columns;
	cout << "Enter the symbol you wnat: ";
	cin >> symbol;
	for (int i = 0; i <  rows; i++) {
		for (int j = 0; j < columns; j++) {
			std::cout << symbol;
		}
		std::cout << '\n';
	}


	return 0;
}