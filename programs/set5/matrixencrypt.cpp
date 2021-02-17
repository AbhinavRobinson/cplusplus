#include <iostream>
#include <vector>

#include <math.h>
#include <limits.h>

/**
 * @brief Apply matrix operations to encrypt.
 * 
 *  outer elems => += i+1
 *  inner elems => -= j
 * 
 * @author Abhinav Robinson
 * @return int 
 */
int main()
{
  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}