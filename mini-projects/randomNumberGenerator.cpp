#include <iostream>
#include <ctime>

int main() {

	using std::cout, std::cin;

	// pseudon random = NOT truly random (but close)

	srand(time(NULL));

	int numDice;
	cout << "Number of dice you wnat to roll: ";
	cin >> numDice;

	int limit;
	cout << "What is your upper limit for each dice: ";
	cin >> limit;

	for (int i = 0; i < numDice; i++) {
		int num = (rand() % limit) + 1;
		cout << "Your roll on dice" << i << " is: " << num << '\n';
	}

	return 0;
}