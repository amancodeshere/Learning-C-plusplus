#include <iostream>

int main() {
	using std::cout; using std::cin;

	// break = break out a loop
	cout << "Testing Break\n";
	int i = 0;
	while (true) {
		cout << i <<'\n';
		i++;
		if (i == 3) break;
	}

	// continue = skips the current iteration
	cout << "Testing Continue\n";
	for (int j = 0; j < 20; j++) {
		if (j == 13) {
			cout << "skipped\n";
			continue;
		}
		cout << j << '\n';

	}


	return 0;
}