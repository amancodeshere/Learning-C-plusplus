#include <iostream>

/*
 * Type Conversion = converting one data type to another data type.
 *                   This is done using the static_cast function.
 *                   It is used when we want to convert one data type to another data type.
 */

int main() {
	double x = (int) 3.14;
	std::cout << x << std::endl; // This will print 3 // This is explicit type conversion

	// Implicit type conversion
	char d = 100;
	std::cout << d << std::endl; // This will print 'd' as per the ascii table // This is implicit type conversion

	// This is general use case:
	int points = 8;
	int totalPoints = 10;
	double score = points/totalPoints * 100;
	std::cout << score << std::endl; // This prints out 0 as it performs intereger division
	double score2 = points/ (double) totalPoints * 100;
	std::cout << score2 << std::endl; // This prints out 80
	return 0;
}