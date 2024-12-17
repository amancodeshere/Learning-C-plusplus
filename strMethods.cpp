#include <iostream>

int main() {
	using std::cout;
	std::string name = "Abhay";
	std::cout << "The current name stored is " << name << '\n';

	// str.clear wipes the string clean, makes it an empty string;
	name.clear();
	std::cout << name;

	std::cout << "Enter you name: ";
	std::getline(std::cin, name);

	// str.length() checks the length of that particular string
	if (name.length() > 12) std::cout << "Your name is too long.. Please Leave!" << std::endl;

	// str.empty() Checks if the string is empty, containing no characters
	else if (name.empty()) std::cout << "Can't leave this field blank\n";
	else std::cout << "Welcome " << name << '\n';

	// str.append(str) adds the string in the () at the end of the existing string
	name.append(" is very cool");
	std::cout << name << "\n";

	// str.at(x) This shows the character at a particular point in the string
	std::cout << name.at(1) << '\n';

	// str.insert(index, item) This will insert at a given point in the string the item you desire
	name.insert(0, "Hello ");
	std::cout << name << '\n';

	// str.find(item) will try to find the object in the given string
	// 				  it returns the position of that first index that item was found
	std::cout << name.find("a") << '\n';

	// str.erase(starting_index, ending_index) will erase that part of the string
	cout << name.erase(0, 6) << '\n';

	return 0;
}