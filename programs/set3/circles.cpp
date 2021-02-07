#include <iostream>
#include <limits.h>
#include <numeric>
#include <math.h>

/** Returns the area of the circle
 * @param radius {unsigned int}
 * @returns area {float}
 */
float calcArea(unsigned radius)
{
  return floor(3.1415 * pow(radius, 2));
}

/** Returns the radius of the circle
 * @param area {float}
 * @returns radius {unsigned int}
*/
int calcRadius(float area)
{
  return pow(area / 3.1415, 0.5);
}

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
  float A1 = calcArea(r1);
  float A2 = calcArea(r2);

  // now we will print the area.
  std::cout << "Areas are " << A1 << " and  " << A2 << std::endl;

  // lets merge and circles.
  float A3 = A1 + A2;

  // Find new radius
  int r3 = calcRadius(A3);

  // Print the third radius.
  std::cout << "The radius of the third area is " << r3 << std::endl;

  // lets find the radius of the mergerd circle.

  return 0;
}