#include <iostream>
#include <limits.h>

/** Identity Squisher
 * @author Abhinav Robinson
 * @returns {int} 0
*/
int main()
{

  
  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}