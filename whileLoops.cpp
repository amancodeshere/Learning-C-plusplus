#include <iostream>

int main() {
	using std::string;
	using std::cout;

	string user;

	while (user.empty()) {
		cout << "Enter Name: ";
		std::getline(std::cin, user);
	}
	cout << "Hello " << user << '\n';

	while (true) {
		cout << "HELP IM STUCK!!\n";
	}

	return 0;
}