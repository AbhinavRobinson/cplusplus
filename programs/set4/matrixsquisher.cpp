/** Given a 2D matrix, which is symmetric along it's diagonal;
 * Compress the matrix into a 1D matrix of either upper Triangle, or lower Triangle (choose at runtime: 0,1)  
 */

#include <math.h>
#include <limits.h>

#include <vector>
#include <iostream>

// *** End Of Imports ***

using namespace std;

/**
 * @function Main 
* @returns 0 { int }
 * @author Abhinav Robinson
*/
int main()
{
  int choice;
  cout << "Enter Choice (0,1)=>{upper, lower} : ";
  cin >> choice;

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  sides = 0;

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  // End of Main
  return 0;
}