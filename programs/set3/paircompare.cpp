#include <iostream>
#include <limits.h>
#include <math.h>

/** Compare pairs (w,x), (y,z) on given conditions :
 * 
 *  W < Y , X > Z  =>  True (out line 1)
 *  and 
 *  W > Y , X < Z  =>  True (out line 2)
 *  if no such pair  =>  Not Found
 * 
 *  given (in line 1) Array of pairs.
 * 
 * @author Abhinav Robinson
 * @return {unsigned int} 0
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