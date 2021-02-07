#include <iostream>
#include <limits.h>
#include <numeric>

/** Prints area of circles.
 * @author Abhinav Robinson
 * @return {unsigned int} 0
*/
int main()
{
  // Get R1 and R2
  std::cout << "Finds area of circles" << std::endl;
  int r1, r2;

  std::cout << "Enter first radius ? ";
  std::cin >> r1;

  std::cout << "Enter second radius ? ";
  std::cin >> r2;

  // Now we have the Radius, lets find the area.

  std::cout << r1 << " " << r2 << std::endl;

  return 0;
}