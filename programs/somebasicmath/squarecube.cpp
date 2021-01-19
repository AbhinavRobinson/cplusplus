#include <iostream>
#include <limits.h>

/** Print Square Cube
 * @author Abhinav Robinson
 * @returns {int} 0
*/
int main()
{
  short int num;

  printf("Enter a number for square and cube: ");
  std::cin >> num;

  int sqr = num * num;
  int cbe = sqr * num;

  std::cout << "Square: " << sqr << std::endl;
  std::cout << "Cube: " << cbe << std::endl;

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}