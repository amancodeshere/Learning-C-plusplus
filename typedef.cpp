#include <iostream>

/*
 * typedef = reserved keyword used to cerate an additional name (alias) for another data type.
 * 		     New idenifier for an existing data type.
 *           Helps with readability and reduces typos.
 */

typedef std::string text_T;
typedef int number_T;

// This way of using typedef is not recommended
// we can use use 'using' instead
using text_T = std::string;
using number_T = int;


int main() {
	text_T firstName = "a";
	number_T age = 21;
	std::cout << "hello " << firstName << " whose age is: " << age << std::endl;
	return 0;
}