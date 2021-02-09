#include <iostream>
#include <limits.h>
#include <math.h>

/** Returns the area of the circle
 * @param radius {unsigned int}
 * @returns area {float}
 */
float calcArea(unsigned radius)
{
  return 3.1415 * pow(radius, 2);
}

/** Returns the radius of the circle
 * @param area {float}
 * @returns radius {float}
*/
float calcRadius(float area)
{
  return pow(area / 3.1415, 0.5);
}

/** Prints area of circles.
 * @author Abhinav Robinson
 * @return {int} 0
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

  // lets find the radius of the mergerd circle.
  float r3 = calcRadius(A3);

  // Print the third radius.
  std::cout << "The radius of the third area is " << r3 << std::endl;

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  r1 = 0;
  r2 = 0;
  r3 = 0;
  A1 = 0;
  A2 = 0;
  A3 = 0;

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}