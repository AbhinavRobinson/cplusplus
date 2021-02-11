// Used for exit funciton
#include <limits.h>
#include <math.h>

#include <vector>
#include <iostream>
// *** End of Imports ***

using namespace std;

/** 
 * @public 
 * @class Calculate area
 * @classdesc This Class exports calcArea function (overloaded for different shapes)
*/
class CalculateArea
{
public:
  /** Prints Area
   * {Circle} calcArea
   * @memberof CalculateArea
   * @typedef {function} => {int radius}
   * @returns void
  */
  void calcArea(int radius)
  {
    cout << "Area : ";
    cout << 3.1415 * (radius * radius) << endl;
  }
  /** Prints Area
   * {Triangle} calcArea
   * @override
   * @memberof CalculateArea
   * @typedef {function} => {int base, int height}
   * @returns void
  */
  void calcArea(int base, int height)
  {
    cout << "Area : ";
    cout << 0.5 * base * height << endl;
  }
  /** Prints Area
   * {Rectangle} calcArea
   * @override
   * @memberof CalculateArea
   * @typedef {function} => {int a, int b, bool isReact}
   * @returns void
  */
  void calcArea(int a, int b, bool isRect)
  {
    cout << "Area : ";
    cout << a * b << endl;
  }
};

/** get the dimensions from user and print area
 * @typedef {int sides} getArea
 * @implements CalculateArea
 * @returns void
*/
void getArea(int sides)
{
  // init dim array
  vector<int> dimensions;

  // init class object
  CalculateArea areaGetter;

  // get dim from user
  if (sides == 3)
  {
    int b, h;
    cout << "Enter Dimensions of Triangle" << endl;
    cout << "Enter Base : ";
    cin >> b;
    dimensions.push_back(b);
    cout << "Enter Height : ";
    cin >> h;
    dimensions.push_back(h);

    // get area
    areaGetter.calcArea(b, h);
  }
  else if (sides == 4)
  {
    int a, b, c, d;
    cout << "Enter Dimensions of Rectangle" << endl;
    cout << "Enter Sides A : ";
    cin >> a;
    dimensions.push_back(a);
    cout << "Enter Sides B : ";
    cin >> b;
    dimensions.push_back(b);
    dimensions.push_back(0);
    dimensions.push_back(0);

    // get area
    areaGetter.calcArea(a, b, true);
  }
  else
  {
    int r;
    cout << "Enter Dimensions of Circle" << endl;
    cout << "Enter Radius : ";
    cin >> r;
    dimensions.push_back(r);

    // get area
    areaGetter.calcArea(r);
  }

  // end of function
  return;
}

int main()
{
  unsigned short int sides;

  // Lets get shape and dimensions
  cout << "Enter number of sides : ";
  cin >> sides;

  getArea(sides);

  // important: clean up memory
  printf("\n");
  printf("Cleaning up memory...\n");

  sides = 0;

  //clear buffer, wait for input to close program
  std::cout << "Enter Anything to Quit :)" << std::endl;
  std::cin.clear();
  std::cin.ignore(INT_MAX, '\n');
  std::cin.get();

  return 0;
}