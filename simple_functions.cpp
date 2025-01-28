#include <iostream>

// The function can be declared here but it is better to declare it below the main and have a prototype here
//void happyBday(std::string name) {
//	std::cout << "\nHappy Birthday to you!\n";
//	std::cout << "Happy Birthday to you!\n";
//	std::cout << "Happy Birthday dear "<< name << "!\n";
//	std::cout << "Happy Birthday to you!\n";
//	std::cout << "Happy Birthday to you!\n\n";
//}

// Function Prototyes ++> Better Practice
void happyBday(std::string name, int age);

int main() {

	int age = 18;

	// function = a block of code
	happyBday("Abhay", age);
	happyBday("Abhay", age);
	happyBday("Abhay", age);


}

/*
*  This function sing the user happy birthday
*
* @param {std::string} name
* @return {void}
 */
void happyBday(std::string name, int age) {
	std::cout << "\nHappy Birthday to you!\n";
	std::cout << "Happy Birthday to you!\n";
	std::cout << "Happy Birthday dear "<< name << "!\n";
	std::cout << "Happy Birthday to you!\n";
	std::cout << "Happy Birthday to you!\n\n";
	std::cout << "You are now " << age << " years old\n";
}