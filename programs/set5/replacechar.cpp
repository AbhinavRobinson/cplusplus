#include <iostream>
#include <limits.h>
#include <math.h>
#include <vector>

/**
 * @brief Replace char in string
 * @author Abhinav Robinson
 * @return int 
 */
int main()
{
  // get input
  std::string inputString;
  std::cout << "Enter Input String (no spaces) : ";
  std::cin >> inputString;

  // get to replace char
  char toReplace;
  std::cout << "Enter Charachter to replace : ";
  std::cin >> toReplace;

  // get char to replace with
  char replaceWith;
  std::cout << "Enter Charachter to replace with : ";
  std::cin >> replaceWith;

  // convert to vector
  std::vector<char> stringVector;
  std::copy(inputString.begin(), inputString.end(), std::back_inserter(stringVector));

  // iterate on vector and replace
  for (int i = 0; i < stringVector.size(); i++)
    if (stringVector[i] == toReplace) stringVector[i] = replaceWith;

  // print result
  for (auto i : stringVector)
    std::cout << i;

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  stringVector.clear();
  inputString = "";
  toReplace = ' ';
  replaceWith = ' ';

  // clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}