#include <iostream>

/*
 * Namespace = provides a solution for preventing name conflicts in large projects.
 *             Each entity needs a unique name. A name scapce alllws for identically
 *             named entities as long as they are in different namespaces.
 * */

namespace first {
	int x = 5;
} // namespace first

namespace second {
	int x = 10;
} // namespace second

int main() {
	int x = 15;
	std::cout << x << std::endl; // This will print the local version of the variable x
	std::cout << first::x << std::endl; // This will print the global version of the variable x from the first namespace
	std::cout << second::x << std::endl; // This will print the global version of the variable x from the second namespace

	// Another way of doing this would be:
	using namespace first;
	std::cout << x << std::endl; // This should only use the first namespace

	// We can also use the namespace standard library
	// Using something like `using namespace std;` will allow us to use all of the standard library functions
	// this is not recommended because it can cause name conflicts
	using std::cout;
	using std::endl;
	cout << "Hello World" << endl;

	return 0;
}