#include <iostream>
#include <ctime>

int main() {
	using std::cout, std::cin;

	srand(time(NULL));

	int randNum = rand() % 5 + 1;

	switch(randNum) {
		case 1:
			cout << "You win a bumper STICKER\n";
			break;
		case 2:
			cout << "You get to visit KIM JONG UN\n";
			break;
		case 3:
			cout << "You get to participate in the Squid Games\n";
			break;
		case 4:
			cout << "You get a brand new Nissan GTR\n";
			break;
		case 5:
			cout << "You get to use this program??\n";
			break;
	}

	return 0;
}
