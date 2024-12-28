#include <iostream>

int main() {
	using std::cout, std::cin;

	int num;
	int guess;
	int tries = 0;

	srand(time(NULL));
	num = (rand() % 100) + 1;
	cout << " *** NUMBER GUESSING GAME *** \n";

	do {
		cout << " Enter a guess between (1-100): ";
		cin >> guess;
		if (!std::is_integral<decltype(guess)>::value || std::is_floating_point<decltype(guess)>::value) {
			cout << "Please enter a number\n";
		} else if (num < guess) {
			cout << "Guess is too high\n";
		} else if (num > guess) {
			cout << "Guess is too low\n";
		} else {
			cout << "Weldone you have guessed correctly\n";
		}

		tries++;
	} while (guess != num);

	cout << "The player took " << tries << " to guess the number: " << num << '\n';


	return 0;
}