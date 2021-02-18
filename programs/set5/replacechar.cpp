#include <iostream>
#include <limits.h>
#include <math.h>
#include <stdexcept>
#include <vector>

int main()
{
  // get input
  std::string inputString;
  std::cout << "Enter Imput String : ";
  std::cin >> inputString;

  char toReplace;
  std::cout << "Enter Charachter to replace : ";
  std::cin >> toReplace;

  char replaceWith;
  std::cout << "Enter Charachter to replace with : ";
  std::cin >> replaceWith;

  // guards
  if (toReplace == ' ' || toReplace == NULL) return 0 && std::cout << inputString;
  if (replaceWith == ' ' || replaceWith == NULL) return 0 && std::cout << inputString;

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  // clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}