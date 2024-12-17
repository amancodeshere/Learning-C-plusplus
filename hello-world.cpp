#include <iostream>
#include <string>

/**
 * @brief The main program entry point
 * @return 0 on success
 */
int main() {
  std::cout << "hello world" << std::endl;

  // Now removing the << std::endl statement
  std::cout << "Number1";
  std::cout << "Number2";

  // The std::endl is the same as added a \n
  std::cout << "Number3" << std::endl; // when run we can clearly see that it will create a \n at the end of Number3

  // Fun exercise
  std::string name;
  std::cout << "Enter your name: ";
  std::getline(std::cin, name);
  std::cout << "Hello " << name << std::endl;

  return 0;
}
